// sudoku.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <cstdio>
using namespace std;

extern int basicSudoku[10][11][11];
extern void initBasicSudoku();
extern int basicSudokuNum[10][8];
extern void initBasicSudokuNum();
int sudoku[10][10];
void updateBasicSudokuNum(int num)
{
	int k = 0;
	for (int i = 6; i >= 0; i++)
	{
		if (basicSudokuNum[num][i] < basicSudokuNum[num][i + 1])
		{
			k = i;
			break;
		}
	}
	if (k == 0)
	{
		return;
	}
	int min = 10;
	int minNum = 0;
	for (int i = k + 1; i <= 7; i++)
	{
		if (basicSudokuNum[num][i] < min && basicSudokuNum[num][i] > basicSudokuNum[num][i])
		{
			min = basicSudokuNum[num][i];
			minNum = i;
		}
	}
	int tmp = basicSudokuNum[num][minNum];
	basicSudokuNum[num][minNum] = basicSudokuNum[num][k];
	basicSudokuNum[num][k] = tmp;
	for (int i = k + 1; i <= 7; i++)
	{
		int t = 7 - (i - k - 1);
		tmp = basicSudokuNum[num][i];
		basicSudokuNum[num][i] = basicSudokuNum[num][t];
		basicSudokuNum[num][t] = tmp;
		if (t - i <= 1)
		{
			break;
		}
	}
}
void createCompleteSudoku(int num) 
{
	updateBasicSudokuNum(num);
	int key = basicSudoku[num][0][0];
	int arr[10];
	arr[key] = 7;
	int counter = 0;
	for (int i = 1; i <= 9; i++)
	{
		if (i != key)
		{
			arr[i] = basicSudokuNum[num][counter];
			counter++;
		}
	}
	for (int i = 0; i < 9; i++) 
	{
		for (int j = 0; j < 9; j++)
		{
			sudoku[i][j] = arr[basicSudoku[num][i][j]];
		}
	}
}

int main()
{
	initBasicSudokuNum();
	initBasicSudoku();
	for (int j = 0; j < 1000000; j++)
	{
		createCompleteSudoku(0);
		printf("%d\n", j);
		for (int i = 0; i < 9; i++)
		{
			printf("%d", sudoku[i][0]);
			for (int j = 1; j < 9; j++)
			{
				printf(" %d", sudoku[i][j]);
			}
			printf("\n");
		}
	}
	int ttt;
	scanf_s("%d", &ttt);
    return 0;
}


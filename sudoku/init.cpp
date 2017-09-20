#include "stdafx.h"

int basicSudoku[10][11][11];
int basicSudokuNum[10][8];
int basicSudokuSum = 1;
void initBasicSudokuNum()
{
	for (int i = 0; i < basicSudokuSum; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (j < 6)
			{
				basicSudokuNum[i][j] = j + 1;
			}
			else 
			{
				basicSudokuNum[i][j] = j + 2;
			}
		}
	}
}
void initBasicSudoku()
{
	basicSudoku[0][0][0] = 2;
	basicSudoku[0][0][1] = 6;
	basicSudoku[0][0][2] = 8;
	basicSudoku[0][0][3] = 4;
	basicSudoku[0][0][4] = 7;
	basicSudoku[0][0][5] = 3;
	basicSudoku[0][0][6] = 9;
	basicSudoku[0][0][7] = 5;
	basicSudoku[0][0][8] = 1;
	basicSudoku[0][1][0] = 3;
	basicSudoku[0][1][1] = 4;
	basicSudoku[0][1][2] = 1;
	basicSudoku[0][1][3] = 9;
	basicSudoku[0][1][4] = 6;
	basicSudoku[0][1][5] = 5;
	basicSudoku[0][1][6] = 2;
	basicSudoku[0][1][7] = 7;
	basicSudoku[0][1][8] = 8;
	basicSudoku[0][2][0] = 7;
	basicSudoku[0][2][1] = 9;
	basicSudoku[0][2][2] = 5;
	basicSudoku[0][2][3] = 8;
	basicSudoku[0][2][4] = 1;
	basicSudoku[0][2][5] = 2;
	basicSudoku[0][2][6] = 3;
	basicSudoku[0][2][7] = 6;
	basicSudoku[0][2][8] = 4;
	basicSudoku[0][3][0] = 5;
	basicSudoku[0][3][1] = 7;
	basicSudoku[0][3][2] = 4;
	basicSudoku[0][3][3] = 6;
	basicSudoku[0][3][4] = 2;
	basicSudoku[0][3][5] = 1;
	basicSudoku[0][3][6] = 8;
	basicSudoku[0][3][7] = 3;
	basicSudoku[0][3][8] = 9;
	basicSudoku[0][4][0] = 1;
	basicSudoku[0][4][1] = 3;
	basicSudoku[0][4][2] = 9;
	basicSudoku[0][4][3] = 5;
	basicSudoku[0][4][4] = 4;
	basicSudoku[0][4][5] = 8;
	basicSudoku[0][4][6] = 6;
	basicSudoku[0][4][7] = 2;
	basicSudoku[0][4][8] = 7;
	basicSudoku[0][5][0] = 8;
	basicSudoku[0][5][1] = 2;
	basicSudoku[0][5][2] = 6;
	basicSudoku[0][5][3] = 3;
	basicSudoku[0][5][4] = 9;
	basicSudoku[0][5][5] = 7;
	basicSudoku[0][5][6] = 4;
	basicSudoku[0][5][7] = 1;
	basicSudoku[0][5][8] = 5;
	basicSudoku[0][6][0] = 9;
	basicSudoku[0][6][1] = 1;
	basicSudoku[0][6][2] = 7;
	basicSudoku[0][6][3] = 2;
	basicSudoku[0][6][4] = 8;
	basicSudoku[0][6][5] = 6;
	basicSudoku[0][6][6] = 5;
	basicSudoku[0][6][7] = 4;
	basicSudoku[0][6][8] = 3;
	basicSudoku[0][7][0] = 6;
	basicSudoku[0][7][1] = 8;
	basicSudoku[0][7][2] = 3;
	basicSudoku[0][7][3] = 1;
	basicSudoku[0][7][4] = 5;
	basicSudoku[0][7][5] = 4;
	basicSudoku[0][7][6] = 7;
	basicSudoku[0][7][7] = 9;
	basicSudoku[0][7][8] = 2;
	basicSudoku[0][8][0] = 4;
	basicSudoku[0][8][1] = 5;
	basicSudoku[0][8][2] = 2;
	basicSudoku[0][8][3] = 7;
	basicSudoku[0][8][4] = 3;
	basicSudoku[0][8][5] = 9;
	basicSudoku[0][8][6] = 1;
	basicSudoku[0][8][7] = 8;
	basicSudoku[0][8][8] = 6;
}
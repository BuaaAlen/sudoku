#include "stdafx.h"
#include <string>

int basicSudoku[30][10][10];
int basicSudokuNum[30][8];
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
	char *s[30];
	s[0] = "268473951341965278795812364574621839139548627826397415917286543683154792452739186";
	s[1] = "451782369786493521392156487527649813968531274134278695815367942673924158249815736";
	s[2] = "958367124237451968146928357612874593573619482489235671724593816891746235365182749";
	s[3] = "761934825354628197928157634219546378483279516576381942195762483832495761647813259";
	s[4] = "149836752576241938238579164724368591683915427951427386362794815415683279897152643";
	s[5] = "839657214672941583154832967541283796287496351963715428718329645325164879496578132";
	s[6] = "385764219794512683216398754573489126941276538962153947638925471159847362427631895";
	s[7] = "483271695976485321521396478294658137138927564657134982842563719319742856765819243";
	s[8] = "712683495693574218845291376469817523527436189381925647954762831176348952238159764";
	s[9] = "347251698685439271129786435836975124971824356452613987713562849298147563564398712";
	s[10] ="489351627576428139312769584893276451764513892251894376635947218948132765127685943";
	s[11] ="167238954234597186589164273842916735671345829395782461453829617918673542726451398";
	s[12] ="872193465651248379349657281526314798487956132913782654298476513735821946164539827";
	s[13] ="297513468381426957654987123968251734143678592572394816836145279725839641419762385";
	s[14] ="531498276479162358268753419357614892682539741194287635823945167715326984946871523";
	s[15] ="157469328986123754423587196392851467768294531514736982275918643649372815831645279";
	s[16] ="318627945976854231524193867492315678653782194187946523735268419249571386861439752";
	s[17] ="261739854359148726748562319983657241176324985425891673814976532632485197597213468";
	s[18] ="165948372283167945947325681816753294539412768724689153672834519398571426451296837";
	s[19] ="427983561951762384638451297874239156562817439319546728196324875245678913783195642";
	s[20] ="945278163781635249263491785136859472427163598859724631612987354578342916394516827";
	s[21] ="136487259875239146942615837693572418584961372217348695468753921259126784721894563";
	s[22] ="473168529129354876856927143298641735317582964645739281964875312731296458582413697";
	s[23] ="652841397731926854894537261578392146423165978916784523167253489385479612249618735";
	s[24] ="653482791712369548894751623948517362125634879367298415439175286571826934286943157";
	s[25] ="719283465384165729256497381478312596625879143931546278143628957892751634567934812";
	s[26] ="524861379173429865698735142751243986936158724482976531245317698369584217817692453";
	s[27] ="481369725792518436563274918145693872328157694976482153639745281217836549854921367";
	for (int i = 0; i < 28; i++) {
		for (int j = 0; j < 9; j++) {
			for (int k = 0; k < 9; k++) {
				basicSudoku[i][j][k] = s[i][j * 9 + k] - '0';
			}
		}
	}
}
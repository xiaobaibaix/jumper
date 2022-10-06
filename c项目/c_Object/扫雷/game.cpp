#include"game.h"
int win = 0;
extern int wins;
void Initialize(char arr[ROWS][COLS], int row, int col, char set) {
	int i;
	int j;

	for (i = 0;i < row;i++) {
		for (j = 0;j < col;j++) {
			arr[i][j] = set;
			//printf("%d\t", arr[i][j]);
		}
		//printf("\n");
	}
}


void From(char arr[ROWS][COLS], int row, int col) {
	int i;
	int j;		
	printf("                ");
	for (int n = 1;n <= col;n++) {
		if (10<=n) {
			printf(" %d ", n);
		}
		else {
			printf(" %d  ",n);
		}
		

	}
	printf("\n");
	printf("               1");
	for (i = 1;i <= row;i++) {
		for (j = 1;j <= col;j++) {
			if (j <col ) {
				printf(" %c |", arr[i][j]);
			}
			else  {
				printf(" %c ", arr[i][j]);
			}
		}
		printf("\n");
		printf("                ");
		if (i <row) {
			for (j = 1;j <=col;j++) {
				if (j <col) {
					printf("---|");
				}
				else {
					printf("---");
				}
			}
			printf("\n");
			if ( 10<=(i+1)) {
				printf("              %d", i + 1);
			}
			else {
				printf("               %d",i+1);
			}
			
			
		}
	}
	printf("\n");
}

void BuriedMine(char arr[ROWS][COLS], int row, int col) {
	int mineCount = MINE;//雷
	
	while (0<mineCount) {
		int x = rand() % row+1;//2-row+1;
		int y = rand() % col+1;//2-col+1;
		if (arr[x][y] == InitializeNummber) {
			arr[x][y] = '*';
			mineCount--;
		}
	}
	printf("\n");
}

//周围雷数字和
int MineRoundCount(char arr[ROWS][COLS],int x,int y) {
	//'1'-'0'=1;

		return (((arr[x - 1][y - 1] +
			arr[x - 1][y] +
			arr[x - 1][y + 1] +
			arr[x][y - 1] +
			arr[x][y + 1] +
			arr[x + 1][y - 1] +
			arr[x + 1][y] +
			arr[x + 1][y + 1]))-(' ' * 8)) / 10+'0';
}


void searchMine(char arrMine[ROWS][COLS], char arrMine_message[ROWS][COLS],int x,int y,int win) {

	if (x >= 1 && x <= ROW && y >= 1 && y <= COL) //限制在棋盘内展开，防止越界
	{
		int count = MineRoundCount(arrMine, x, y);//获取雷数
		if (count == '0') //四周没雷，进入递归展开
		{
			arrMine_message[x][y] = ' ';//四周没雷的改为 空格  ' '


			int i = 0;
			//向四周共8个位置递归
			for (i = x - 1; i <= x + 1; i++)
			{
				int j = 0;
				for (j = y - 1; j <= y + 1; j++)
				{

					//只对 '*' 进行展开，防止死循环
					if (arrMine_message[i][j] == '-')
					{
						searchMine(arrMine, arrMine_message, i, j, win);
					}

				}
			}
		}
		else   //四周有雷显示雷数
		{
			arrMine_message[x][y] = count ;
		}
		
		//记录展开的数量
		win++;
		printf("%d\n", win);
		wins = win;
	}
}

void Mark(char arrMine_message[ROWS][COLS], int x, int y) {
	arrMine_message[x][y] = '@';
	From(arrMine_message, ROW, COL);
	if (arrMine_message[x][y] = '@') {
		arrMine_message[x][y] = '.';
	}
}

#define  ROW 3//行
#define  COL 3//列
#include<stdio.h>
#include <stdlib.h>
#include <time.h>

//初始化空格
void Initialize(char arr[ROW][COL], int row, int col) {
	for (int i = 0;i < row;i++) {
		for (int j = 0;j < col;j++) {
			arr[i][j] = ' ';
		}
	}
}


//打印表格

void From(char arr[ROW][COL], int row, int col) {
	int i;
	int j;
	printf("               ");
	for (i = 0;i < row;i++) {
		for (j = 0;j < col;j++) {
			if (j< col - 1) {
				printf(" %c |", arr[i][j]);
			}else{
				printf(" %c ", arr[i][j]);
			}
		}
		printf("\n");
		printf("               ");
		if (i <row - 1) {
			for (j = 0;j < col;j++) {
				if (j < col - 1) {
					printf("---|");
				}
				else {
					printf("---");
				}
			}
			printf("\n");
			printf("               ");
		}
	}
}

//下棋
void Move(char arr[ROW][COL],int row,int col) {
	int count = 0;

	int x;
	int y;

	if(count==0){
		count = 1;
		printf("请输入坐标(x,y)\n");
		while (true) {
			scanf_s("%d,%d", &x, &y);
			if (arr[x - 1][y - 1] == ' ') {
				arr[x - 1][y - 1] ='*';
				//打印表格
				From(arr, ROW, COL);
				break;
			}else if(x>row||y>col) {
				printf("位置不存在，请重新输入\n");
			}
			else if (x == 0 || y == 0) {
				printf("格式错误,请重新输入\n");
			}
			else {
				printf("位置占用，请重新输入\n");
			}
		}
	}
	if(count==1) {
		count = 0;
		printf("电脑走\n");
		while (true) {
			srand((unsigned)time(NULL));
			x = rand() % row;
			y = rand() % col;

			if (arr[x][y] == ' ') {
				arr[x][y] = '#';
				break;
			}
			else {
				continue;
			}
				
				
		}
	}
}


//判断输赢
char Win(char arr[ROW][COL], int row, int col) {
	int i = 0;

	for (i = 0;i < row;i++) {
		if ((arr[i][0] == arr[i][1]) && (arr[i][1] == arr[i][2]) && arr[i][1] != ' ') {
			return arr[i][1];
		}
		if ((arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i]) && arr[1][i] != ' ') {
			return arr[1][i];
		}
	}
	if ((arr[0][0] == arr[1][1]) && (arr[1][1] == arr[2][2]) && arr[1][1] != ' ') {
		return arr[1][1];
	}
	if ((arr[0][2] == arr[1][1]) && (arr[1][1] == arr[2][0]) && arr[1][1] != ' ') {
		return arr[1][1];
	}
	return 0;
}


//开始游戏
void start() {

	char arr[ROW][COL];
	int win;
	//初始化
	Initialize(arr, ROW, COL);
	//打印表格
	From(arr, ROW, COL);
	
	//玩家先下
	while (true) {
		//下棋
		Move(arr,ROW,COL);
		//再次打印
		From(arr, ROW, COL);
		//判断输赢
		win=Win(arr, ROW, COL);
		if (win != 0) {
			break;
		}
	}
	if (win == '*') {
		printf("玩家胜\n");
		
	}
	else if(win=='#') {
		printf("电脑胜\n");
	}
}

//text
int main() {

	printf("----------------三子棋---------------\n");
	int startCount = 0;
	do {
		printf("----------------开始游戏-------------\n");
		printf("-----------请输入1-开始,2-结束-------\n");
		doo: scanf_s("%d", &startCount);
		
		switch (startCount) {
		case 1:
			start();
		case 2:
			printf("----------------游戏结束-------------\n");
			break;
		default:
			printf("---------输入错误，请重新输入数字----\n");
			goto doo;
		}

	} while (startCount == 1);

	return 0;
}


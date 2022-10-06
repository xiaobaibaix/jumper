#include"game.h"

//存储雷

 extern int win;
 int wins;
void mean() {

	printf("\n");
	printf("                      |-----------扫雷-----------|\n");
	printf("                      |-----1>>开始，2>>结束-----|\n");
	printf("                      |--------------------------|\n");
	printf("\n");
}

void start() {
	char arrMine[ROWS][COLS];
	//存储类信息
	char arrMine_message[ROWS][COLS];
	int x=0;
	int y=0;
	char z = 0;
	

	//初始化表格
	Initialize(arrMine,ROWS,COLS, InitializeNummber);
	printf("\n");
	Initialize(arrMine_message, ROWS, COLS, '-');
	
	//埋雷
	BuriedMine(arrMine, ROW, COL);
	From(arrMine_message, ROW, COL);
	//找雷
	//From(arrMine, ROW, COL);
	while (((ROW * COL) - MINE)>wins)
	{
		printf("请输入要查询的坐标：\n");
		scanf_s("%d,%d", &x, &y);
		searchMine(arrMine, arrMine_message,x,y,wins);

		if (arrMine[x][y]=='*') {
			From(arrMine, ROW, COL);
			printf("\n");
			printf("                            踩雷啦！\n");
			printf("                            游戏失败\n");
			printf("\n");
			//From(arrMine, ROW, COL);
			break;
		}else if (wins == ((ROW * COL) - MINE)) {
			printf("                          恭喜你，完成扫雷\n");
			wins = 0;
			break;
		}
		From(arrMine_message, ROW, COL);
		//printf("(ROW * COL) - MINE)=%d\n", (ROW * COL) - MINE);
	}
	//printf("(ROW * COL) - MINE)=%d\n", wins);
	
	
	

}

int main() {
	int a = 0;
	mean();
	do {
		srand((unsigned)time(NULL));
		scanf_s("%d", &a);
		if (a == 1) {
			start();
		}
		if(a==2) {
			break;
		}
		else {
			mean();
			printf("请输入数字\n");
		}
	} while (true);
	return 0;
}
#include"game.h"

//�洢��

 extern int win;
 int wins;
void mean() {

	printf("\n");
	printf("                      |-----------ɨ��-----------|\n");
	printf("                      |-----1>>��ʼ��2>>����-----|\n");
	printf("                      |--------------------------|\n");
	printf("\n");
}

void start() {
	char arrMine[ROWS][COLS];
	//�洢����Ϣ
	char arrMine_message[ROWS][COLS];
	int x=0;
	int y=0;
	char z = 0;
	

	//��ʼ�����
	Initialize(arrMine,ROWS,COLS, InitializeNummber);
	printf("\n");
	Initialize(arrMine_message, ROWS, COLS, '-');
	
	//����
	BuriedMine(arrMine, ROW, COL);
	From(arrMine_message, ROW, COL);
	//����
	//From(arrMine, ROW, COL);
	while (((ROW * COL) - MINE)>wins)
	{
		printf("������Ҫ��ѯ�����꣺\n");
		scanf_s("%d,%d", &x, &y);
		searchMine(arrMine, arrMine_message,x,y,wins);

		if (arrMine[x][y]=='*') {
			From(arrMine, ROW, COL);
			printf("\n");
			printf("                            ��������\n");
			printf("                            ��Ϸʧ��\n");
			printf("\n");
			//From(arrMine, ROW, COL);
			break;
		}else if (wins == ((ROW * COL) - MINE)) {
			printf("                          ��ϲ�㣬���ɨ��\n");
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
			printf("����������\n");
		}
	} while (true);
	return 0;
}
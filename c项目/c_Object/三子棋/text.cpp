#define  ROW 3//��
#define  COL 3//��
#include<stdio.h>
#include <stdlib.h>
#include <time.h>

//��ʼ���ո�
void Initialize(char arr[ROW][COL], int row, int col) {
	for (int i = 0;i < row;i++) {
		for (int j = 0;j < col;j++) {
			arr[i][j] = ' ';
		}
	}
}


//��ӡ���

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

//����
void Move(char arr[ROW][COL],int row,int col) {
	int count = 0;

	int x;
	int y;

	if(count==0){
		count = 1;
		printf("����������(x,y)\n");
		while (true) {
			scanf_s("%d,%d", &x, &y);
			if (arr[x - 1][y - 1] == ' ') {
				arr[x - 1][y - 1] ='*';
				//��ӡ���
				From(arr, ROW, COL);
				break;
			}else if(x>row||y>col) {
				printf("λ�ò����ڣ�����������\n");
			}
			else if (x == 0 || y == 0) {
				printf("��ʽ����,����������\n");
			}
			else {
				printf("λ��ռ�ã�����������\n");
			}
		}
	}
	if(count==1) {
		count = 0;
		printf("������\n");
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


//�ж���Ӯ
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


//��ʼ��Ϸ
void start() {

	char arr[ROW][COL];
	int win;
	//��ʼ��
	Initialize(arr, ROW, COL);
	//��ӡ���
	From(arr, ROW, COL);
	
	//�������
	while (true) {
		//����
		Move(arr,ROW,COL);
		//�ٴδ�ӡ
		From(arr, ROW, COL);
		//�ж���Ӯ
		win=Win(arr, ROW, COL);
		if (win != 0) {
			break;
		}
	}
	if (win == '*') {
		printf("���ʤ\n");
		
	}
	else if(win=='#') {
		printf("����ʤ\n");
	}
}

//text
int main() {

	printf("----------------������---------------\n");
	int startCount = 0;
	do {
		printf("----------------��ʼ��Ϸ-------------\n");
		printf("-----------������1-��ʼ,2-����-------\n");
		doo: scanf_s("%d", &startCount);
		
		switch (startCount) {
		case 1:
			start();
		case 2:
			printf("----------------��Ϸ����-------------\n");
			break;
		default:
			printf("---------���������������������----\n");
			goto doo;
		}

	} while (startCount == 1);

	return 0;
}


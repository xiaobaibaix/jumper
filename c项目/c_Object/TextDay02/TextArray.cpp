#include<stdio.h>
#include <stdlib.h>
#include <time.h>

/*
��Ҫָ��
*/
int* GetRandom() {

	static int Array[10];//���뾲̬
	srand((unsigned)time(NULL));
	for (int i = 0;i < 10;i++) {
		Array[i] = rand();
		printf("%d\n", Array[i]);

	}
	return Array;//����������
}

//int main() {
//	int* p;/*����ָ��*/
//	p = GetRandom();//����ָ��Arraysh
//	printf("---------------------\n");
//	for (int i =0;i < 10;i++) {
//		
//		printf("%d\n", p[i]);
//
//	}
//	return 0;
//}
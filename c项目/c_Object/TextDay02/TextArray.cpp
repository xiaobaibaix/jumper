#include<stdio.h>
#include <stdlib.h>
#include <time.h>

/*
需要指针
*/
int* GetRandom() {

	static int Array[10];//必须静态
	srand((unsigned)time(NULL));
	for (int i = 0;i < 10;i++) {
		Array[i] = rand();
		printf("%d\n", Array[i]);

	}
	return Array;//返回数组名
}

//int main() {
//	int* p;/*锁定指针*/
//	p = GetRandom();//引用指向Arraysh
//	printf("---------------------\n");
//	for (int i =0;i < 10;i++) {
//		
//		printf("%d\n", p[i]);
//
//	}
//	return 0;
//}
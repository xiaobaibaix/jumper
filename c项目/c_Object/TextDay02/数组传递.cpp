#include<stdio.h>
const int MAX = 3;
void computer();

int Average(int arr[], int size) {

	int sum=0;
	double result;
	for (int i = 0;i < size;i++) {
		sum+= arr[i];
	}
	result = sum / size;
	return result;
}

//ָ��ֻ��һ������
void pointerPut(int arr[],int MAX) {
	int* p;
	//ָ��ָ���һ������Ԫ��
	p = arr;
	for (int i = 0;i < MAX ;i++) {
		printf("����Ԫ�ص�ַarr[%d]=%d\n", i, p);
		printf("����Ԫ��ֵarr[%d]=%d\n", i, *p);
		p++;
	}
}



int main() {
	int arr1[4] = { 100,50,45, };
	double result = Average(arr1, 4);
	printf("%f\n", result);
	computer();


	int arr[] = { 100,20,50 };
	pointerPut(arr,MAX);

	return 0;
}

//�žų˷���
void computer() {

	int a = 9;
	for (int i = 1;i <= a;i++) {
		for (int j = 1;j <= i;j++) {
			printf("%d*%d=%d\t", j, i, j * i);
		}
		printf("\n");
	}

}

double getAverage(int* arr, int size)
{
	int    i, sum = 0;
	double avg;

	for (i = 0; i < size; ++i)
	{
		sum += arr[i];
	}

	avg = (double)sum / size;

	return avg;
}
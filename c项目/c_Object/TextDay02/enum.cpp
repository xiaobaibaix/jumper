#include<stdio.h>
//һ
enum Day {
	MON = 1, TUE, WED, THU, FRI, SAT, SUN
}day;
 ;
//��
enum Season {
	Spring, Summer = 2, Autumn, Winter
}season;
//��
enum Mouth{
	January=1,February=2,March=3,April=4,May=5,June=6,July=7,August=8,September=9,October=10,November=11,December=12
};
//int main()
//{
//    // ����ö��Ԫ��
//	enum Mouth mouth;
//	scanf("%u", &mouth);//����ȫ��
//
//	switch (mouth)
//	{
//	case January:
//		printf("һ��");
//		break;
//	case February:
//		printf("����");
//		break;
//	case March:
//		printf("����");
//		break;
//	case April:
//		printf("����");
//		break;
//	case May:
//		printf("����");
//		break;
//	case June:
//		printf("����");
//		break;
//	case July:
//		printf("����");
//		break;
//	case August:
//		printf("����");
//		break;
//	case September:
//		printf("����");
//		break;
//	case October:
//		printf("ʮ��");
//		break;
//	case November:
//		printf("ʮһ��");
//		break;
//	case December:
//		printf("ʮ����");
//		break;
//	default:
//		printf("û�д��·�");
//		break;
//	}
//
//}
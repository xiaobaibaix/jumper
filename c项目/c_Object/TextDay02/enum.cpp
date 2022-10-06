#include<stdio.h>
//一
enum Day {
	MON = 1, TUE, WED, THU, FRI, SAT, SUN
}day;
 ;
//二
enum Season {
	Spring, Summer = 2, Autumn, Winter
}season;
//三
enum Mouth{
	January=1,February=2,March=3,April=4,May=5,June=6,July=7,August=8,September=9,October=10,November=11,December=12
};
//int main()
//{
//    // 遍历枚举元素
//	enum Mouth mouth;
//	scanf("%u", &mouth);//不安全？
//
//	switch (mouth)
//	{
//	case January:
//		printf("一月");
//		break;
//	case February:
//		printf("二月");
//		break;
//	case March:
//		printf("三月");
//		break;
//	case April:
//		printf("四月");
//		break;
//	case May:
//		printf("五月");
//		break;
//	case June:
//		printf("六月");
//		break;
//	case July:
//		printf("七月");
//		break;
//	case August:
//		printf("八月");
//		break;
//	case September:
//		printf("九月");
//		break;
//	case October:
//		printf("十月");
//		break;
//	case November:
//		printf("十一月");
//		break;
//	case December:
//		printf("十二月");
//		break;
//	default:
//		printf("没有此月份");
//		break;
//	}
//
//}
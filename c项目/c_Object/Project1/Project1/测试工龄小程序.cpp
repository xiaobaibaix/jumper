#include<stdio.h>
int main(void)
{
    char sex;
    int age;
    printf("请输入你的性别简称！男(M),女(F)\n");
    scanf_s("%c", &sex);
    switch (sex)
    {
    case 'M':
    case 'm':
        printf("你的性别为“男”请你进入测试!\n");
        printf("请输入你的工龄！\n");
        scanf_s("%2d", &age);
        switch (age)
        {
        case 5:
            printf("奖励iphone一台！！\n");
            break;
        case 10:
            printf("奖励汽车一辆！！\n");
            break;
        case 15:
            printf("奖励小楼一栋！！\n");
            break;
        default:
            printf("抱歉,未满足奖励条件或者超出工龄！！\n");
            break;
        }
        break;
    case 'F':
    case 'f':
        printf("你的性别为“女”请你进入测试!\n");
        printf("请出入你的工龄！\n");
        scanf_s("%2d", &age);
        switch (age)
        {
        case 5:
            printf("奖励iphone一台！\n");
            break;
        case 10:
            printf("奖励名牌化妆品一套！\n");
            break;
        case 15:
            printf("奖励爱马仕包一个！\n");
            break;
        default:
            printf("抱歉, 未满足奖励条件或者超出工龄！！\n");
            break;
        }
        break;
    }
    return 0;
}
#include<stdio.h>
int main(void)
{
    char sex;
    int age;
    printf("����������Ա��ƣ���(M),Ů(F)\n");
    scanf_s("%c", &sex);
    switch (sex)
    {
    case 'M':
    case 'm':
        printf("����Ա�Ϊ���С�����������!\n");
        printf("��������Ĺ��䣡\n");
        scanf_s("%2d", &age);
        switch (age)
        {
        case 5:
            printf("����iphoneһ̨����\n");
            break;
        case 10:
            printf("��������һ������\n");
            break;
        case 15:
            printf("����С¥һ������\n");
            break;
        default:
            printf("��Ǹ,δ���㽱���������߳������䣡��\n");
            break;
        }
        break;
    case 'F':
    case 'f':
        printf("����Ա�Ϊ��Ů������������!\n");
        printf("�������Ĺ��䣡\n");
        scanf_s("%2d", &age);
        switch (age)
        {
        case 5:
            printf("����iphoneһ̨��\n");
            break;
        case 10:
            printf("�������ƻ�ױƷһ�ף�\n");
            break;
        case 15:
            printf("���������˰�һ����\n");
            break;
        default:
            printf("��Ǹ, δ���㽱���������߳������䣡��\n");
            break;
        }
        break;
    }
    return 0;
}
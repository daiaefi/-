#include<stdio.h>
int main()
{
    int fun(int i,int j);
    int a,b,c;
    printf("Please enter a and b:\n");
    scanf("%d %d",&a,&b);  //������λ������a��b
    c=fun(a,b);
    printf("The number c is %d\n",c);  //���������c
    return 0;
}

int fun(int i,int j)
{
    int c1,c2,c3,c4;  //c1��c2��c3��c4�ֱ��Ӧc��ǧλ����λ��ʮλ����λ
    c1=i%10;
    c2=j/10;
    c3=i/10;
    c4=j%10;
    return (c1*1000+c2*100+c3*10+c4);
}
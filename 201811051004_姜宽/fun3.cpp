#include<stdio.h>
void fun(int a,int b,long*c)
{
    int c1,c2,c3,c4;  //c1��c2��c3��c4�ֱ��Ӧc��ǧλ����λ��ʮλ����λ
    c1=a%10;
    c2=b/10;
    c3=a/10;
    c4=b%10;
    *c=(c1*1000+c2*100+c3*10+c4);
}
void main()
{
	int a,b;long c;
    printf("Please enter a and b:\n");
    scanf("%d %d",&a,&b);  //������λ������a��b
    fun(a,b,&c);
    printf("The number c is %ld\n",c);  //���������c
}

/*#include<stdio.h>
void main()
{
    //void fun(int a,int b,long*c);
    int a,b,long c;
    printf("Please enter a and b:\n");
    scanf("%d %d",&a,&b);  //������λ������a��b
    //printf("Please enter b:\n");
    // scanf("%d",&b);  //����������b
    fun(a,b,&c);
    printf("The number c is %ld\n",c);  //�����λ������c
    return 0;
}

void fun(int a,int b,long*c)
{
    int c1,c2,c3,c4;  //c1��c2��c3��c4�ֱ��Ӧc��ǧλ����λ��ʮλ����λ
    c1=a%10;
    c2=b/10;
    c3=a/10;
    c4=b%10;
    *c=(long)(c1*1000+c2*100+c3*10+c4);
    // c5=(c1*1000+c2*100+c3*10+c4);
 	// return c5;
}*/
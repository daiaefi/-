#include<iostream>
using namespace std;
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
    cout<<"������a��b:"<<endl;
    cin>>a>>b;  //������λ������a��b
    fun(a,b,&c);
    cout<<"���cΪ:"<<c<<endl;  //�����λ������c
}


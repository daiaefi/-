#include<iostream>
using namespace std;
void fun(int a,int b,long*c)
{
    int c1,c2,c3,c4;  //c1、c2、c3、c4分别对应c的千位、百位、十位、个位
    c1=a%10;
    c2=b/10;
    c3=a/10;
    c4=b%10;
    *c=(c1*1000+c2*100+c3*10+c4);
}
void main()
{
	int a,b;long c;
    cout<<"请输入a和b:"<<endl;
    cin>>a>>b;  //输入两位正整数a、b
    fun(a,b,&c);
    cout<<"输出c为:"<<c<<endl;  //输出四位正整数c
}


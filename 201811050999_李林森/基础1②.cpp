#include<iostream>
using namespace std;
int main()
{
    int fun(int &a,int &b);
    int a,b,c;
    cout<<"请输入a和b:"<<endl;
    cin>>a>>b;  //输入两位正整数a、b
    c=fun(a,b);
   cout<<"输出c为:"<<c<<endl;  //输出四位正整数c
    return 0;
}

int fun(int &a,int &b)
{
    int c1,c2,c3,c4,c;  //c1、c2、c3、c4分别对应c的千位、百位、十位、个位
    c1=a%10;
    c2=b/10;
    c3=a/10;
    c4=b%10;
    c=(c1*1000+c2*100+c3*10+c4);
	return c;
}
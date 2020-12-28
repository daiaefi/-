#include<iostream>
using namespace std;
int fun(int a,int b)
{
	int c1,c2,c3,c4,c;//c1表个位，c2表十位依次
	c1=b/10;
	c2=a/10;
	c3=b%10;
	c4=a%10;
	c=c1+c2*10+c3*100+c4*1000;
	return(c);
}
void main()
{
	int a,b,c;
	cout<<"请输入两个两位数整数"<<endl;
	cin>>a>>b;
	c=fun(a,b);
	cout<<"合并后的数c="<<c<<endl;
}
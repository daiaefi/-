#include<iostream>
using namespace std;
int fun(int a,int b)
{
	int c1,c2,c3,c4,c;//c1���λ��c2��ʮλ����
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
	cout<<"������������λ������"<<endl;
	cin>>a>>b;
	c=fun(a,b);
	cout<<"�ϲ������c="<<c<<endl;
}
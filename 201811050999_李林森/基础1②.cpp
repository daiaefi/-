#include<iostream>
using namespace std;
int main()
{
    int fun(int &a,int &b);
    int a,b,c;
    cout<<"������a��b:"<<endl;
    cin>>a>>b;  //������λ������a��b
    c=fun(a,b);
   cout<<"���cΪ:"<<c<<endl;  //�����λ������c
    return 0;
}

int fun(int &a,int &b)
{
    int c1,c2,c3,c4,c;  //c1��c2��c3��c4�ֱ��Ӧc��ǧλ����λ��ʮλ����λ
    c1=a%10;
    c2=b/10;
    c3=a/10;
    c4=b%10;
    c=(c1*1000+c2*100+c3*10+c4);
	return c;
}
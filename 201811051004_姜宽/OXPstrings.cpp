#include<iostream>
#include<string>
using namespace std;
void main()
{
	int M,N,C;//M,N,C�ֱ��ʾN�С�M�к�������C
	char s[50][50];
	cout<<"���������ά�ȼ����ڣ�"<<endl;
	cin>>M>>N;
    cout<<"����������ͼ"<<endl;
    for(int i=0;i<N;i++)//�������
	{
		for(int j=0;j<M;j++)
		{
			cin>>s[i][j];
		}
	}
    cout<<"������������C��"<<endl;
	cin>>C;
    for(int T=0;T<C;T++)//����������Ⱦ����
	{
	  for(int a=0;a<N;a++)
	  {
		for(int b=0;b<M;b++)
		{//����⵽�ĸ�Ⱦ��X�滻ΪB����ֹ�����������
			if(s[a][b]=='X')
				s[a][b]='B';
		}
	  }
	  for(int i=0;i<N;i++)
	  {
		for(int j=0;j<M;j++)
		{
			if(s[i][j]=='B')//��Ⱦ����
			{
				s[i][j]='X';
			  if(s[i][j-1]=='O')
				  s[i][j-1]='X';
			  if(s[i][j+1]=='O')
				  s[i][j+1]='X';
			  if(s[i+1][j]=='O')
				  s[i+1][j]='X';
			  if(s[i-1][j]=='O')
				  s[i-1][j]='X';
			}
		}
	  }
	}
	cout<<"��Ⱦ��ľ����ͼ:"<<endl;
 for(int p=0;p<N;p++)
	{
		for(int q=0;q<M;q++)
		{
			cout<<s[p][q];
		}
		cout<<endl;
	}
}

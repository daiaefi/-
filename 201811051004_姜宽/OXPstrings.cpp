#include<iostream>
#include<string>
using namespace std;
void main()
{
	int M,N,C;//M,N,C分别表示N行、M列和周期数C
	char s[50][50];
	cout<<"请输入矩阵维度及周期："<<endl;
	cin>>M>>N;
    cout<<"请输入矩阵地图"<<endl;
    for(int i=0;i<N;i++)//输入矩阵
	{
		for(int j=0;j<M;j++)
		{
			cin>>s[i][j];
		}
	}
    cout<<"请输入周期数C："<<endl;
	cin>>C;
    for(int T=0;T<C;T++)//经历病毒感染周期
	{
	  for(int a=0;a<N;a++)
	  {
		for(int b=0;b<M;b++)
		{//将检测到的感染者X替换为B，防止后续检测误判
			if(s[a][b]=='X')
				s[a][b]='B';
		}
	  }
	  for(int i=0;i<N;i++)
	  {
		for(int j=0;j<M;j++)
		{
			if(s[i][j]=='B')//感染部分
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
	cout<<"感染后的矩阵地图:"<<endl;
 for(int p=0;p<N;p++)
	{
		for(int q=0;q<M;q++)
		{
			cout<<s[p][q];
		}
		cout<<endl;
	}
}

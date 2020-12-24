#include<iostream>
using namespace std;
int main()
{
    int n;
    int i,j;
    int math,english,grade;
    int result[500][2]={0},chinese[500]={0};

    cout<<"学生人数为："<<endl;
    cin>>n;
	cout<<"学生语文、数学、英语成绩为："<<endl;
    for(i=1;i<=n;i++)
    {
       
        cin>>chinese[i]>>math>>english;//输入各科成绩
        grade=chinese[i]+math+english;//计算总分
        result[i][0]=i;
        result[i][1]=grade;
    }

    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            if(result[j][1]<result[j+1][1])//按总分排序
            {
                swap(result[j][0],result[j+1][0]);
                swap(result[j][1],result[j+1][1]);
                swap(chinese[j],chinese[j+1]);
            }
            else if( result[j][1]==result[j+1][1] && chinese[j]<chinese[j+1])//按语文成绩排序
            {
                swap(result[j][0],result[j+1][0]);
                swap(result[j][1],result[j+1][1]);
                swap(chinese[j],chinese[j+1]);
            }
            else if( result[j][1]==result[j+1][1] && chinese[j]==chinese[j+1] && result[j][0]>result[j+1][0] )//按学号排序
            {
                swap(result[j][0],result[j+1][0]);
                swap(result[j][1],result[j+1][1]);
                swap(chinese[j],chinese[j+1]);
            }
        }
    }
    cout<<"排序结果为："<<endl;
    for(i=1;i<=5;i++)	
        cout<<result[i][0]<<" "<<result[i][1]<<endl;
    return 0;
}
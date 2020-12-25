#include <iostream>
#include <algorithm>
using namespace std;

struct student 
{
	int chinese;//语文成绩
	int math;//数学成绩
	int english;//英语成绩
	int num;//序号
	int sum;//总分
}s[200];
//结构体
int cmp(student p1, student p2) 
{
	if (p1.sum == p2.sum && p1.chinese != p2.chinese) 
	{//总分相同，语文成绩高排在前
		return p1.chinese > p2.chinese;
	}
	if (p1.sum == p2.sum && p1.chinese == p2.chinese) 
	{//总分相同，语文成绩相同，序号小在前
		return p1.num < p2.num;
	}
	else 
	{//否则总分越高在越前
		return p1.sum > p2.sum;
	}
}

int main() 
{
	int n;//人数
	int i;
	cin >> n;
	for (i = 1; i <= n; i++) 
	{//输入学习成绩并求和
		s[i].num = i;
		cin >> s[i].chinese >> s[i].math >> s[i].english;
		s[i].sum = s[i].chinese + s[i].math + s[i].english;
	}
	sort(1 + s, 1 + n + s, cmp);//排序
	cout << endl;
	for (i = 1; i <= 5; i++) 
	{//输出前5名的学号以及总分
		cout << s[i].num << " " << s[i].sum << endl;
	}
	return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

struct student 
{
	int chinese;//���ĳɼ�
	int math;//��ѧ�ɼ�
	int english;//Ӣ��ɼ�
	int num;//���
	int sum;//�ܷ�
}s[200];
//�ṹ��
int cmp(student p1, student p2) 
{
	if (p1.sum == p2.sum && p1.chinese != p2.chinese) 
	{//�ܷ���ͬ�����ĳɼ�������ǰ
		return p1.chinese > p2.chinese;
	}
	if (p1.sum == p2.sum && p1.chinese == p2.chinese) 
	{//�ܷ���ͬ�����ĳɼ���ͬ�����С��ǰ
		return p1.num < p2.num;
	}
	else 
	{//�����ܷ�Խ����Խǰ
		return p1.sum > p2.sum;
	}
}

int main() 
{
	int n;//����
	int i;
	cin >> n;
	for (i = 1; i <= n; i++) 
	{//����ѧϰ�ɼ������
		s[i].num = i;
		cin >> s[i].chinese >> s[i].math >> s[i].english;
		s[i].sum = s[i].chinese + s[i].math + s[i].english;
	}
	sort(1 + s, 1 + n + s, cmp);//����
	cout << endl;
	for (i = 1; i <= 5; i++) 
	{//���ǰ5����ѧ���Լ��ܷ�
		cout << s[i].num << " " << s[i].sum << endl;
	}
	return 0;
}
#include<iostream>
using namespace std;
class vehicle//����������
{
public://���г�Ա
vehicle(int x,double y)
{
	wheel=x;
    weight=y;
}
void print()
{
	cout<<"vehicle��Ϣ:\n";
    cout<<"���ָ�����"<<wheel<<endl<<"����������"<<weight<<endl;
}
protected://˽�г�Ա
int wheel;
double weight;
};
class car:public vehicle
{
private:
int people;
public:
car(int a,double b,int c):vehicle(a,b)
{
	people=c;
}
void print()
{
cout<<"car��Ϣ:\n";
vehicle::print();
cout<<"������:"<<people<<endl;
}
};
class truck:private vehicle
{
private:
int people;
double loadweight;
public:
truck(int a,double b,int peo,double loadw):vehicle(a,b)
{
people= peo;
loadweight= loadw;
}
void print()
{
cout<<"truck��Ϣ��\n";
vehicle::print();
cout<<"��������"<<people<<endl<<"��������"<<loadweight<<endl;
}
};
void main()
{
vehicle veh(12,30);
veh.print();
car car(4,10,4);
car.print();
truck tru(8,30,10,60);
tru.print();
}
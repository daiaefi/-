#include<iostream>
using namespace std;
class vehicle//构造汽车类
{
public://公有成员
vehicle(int x,double y)
{
	wheel=x;
    weight=y;
}
void print()
{
	cout<<"vehicle信息:\n";
    cout<<"车轮个数："<<wheel<<endl<<"车的重量："<<weight<<endl;
}
protected://私有成员
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
cout<<"car信息:\n";
vehicle::print();
cout<<"载人数:"<<people<<endl;
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
cout<<"truck信息：\n";
vehicle::print();
cout<<"载人数："<<people<<endl<<"载重量："<<loadweight<<endl;
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
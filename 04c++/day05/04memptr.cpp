#include <iostream>

using namespace std;

struct Date{
	/*注意访问权限*/
	int year;
	int month;
	int day;
	Date(int year=0,int month=0,int day=0):year(year),month(month),day(day){
		
	}
};
class MyTime{
	int hour;
	int sec;
	int min;
	int *pmem=&hour;
	public:
	MyTime(){
	
	}
};

int main(){
	/*定义一个Date类型 对应的成员指针*/
	union{
		int Date::*pmem;
		int *p;
	};
	
	/* 赋值 */
	pmem=&Date::year;
	cout<<"pmem="<<p<<endl;
	Date date(2014,3,18);
	cout <<date.*pmem<<endl;
	pmem=&Date::month;
	cout<<"pmem="<<p<<endl;
	cout <<date.*pmem<<endl;
}

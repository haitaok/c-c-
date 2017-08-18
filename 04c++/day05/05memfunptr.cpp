#include <iostream>
using namespace std;

struct Date{
	/*注意访问权限*/
	int year;
	int month;
	int day;
	Date(int year=0,int month=0,int day=0):year(year),month(month),day(day){
		
	}
	void showYear(){
		cout <<year<<endl;
	}
	void showMonth(){
		cout <<month<<endl;
	}
};

int main(){
	/*定义一个成员函数指针*/
	void (Date::*pfun)();
	/*赋值*/
	pfun=&Date::showYear;
	/*创建对象 通过对象去调用成员函数*/
	Date date1(2014,2,3);
	(date1.*pfun)();
	pfun=&Date::showMonth;
	Date *date2 = new Date(2020,10,11);
	(date2->*pfun)();
	
}

#include <iostream>
using namespace std;

struct Emp{

};
/* 定义一个日期类型 年 月 日 在结构体中提供表现日期的函数*/
struct Date{
	int year;
	int month;
	int day;
	void showDate(){
		cout<<year<<"年"<<month<<"月"<<day<<"日"<<endl;
	}
};
void showDate(Date *date){
	cout<<date->year<<"年"<<date->month<<"月"<<date->day<<"日"<<endl;
}
int main(){
	cout<<"空结构体大小:"<<sizeof(Emp)<<endl;
	Emp emp;
	cout<<"空结构体对象大小:"<<sizeof emp<<endl;	
	Date date={2017,8,11};
	showDate(&date);
	/* 访问成员变量 */
	date.year=2015;
	/*调用成员函数 */
	date.showDate();
}


#include <iostream>
#include <sstream>
using namespace std;

struct Date{
	int year;
	int month;
	int day;
};
/*重载输出流运算符函数*/
ostream& operator<<(ostream& os,const Date& d){
	return os<<d.year<<"-"<<d.month<<"-"<<d.day;
}

int main(){
	istringstream istr("abc 123 7867.45");
	string name;
	int num;
	double salary;
	/*从字符串流对象中获取数据*/
	istr>>name>>num>>salary;
	cout <<name<<endl;
	cout <<num<<endl;
	cout <<salary<<endl;
	Date date={2014,3,24};
	cout <<date<<endl;
	/*如果一个对象重载了输出运算符
		则可以使用字符串输出流 把对象变成字符串
	*/
	ostringstream ostr;
	ostr<<date;
	cout <<ostr.str()<<endl;
}

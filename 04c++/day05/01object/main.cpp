#include <iostream>
#include "mytime.h"

using namespace std;

int main(){
	MyTime mt1;
	MyTime mt2(12);
	//MyTime mt3(); 这是函数声明
	MyTime();//创建匿名的对象
	MyTime(1,2,3);
	
	MyTime* pmt1 = new MyTime;
	MyTime* pmt2 = new MyTime();
	MyTime* pmt3 = new MyTime(1,2,3);
	MyTime* parr = new MyTime[5];
	delete[] parr;
	const MyTime mt8;
	cout <<MyTime::g_c <<endl;
}


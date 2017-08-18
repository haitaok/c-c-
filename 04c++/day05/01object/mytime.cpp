#include <iostream>
#include "mytime.h"
using namespace std;
/*int hour;
int min;
int sec;*/
int MyTime::g_c;
MyTime::MyTime():hour(0),min(0){
	sec=0;
}
MyTime::MyTime(int hour,int min,int sec):hour(hour),min(min){
	this->sec=sec;
}
MyTime::~MyTime(){
	cout <<"~MyTime()"<<endl;
}
MyTime::MyTime(const MyTime& mt){
	cout <<"MyTime(const MyTime&)"<<endl;
}
void MyTime::show(){
	cout <<hour<<":"<<min<<":"<<sec<<endl;
}
void MyTime::dida(){

}
void MyTime::run(){

}


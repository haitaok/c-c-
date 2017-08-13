#include <iostream>
#include <string>

using namespace std;
struct Dog{
	string dogno;
	string name;
	int weight;
	int age;
	void paly(){
		cout << name << "逗你开心" <<endl;
	}
	void show(){
		cout << name <<" "<< age <<" "<< weight <<endl;
	}
	void fun(){
		cout << name <<"在看家"<<endl;
	}
	
};

int main(){
	Dog dog1;
	dog1.name="wangcai";
	dog1.age = 2;
	dog1.weight=10;
	dog1.dogno="bj001";
	cout <<sizeof(Dog)<<endl;
	cout <<sizeof dog1<<endl;
	dog1.paly();
	dog1.show();
	dog1.fun();
}

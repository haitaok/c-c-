#include <iostream>
using namespace std;
class Animal{
	public:
	string name;
	int age;
	void show(){
		cout << "this is show()" << endl;
	}
};
/*
	另一种代码复用方式 和 功能扩展 
	组合技术
*/
class Dog{
	private:
	Animal animal;
	public:
	void show(){
		animal.show();
	}
	/*扩展新功能*/
	void fun(){
		cout << "开始看家"<<endl;
	}
};
int main(){
	/*Dog dog;
	dog.name="wangcai";
	dog.show();*/
	Dog dog;
	//dog.animal.name="wangcai";
	//dog.animal.show();
	dog.show();
	dog.fun();
}


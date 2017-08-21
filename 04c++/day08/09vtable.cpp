#include <iostream>
#include <cstring>
using namespace std;

/*多态的底层实现原理*/
class Animal{
	public:
	virtual void fun(){
		cout <<"Animal fun 很抽象"<<endl;
	}
	virtual void show(){
		cout <<"Animal show很抽象"<<endl;
	}
};
class Dog:public Animal{
	public:
	void fun(){
		cout <<"Dog fun 看家"<<endl;
	}
	void show(){
		cout <<"Dog show 汪汪" <<endl;
	}
};
class Cat:public Animal{
	public:
	void fun(){
		cout <<"Cat 抓老鼠"<<endl;
	}
	void show(){
		cout<<"Cat show 喵喵"<<endl;
	}
};
int main(){
	/*每个类型都有自己的虚函数表
		同类型的对象 共享一张虚表
	*/
	Animal animal;
	long long* ptr =reinterpret_cast<long long*>(&animal);
	cout <<hex <<	*ptr << endl;
	Dog doga;
	ptr = reinterpret_cast<long long*>(&doga);
	cout <<hex<< *ptr<<endl;
	Dog dogb;
	ptr = reinterpret_cast<long long*>(&dogb);
	cout <<hex<< *ptr<<endl;
	Cat cat;
	ptr=reinterpret_cast<long long*>(&cat);
	cout << hex<< *ptr <<endl;
	/*创建三个对象*/
	Animal* dogOne=new Dog();
	Animal* dogTwo = new Dog();
	Animal* cat1 = new Cat();
	dogOne->fun();
	dogTwo->fun();
	/*把cat对应内存的前四个字节 覆盖掉dogone对应的内存的前四个字节*/
	cout << "----------"<<endl;
	memcpy(dogOne,cat1,8);
	dogOne->fun();
	dogTwo->fun();
}

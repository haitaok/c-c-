#include <iostream>
using namespace std;

class Animal{
	public:
	virtual void show(){
		cout <<"this is Animal show"<<endl;
	}
	void run(){
		cout <<"this is Animal run"<<endl;
	}	
};
class Dog:public Animal{
	public:
	/*函数重写 相同函数名 参数列表 返回值必须相同*/
	void show(){
		cout <<"this is Dog show"<<endl;
	}
	/*run 不是虚函数 所以这是namehide*/
	void run(){
		cout <<"this is Dog run"<<endl;
	}
};
int main(){
	Animal* pa = new Animal();
	/*Animal */
	pa->show();
	pa->run();
	delete pa;
	pa=new Dog();
	/* virtual show() Dog */
	pa->show();
	/* Animal */
	pa->run();
	delete pa;
}

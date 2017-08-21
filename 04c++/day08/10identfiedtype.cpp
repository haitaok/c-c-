#include <iostream>
#include <typeinfo>
using namespace std;
class Animal{
	public:
	virtual void run(){
		cout <<"animal run"<<endl;
	}	
};
class Dog:public Animal{
	public:
	void run(){
		cout <<"dog 用四条腿跑"<<endl;
	}
	void dogfun(){
		cout <<"dog 的特殊功能是看家"<<endl;
	}
};
class Cat:public Animal{
	public:
	void run(){
		cout <<"cat 用四条腿跑"<<endl;
	}
	void catfun(){
		cout <<"cat的特殊功能是抓老鼠"<<endl;
	}
};
class Fish:public Animal{
	public:
	void run(){
		cout <<"fish 用qi在水中游"<<endl;
	}
};
void showAnimal(Animal* animal){
	/*这里体现了多态*/
	animal->run();
	/*把具体类型识别出来
	if(dynamic_cast<Dog*>(animal)){
		((Dog*)(animal))->dogfun();
	}
	if(dynamic_cast<Cat*>(animal)){
		((Cat*)(animal))->catfun();
	}*/
	if(typeid(*animal)==typeid(Dog)){
		((Dog*)(animal))->dogfun();
	}
	if(typeid(*animal)==typeid(Cat)){
		((Cat*)(animal))->catfun();
	}
	
	
}
int main(){
	Animal *pa=new Cat();
	/*如果转换成功 pd为非空*/
	Dog *pd = dynamic_cast<Dog*>(pa);
	cout << pd<<endl;
	showAnimal(pa);
	pa=new Dog();
	showAnimal(pa);
	pa=new Fish();
	showAnimal(pa);
}

#include <iostream>
using namespace std;

class Animal{
	public:
	Animal(){}
	Animal(const Animal& a){
		cout <<"animal"<<endl;
	}
	virtual void show(){
		cout <<"this is Animal show"<<endl;
	}
	virtual void run(){
		cout <<"this is Animal run"<<endl;
	}
	void fun(){
		cout <<"Animal fun" <<endl;
	}	
};
class Dog:public Animal{
	public:
	Dog(){
	}
	Dog(const Dog& a){
		cout <<"Dog"<<endl;
	}
	/*函数重写 相同函数名 参数列表 返回值必须相同*/
	void show(){
		cout <<"this is Dog show"<<endl;
	}
	/*run 现在是函数重写*/
	void run(){
		cout <<"this is Dog run"<<endl;
	}
	/*名字隐藏*/
	void fun(){
		cout <<"Dog fun"<<endl;
	}
};
class Fish:public Animal{
	public:
	void show(){
		cout <<"this Fish Show"<<endl;
	}
	void run(){
		cout <<"this Fish run"<<endl;
	}
};
void showAnimal(Animal* animal){
	animal->show();
	animal->run();
}
Animal* getAnimal(string type){
	/*对象制造工厂*/
	
}
int main(){
	/*Dog dog;
	Animal animal=dog;
	animal.show();*/
	Dog dog;
	Fish fish;
	showAnimal(&dog);
	showAnimal(&fish);
}

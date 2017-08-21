#include <iostream>
using namespace std;
class Animal{
	public:
	Animal(){
		cout <<"Animal()"<<endl;
	}
	void show(){
		cout << "Animal show"<<endl;
	}
	/*纯虚函数*/
	virtual void run()=0;
};
class Dog:public Animal{
	public:
	void run(){
		
	}
};
int main(){
	//Animal a;
	Dog dog;
}

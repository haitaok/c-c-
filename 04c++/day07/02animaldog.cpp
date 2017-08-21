#include <iostream>
using namespace std;
class Animal{
	public:
	string name;
	int age;
	void show(){
		cout << name<<":"<<age<<endl;
	}
};
class Dog:public Animal{
	public:
	void fun(){
		cout << name<<":看家" << endl;
	}
};

int main(){
	Dog dog;
	dog.name="hellocat";
	dog.fun();
}

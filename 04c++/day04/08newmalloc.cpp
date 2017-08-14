#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Date{
	public:
	Date(){
		cout<<"date构造"<<endl;
	}
	~Date(){
		cout<<"date析构"<<endl;
	}
};
class Person{
	string name;
	int age;
	Date date;
	public:
	Person(){
		cout<<"person构造"<<endl;
	}
	~Person(){
		cout<<"person析构"<<endl;
	}
};


int main(){
	//Person* p=static_cast<Person*>(malloc(sizeof(Person)));
	Person* p = new Person();
	//free(p);
	delete p;
}

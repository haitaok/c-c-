#include <iostream>
#include <string>
using namespace std;
class Animal{
	string name;
	int age;
	public:
	Animal(string name="",int age=0):name(name),age(age){
		cout<<"Animal()"<<this<<endl;
	}
	void show(){
		cout<<"show()"<<this<<endl;
		cout <<name<<","<<age<<endl;
		cout <<this->name<<","<<this->age<<endl;
	}
};
extern "C" void _ZN6Animal4showEv(Animal* mythis);
int main(){
	Animal dog("xiaoqiang",2);
	cout <<"&dog"<<&dog<<endl;
	dog.show();
	_ZN6Animal4showEv(&dog);
}

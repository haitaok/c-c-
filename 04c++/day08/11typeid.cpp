#include <iostream>
#include <typeinfo>
using namespace std;
class A{
	public:
	virtual void show(){}
};
class B:public A{

};

int main(){
	int a;
	double p;
	int data[10];
	int *pi;
	cout << typeid(a).name()<<endl;
	cout << typeid(p).name()<<endl;
	cout << typeid(data).name()<<endl;
	cout << typeid(pi).name()<<endl;
	A oa;
	B ob;
	A *pb=new B();
	//cout << typeid(A).name()<<endl;
	cout << typeid(oa).name()<<endl;
	cout << typeid(ob).name()<<endl;
	cout << typeid(pb).name()<<endl;
	cout << typeid(*pb).name()<<endl;
	if(typeid(*pb)==typeid(A)){
		cout <<"*pb is A type"<<endl;
	}
	if(typeid(*pb)==typeid(B)){
		cout <<"*pb is B type"<<endl;
	}
}

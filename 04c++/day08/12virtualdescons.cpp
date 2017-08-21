#include <iostream>

using namespace std;

class A{
	public:
	virtual void show(){
		
	}
	A(){
		cout <<"A()"<<endl;
	}
	virtual ~A(){
		cout <<"~A()"<<endl;
	}
};
class B:public A{
	public:
	B(){
		cout <<"B()"<<endl;
	}
	~B(){
		cout <<"~B()"<<endl;
	}
};
class C:public B{
	public:
	C(){
		cout <<"C()"<<endl;
	}
	~C(){
		cout <<"~C()"<<endl;
	}
};
int main(){
	A* pa = new C();
	delete pa;
}

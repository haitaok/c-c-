#include <iostream>
using namespace std;
class A{
	public:
	A(){
		cout <<"A()" <<endl;
	}
	~A(){
		cout << "~A()" << endl;
	}
	void showA(){
		cout <<"showA()"<<endl;
	}
};
/*智能指针*/
class myauto_ptr{
	A * data;
	public:
	myauto_ptr(A* data=NULL):data(data){
		
	}
	~myauto_ptr(){
		if(data){
			delete data;
			data=NULL;
		}
	}
	void showSelf(){
		cout << "show auto ptr self" <<endl;
	}
	/*取得管理的对象的地址*/
	A* operator->(){
		return data;
	}
	/*取得管理的对象*/
	A& operator*(){
		return *data;
	}
};
void foo(){
	A *pa = new A();
	myauto_ptr var_a(pa);
	var_a.showSelf();
	var_a->showA();
	var_a.operator->()->showA();
	(*var_a).showA();
}
int main(){
	foo();
}

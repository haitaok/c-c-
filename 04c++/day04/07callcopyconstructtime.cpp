#include <iostream>

using namespace std;

class A{
	public:
	A(){
		cout<<"这是构造函数"<<endl;
	}
	A(const A& a){
		cout <<"这是拷贝构造函数"<<endl;
	}
	~A(){
		cout <<"这是析构函数"<<endl;
	}
	A showA(A& a){
		return a;		
	}
	

};
A showA2(){
	/*A b = A();
	return b;*/
	return A();
}
void foo(){
	//A a;
	//a.showA(a);
	showA2();
}


int main(){
	foo();
}

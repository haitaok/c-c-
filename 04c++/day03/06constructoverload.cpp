#include <iostream>
using namespace std;

class A{
	public:
	A(){
		cout<<"A()"<<endl;
	}
	A(int a){
		cout<<"A(int)"<<endl;
	}
	A(int a,double b){
		cout<<"A(int,double)"<<endl;
	}
};

int main(){
	/*A var_a;
	A var_b(1);
	A var_c(2);
	A var_d(1,2.5);*/
	A *var_a = new A();
	A *var_b = new A(1);
	/*这个写法编译器会理解函数声明*/
	A var_c();
	
}

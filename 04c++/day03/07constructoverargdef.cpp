#include <iostream>
using namespace std;

class A{
	public:
	A(int a=0,double b=0){
		cout<<"A(int,double)"<<"a="<<a<<"b="<<b<<endl;
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

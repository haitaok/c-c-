#include <iostream>
using namespace std;
class A{
	public:
	A(){
	}
	A(const A& a){
		cout <<"A(const A&)"<<endl;
	}
	A& operator=(const A& a){
		cout <<"A operator="<<endl;
		return *this;
	}
};
class B:public A{
	public:
	B(){
		
	}
	/*调用A类的拷贝构造函数
		把b对象 当成A类型的对象来看
	*/
	B(const B& b):A(b){
		cout << "B(const B&)"<<endl;
	}
	B& operator=(const B& b){
		/*要调用A类型的operator=*/
		A::operator=(b);
		cout << "B operator=" <<endl;
		return *this;
	}
};
void foo(){
	B b;
	B c = b;
	B d;
	d=b;
}
int main(){
	foo();
}

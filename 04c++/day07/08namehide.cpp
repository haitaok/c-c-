#include <iostream>

using namespace std;
class A{
	public:
	static int g_var;
	void show(){
		
		cout <<"A show()"<<endl;
	}
};
/*静态成员初始化*/
int A::g_var=10;
class B:public A{
	public:
	static int g_var;
	void show(){
		/*访问A类型的静态的成员变量
			调用A类型的函数
		*/
		cout <<A::g_var<<endl;
		A::show();
		cout << "B show()"<<endl;
	}
};
int B::g_var=2;
int main(){
	B b;
	b.show();
	cout << B::g_var<<endl;
	/*如何调用A类型的数据*/
	b.A::show();
	cout << B::A::g_var<<endl;
}

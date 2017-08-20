#include <iostream>
using namespace std;
class A{
	private:
	void fun_private(){
		cout << "fun_private()" <<endl; 
	}
	protected:
	void fun_protected(){
		cout <<"fun_protected" << endl;
	}
	public:
	void fun_public(){
		cout <<"fun_private" << endl;
	}
};
/*B类私有继承A 类*/
class B:private A{
	public:
	void showA_protected_public(){
		fun_protected();
		fun_public();
	}
};
int main(){
	B b;
	b.showA_protected_public();
}

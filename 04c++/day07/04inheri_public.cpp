#include <iostream>
using namespace std;
class A{
	private:
	int a;
	void funprivate(){
		cout << "funprivate()" << endl;
	}
	protected:
	void funprotected(){
		cout << "funprotected()" << endl;
	}
	public:
	void funpublic(){
		cout << "funpublic()" << endl;
	}
	/*一步到位 private ---->public*/
	void showAprivate(){
		funprivate();
	}
	int getA(){
		return a;
	}
	void setA(int a){
		this->a=a;
	}
};
class B:public A{
	/*在类外可以访问保护的数据*/
	public:
	void showAprotected(){
		funprotected();
	}
	/*想访问A类型中的私有数据*/
	void showAprivate(){
		cout << getA() << endl;
	}
	friend void useFriendShow();
};
/*使用友元函数 调用B中的保护权限函数*/
void useFriendShow(){
	B b;
	b.funprotected();
}
int main(){
	B b;
	/*A 类中的公开数据  到子类是公开的*/
	b.funpublic();
	/*A类中的保护数据 到子类是保护的*/
	//b.funprotected();
	/*A类中的私有数据 到子类是隐藏的*/
	//b.funprivate();
	b.showAprotected();
	b.showAprivate();
	cout << sizeof(B)<<endl;
	cout << sizeof b <<endl;
	b.setA(1);
	b.showAprivate();
	useFriendShow();
}

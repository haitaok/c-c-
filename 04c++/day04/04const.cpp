#include <iostream>
using namespace std;

class A{
	mutable int age;
	public:
	/*_ZN1A4showEv*/
	void show(){
		age=10;
		cout <<age <<"show()"<<endl;
	}
	/*_ZNK1A4showEv*/
	void show()const{
		age=20;
		cout<<age <<"const show()"<<endl;
	}
};

int main(){
	A temp;
	temp.show();
	const A  a=temp;
	a.show();
}

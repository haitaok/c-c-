#include <iostream>
using namespace std;

namespace IBM{
	int age=40;
	void show(){
		cout << "IBM age is " << age << endl;
	}
}
namespace tarena{
	int age=12;
	void show();
}
namespace tarena{
	void show(){
		cout << "tarena age is " << age <<endl;
	}
}
/* 使用using声明 */
using IBM::show;
using tarena::show;
using IBM::age;
// using tarena::age;
int main(){
	age=100;
	IBM::show();
	// show();
	// show();
}

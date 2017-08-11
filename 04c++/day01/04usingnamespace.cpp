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
	double salary=12345;
}
namespace tarena{
	void show(){
		cout << "tarena age is " << age <<endl;
	}
}
/*使用using namespace 指令*/
using namespace IBM;
using namespace tarena;

int main(){
	//age=101;
	//show();
	cout << salary <<endl;	
	IBM::show();
	tarena::show();
}

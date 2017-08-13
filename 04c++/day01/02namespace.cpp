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

int main(){
	/* 使用命名空间IBM 下的show */
	IBM::age=60;
	IBM::show();
	/* 把命名空间tarena 下的age改成13 调用这个空间下的show */
	tarena::age=13;
	tarena::show();
}

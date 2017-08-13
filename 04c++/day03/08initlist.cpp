#include <iostream>

using namespace std;
int g_var=1000;
class A{
	const int a;
	int& b;
	public:
	A(int pa,int& pb):a(pa),b(pb){
		//a=pa;
		//b=pb;
	}
	void show(){
		cout<<a<<" "<<b<<endl;
	}
};

int main(){
	int x=100;
	int y=200;
	A a(x,y);
	a.show();
	//a.show();
}

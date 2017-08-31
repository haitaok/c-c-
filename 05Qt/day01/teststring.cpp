#include <iostream>
using namespace std;

class A{
	
	public:
	A(const char* a){
		cout << a<<endl;
	}
	A(const A& a){
		cout << "123"<<endl;
	}
	
};
void foo(const A& a){

}
int main(){
	const A& a = "456";
}

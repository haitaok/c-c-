#include <iostream>
#include <typeinfo>
using namespace std;
template<typename A,typename B=int>
void foo(A a,B b){
	cout <<typeid(A).name()<<' '<<typeid(B).name()<<endl;
}
int main(void){
	foo<short>(10,3.14);
	return 0;
}

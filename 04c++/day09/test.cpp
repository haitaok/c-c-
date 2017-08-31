#include <iostream>
#include <fstream>
class A{
	public:
	A(){
	
	}
	operator bool(){
		return false;
	}
};
class B:public A{

};
void fun1(A a){

}
void fun1(B a){

}
using namespace std;
int main(){
	ifstream ifs("text.txt");
	char data[100];
	
	while(ifs.getline(data,100,'\n')){
		cout << data <<endl;
	}
	cout << &ifs <<endl;
	ifs.close();
}

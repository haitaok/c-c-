#include <iostream>
using namespace std;
class A{
	public:
	virtual void show(){}
	virtual void show2(){}
};
int main(){
	cout << sizeof(A)<<endl;
}

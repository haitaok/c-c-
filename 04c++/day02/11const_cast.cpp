#include <iostream>

using namespace std;

int main(){
	volatile const int data=200;
	int *pdata=const_cast<int*>(&data);
	*pdata=9527;
	cout << data<<endl;
	//reinterpret_cast<类型>(变量);
}

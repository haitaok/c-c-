#include <iostream>

using namespace std;

int main(){
	int i=9527;
	/* refi 是i的引用 */
	int& refi=i;
	/* 再定义一个i变量的引用 */
	int& refi2 =i;
	
	int& refi3 = refi2;
	cout << refi3<<endl;
	
	cout<< i <<endl;
	cout <<refi<<endl;
	cout <<refi2 <<endl;
	cout << "修改任意一个" <<endl;
	refi = 12345;
	cout<< i <<endl;
	cout <<refi<<endl;
	cout <<refi2 <<endl;
	int j = 10086;
	/* 把变量j的值赋值给应用refi而不是引用j */
	refi = j;
	cout<<"---------------"<<endl;
	cout << refi << endl;
	j=100;
	cout << j <<endl;
	cout << refi << endl;
	
	
	
}

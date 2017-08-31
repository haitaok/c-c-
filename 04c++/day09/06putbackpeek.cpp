#include <iostream>
using namespace std;
int main(){
	char c;
	//cin.get(c);
	/*偷看一下 下一个字符*/
	c=cin.peek();
	cout << c <<endl;
	//cin.putback(c);
	int data;
	cin >>data;
	cout <<data<<endl;
}

#include <iostream>
using namespace std;

int main(){
	char c;
	c=cin.get();
	cout.put(c);
	cin.get(c);
	/*输入流是否正常*/
	cout << &cin <<endl;
	cout << c <<endl;
}

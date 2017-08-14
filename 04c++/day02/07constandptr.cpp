#include <iostream>

using namespace std;
int main(){
	int i=100;
	const int * pi=&i;
	//*pi=200;
	int j=300;
	pi=&j;
	/*数组名 和 对应的内存的关系*/
	int *const myref = &i;
	*myref=123456;
	cout <<*myref<<endl;
	cout << i <<endl;
	char data1[20]="abc123" ;
	char data2[20]="open123";
	//data1=data2;
	
}

#include <iostream>
using namespace std;
int main(){
	char data[20];
	int *parr = new (data)int[5];
	
	cout<<&data<<endl;
	cout<<parr<<endl;
}

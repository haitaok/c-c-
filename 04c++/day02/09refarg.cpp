#include <iostream>

using namespace std;

void myswap1(int& x,int& y){
	int temp =x;
	x=y;
	y=temp;
}
void printNum(const int& data){
	cout <<data <<endl;
}

int main(){
	int x=10;
	int y=20;
	myswap1(x,y);
	cout << "x=" << x<< endl;
	cout << "y=" << y << endl;
	printNum(x);
	printNum(y);
	printNum(100);
}

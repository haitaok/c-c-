#include <iostream>

using namespace std;

/*int getmax(int x,int y){
	return x>y?x:y;
}*/
int& getmax(int& x,int& y){
	return x>y?x:y;
}
int& getnum(){
	//int temp=100;
	static int temp=100;
	return temp;
}

int main(){
	int x=10;
	int y=123;
	int var_res = getmax(x,y);
	cout << var_res <<endl;
	getmax(x,y)=456;
	cout << x <<endl;
	cout << y << endl;
	int& var_res2=getnum();
	cout<<var_res2<<endl;
}

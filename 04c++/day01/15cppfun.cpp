#include <iostream>

using namespace std;

extern "C" int getmax(int x,int y){
	return x>y?x:y;
}
int getmax(double x,double y){
	return x>y?x:y;
}
int getmax(int *x,int *y){
	return *x>*y?*x:*y;
}
int main(){
	getmax(1,2);
}

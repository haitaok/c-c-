#include <iostream>

using namespace std;

int getmax(int x,int y){
	cout<<"getmax(int,int)"<<endl;
	return x>y?x:y;
}
double getmax(int x,double y){
	cout<<"getmax(int,double)"<<endl;
	return x>y?x:y;
}
double getmax(double x,int y){
	cout<<"getmax(double,int)"<<endl;
	return x>y?x:y;
}
double getmax(double x,double y){
	cout<<"getmax(double,double)"<<endl;
	return x>y?x:y;
}

int main(){
	getmax(10,10);
	getmax(10,10.5);
	getmax(10.0,10);
	getmax(10.5,10.5);
}


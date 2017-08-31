#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void foo(){
	srand(time(NULL));
	int num = rand()%4;
	if(0==num){
		cout <<"程序正常执行"<<endl;
	}else if(1==num){
		throw 1;
	}else if(2==num){
		throw "2.1";
	}else if(3==num){
		throw 3.5;
	}
	cout <<"foo continue"<<endl;
}
int main(){
	foo();
	cout <<"app continue"<<endl;
}

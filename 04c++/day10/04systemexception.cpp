#include <iostream>
#include <cstdlib>
#include <stdexcept>
using namespace std;

int main(){
	int *pi=reinterpret_cast<int*>(malloc(0xfffffffffffff));
	cout << pi <<endl;
	try{
		int *parr = new int[0xfffffffffffff];
	}catch(bad_alloc& e){
		cout << e.what()<<endl;
	}
	string var_str="abc";
	cout<<var_str[3]<<endl;
	try{
		cout <<var_str.at(3)<<endl;
	}catch(out_of_range& e){
		cout << e.what()<<endl;
	}
}

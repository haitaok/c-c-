#include <iostream>
#include <string>

using namespace std;

int main(){
	string var_a="abc123 ";
	string var_b="bbc123";
	if(var_a==var_b){
		cout <<"var_a==var_b"<<endl;
	}
	if(var_a>var_b){
		cout <<"var_a>var_b"<<endl;
	}
	string var_c = var_a+var_b;
	cout << var_c <<endl; 
	var_c="abc123";
	cout << var_c.length()<<endl;
	cout << var_c.at(0)<<endl;
	cout << var_c[0]<<endl;
}

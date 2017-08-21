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
	/*越界访问的不同表现*/
	//cout << var_c.at(6)<<endl;
	cout << var_c[6]<<endl;
	/*如何把c风格字符串 变成string*/
	string var_d("hello world");
	cout << var_d <<endl;
	var_d+=" hello";
	/*如何把string  变成c风格字符串*/
	const char* mystr=var_d.c_str();
	cout << mystr << endl;
}

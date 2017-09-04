#include <iostream>
#include <cstring>
using namespace std;
//函数模板/模板函数
template<typename T>
T max(T x,T y){
	return x>y?x:y;
}
//针对char const* 类型的特化版本
template<>
char const* max<char const*>(char const* x,char const* y){
	return strcmp(x,y)<0?y:x;
}
int main(void){
	cout << ::max<int>(123,456)<<endl;
	cout << ::max<double>(1.23,4.56)<<endl;
	cout << ::max<string>("hello","world")<<endl;
	cout << ::max("hello","world")<<endl;
	return 0;
}

#include <iostream>
using namespace std;
//函数模板/模板函数
template<typename T>
T max(T x,T y){
	return x>y?x:y;
}
int main(void){
	cout << ::max<int>(123,456)<<endl;
	cout << ::max<double>(1.23,4.56)<<endl;
	cout << ::max<string>("hello","world")<<endl;
	
	return 0;
}

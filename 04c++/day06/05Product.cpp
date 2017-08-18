#include <iostream>
using namespace std;
class Product{
	int count;
	double price;
	public:
	Product(int count=0,double price=0):count(count),price(price){
		
	}
	/*重载（）运算符 完成函数对象的功能*/
	double operator()(int c,double p){
		return c*p;
	}
	/*重载（）负责类型转换
	operator int (){
		
	}
	*/
	operator int (){
		return count;
	}
	
	operator double (){
		return price;
	}
	
};
int main(){
	Product apple;
	/* 把对象当函数来用 */
	cout <<apple(4,4888.5)<<endl;
	cout << apple(4,2188.0)<<endl;
	Product product(10,1.85);
	cout << (int)product<<endl;
	cout <<(double)product<<endl;
}

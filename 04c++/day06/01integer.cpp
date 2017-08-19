#include <iostream>

using namespace std;

class Integer{
	int data;
	public:
	Integer(int data=0):data(data){
		
	}
	/*i1.operator+(i2)*/
	const Integer operator+(const Integer& i2){
		return Integer(data+i2.data);
	} 
	/*重载运算符 +=
		a.operator+=(b)
	*/
	const Integer& operator+=(const Integer& i2){
		 this->data+=i2.data;
		 return *this;
	}
	const Integer& operator-(){
		data=-data;
		return *this;
	}
	
	friend ostream& operator<<(ostream& os,const Integer& var_i);
	friend istream& operator>>(istream& is,Integer& i);
	/*friend const Integer& operator+=(Integer& i1,const Integer& i2);*/
};
/*
	重载运算符 +=
	a+=b; operator+=(a,b)
*/

/*const Integer& operator+=(Integer& i1,const Integer& i2){
	 i1.data+=i2.data;
	 return i1;
}*/


ostream& operator<<(ostream& os,const Integer& var_i){
	cout<<var_i.data;
	return os;
}
/*整数的输入*/
istream& operator>>(istream& is,Integer& i){
	return is>>i.data;
}

int main(){
	Integer var_a(123);
	Integer var_b(321);
	//cout << var_a+var_b <<endl;
	//cin >>var_a;
	//cout << var_a+var_b <<endl;
	/* 注意优先级 */
	cout << (var_a+=var_b)<<endl;
	cout <<var_a<<endl;
	cout <<-var_a<<endl;
}

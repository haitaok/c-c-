#include <iostream>

using namespace std;

class Integer{
	int data;
	public:
	Integer(int data=0):data(data){
		
	}
	/*++ 默认前++ ++var_a*/
	Integer& operator++(){
		++data;
		return *this;
	}
	/*
		后++如何实现？使用亚元区分
		int i=1;
		i++++;//error
	*/
	const Integer operator++(int){
		return Integer(data++);
	}
	/*实现前-- 和 后 --*/
	Integer& operator--(){
		--data;
		return *this;
	}
	const Integer operator--(int){
		return Integer(data--);
	}
	
	
	friend ostream& operator<<(ostream& os,const Integer& var_i);
	friend istream& operator>>(istream& is,Integer& i);
};

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
	cout <<++var_a<<endl;
	cout <<++++var_a<<endl;
	cout <<++++++var_a<<endl;
	Integer var_b(1);
	cout << var_b++ <<endl;
	cout << var_b <<endl;
	cout << var_b.operator++() <<endl;
	cout << var_b.operator++(0) <<endl;
	cout <<"-----------"<<endl;
	cout << ----var_b<<endl;
	cout << var_b--<<endl;
	cout << var_b<<endl;
}

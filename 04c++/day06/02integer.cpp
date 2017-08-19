#include <iostream>

using namespace std;

class Integer{
	int data;
	public:
	Integer(int data=0):data(data){
		
	}
	/*-(负号)*/
	const Integer operator-(){
		return Integer(-data);
	}
	/*!(取反) 不是零变成0 是 0 变成1*/
	const Integer operator!()const{
		return Integer(!data);
	}
	const Integer operator++()const{
		return Integer(data+1);
	}
	/*
		第一个const 防止返回值作为左值
		第二个const 防止修改 允许const对象
		第三个const 把函数修饰成const函数 const对象才能调用
	 */
	const Integer operator-(const Integer& i)const{
		return Integer(data-i.data);
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
	Integer var_b(321);
	/* 注意优先级 */
	cout <<!!var_a<<endl;
	cout <<-var_a<<endl;
	/*自己完成++操作*/
	cout<<++++var_a<<endl;
	cout <<var_a-var_b<<endl;
	cout <<(-var_a)-var_b<<endl;
}

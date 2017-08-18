#include <iostream>

using namespace std;

class Integer{
	int data;
	public:
	Integer(int data=0):data(data){
	
	}
	/* i1+i2 i1.operator+(i2) */
	bool operator==(const Integer& i2){
		return data==i2.data;
	}
	void show(){
		cout << data << endl;
	}
	/* i1==2 i1.operator==(i2) */
	friend bool operator==(const Integer& i1,const Integer& i2);
	private:
	/* 声明operator 是integer类型的友元*/
	friend const Integer operator+(const Integer& i1,const Integer& i2);/*{
		return Integer(i1.data+i2.data);
	}*/
	friend const Integer operator*(const Integer& i1,const Integer& i2);
	friend ostream& operator<<(ostream& cout,const Integer& i2);
};
/*全局形式的输出运算符号*/
ostream& operator<<(ostream& cout,const Integer& i2){
	return cout << i2.data;
}
const Integer operator+(const Integer& i1,const Integer& i2){
	return Integer(i1.data+i2.data);
}
const Integer operator*(const Integer& i1,const Integer& i2){
	return Integer(i1.data*i2.data);
}
bool operator==(const Integer& i1,const Integer& i2){
	return i1.data==i2.data;
}

int main(){
	Integer a(100);
	Integer b(100);
	Integer c = a* b;
	cout << a* b <<endl;
	c.show();
	cout << (a==b) << endl;
}

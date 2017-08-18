#include <iostream>

using namespace std;
class Integer{
	int data;
	public:
	Integer(int data=0):data(data){
		
	}
	void show(){
		cout << data <<endl;
	}
	const Integer operator+(const Integer& i2){
		return Integer(data+i2.data);
	}
	const Integer operator*(const Integer& i2){
		return Integer(data*i2.data);
	}
};

int main(){
	Integer i1(1);
	Integer i2(2);
	Integer i3(3);
	Integer i4=i1+i2*i3;
	i4.show();
}

#include <iostream>
extern int c;
int c=10;
using namespace std;

class A{
	int& ma;
	public:
	A(int& pa):ma(pa){
	
	}
	int& getMa(){
		return ma;
	}
};
int main(){
	int x=200;
	A oa(x);
	cout << c<< endl;
	cout<<oa.getMa()<<endl;
	cout<<oa.getMa()<<endl;
}

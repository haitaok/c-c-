#include <iostream>
using namespace std;

struct Fraction{
	int x;
	int y;
	public:
	Fraction(int x=0,int y=1):x(x),y(y){
		
	}
		
};
/*设计一个分数的输出*/
ostream& operator<<(ostream& os,const Fraction& f2){
	return os<<f2.x<<"/"<<f2.y;
}
/*设计一个分数的输入函数 istream& cin*/
istream& operator>>(istream& is,Fraction& f2){
	return is>>f2.x>>f2.y;
}
int main(){
	Fraction fa(1,3);
	cout <<"请输入分子 分母"<<endl;
	cin >> fa;
	cout << fa <<endl;
	
}

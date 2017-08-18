#include <iostream>
using namespace std;

struct Fraction{
	int x;
	int y;
	public:
	Fraction(int x=0,int y=1):x(x),y(y){
		
	}
	void show(){
		cout << x<<"/"<<y<<endl;
	}
	/*成员形式的+号运算符
		f1+f2 f1.operator+(f2)
	*/
	const Fraction operator+(const Fraction& f2){
		cout <<"mem operator+"<<endl;
		return Fraction(x*f2.y+y*f2.x,y*f2.y);
	}
	friend ostream& operator<<(ostream& cout,const Fraction& f2);
		
};
/*设计一个函数负责两个分数相加*/
const Fraction operator+(const Fraction& f1,const Fraction& f2){
	return Fraction(f1.x*f2.y+f1.y*f2.x,f1.y*f2.y);
}
const Fraction operator-(const Fraction& f1,const Fraction& f2){
	return Fraction(f1.x*f2.y-f1.y*f2.x,f1.y*f2.y);
}
ostream& operator<<(ostream& cout,const Fraction& f2){
	return cout<<f2.x<<"/"<<f2.y;
}

int main(){
	Fraction fa(1,3);
	fa.show();
	Fraction fb(1,2);
	//Fraction fc = add(fa,fb);
	Fraction fc = fa+fb;
	fc.show();
	Fraction fd = fb-fa;
	fd.show();
	cout << fd << endl;
}


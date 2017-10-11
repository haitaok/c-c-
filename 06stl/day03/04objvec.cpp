#include <iostream>
#include <vector>
using namespace std;
class A{
public:
	A(void){
		cout<<"缺省构造:"<<this<<endl;
	}
	~A(void){
		cout <<"析构函数:"<<this<<endl;
	}
	A(A const& that){
		cout <<"拷贝构造:"<<&that<<"->"<<this<<endl;
	}
	A& operator==(A const& that){
		cout <<"拷贝赋值:"<<&that<<"->"<<this<<endl;
		return *this;
	}
};
class B{
public:
	B(void){};
private:
	B(B const&);
	B& operator=(B const&);
};
int main(void){
	cout <<"-------------1------------" <<endl;
	vector<A> va(3);
	cout <<"-------------2------------" <<endl;
	va.insert(va.begin(),A());
	cout <<"-------------3------------" <<endl;
	va.erase(va.begin());
	cout <<"-------------X------------"<<endl;
	vector<B> vb;
	vb.push_back(B());
	return 0;
}

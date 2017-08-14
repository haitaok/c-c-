#include <iostream>
using namespace std;
class A{
	int *data;
	int len;
	public:
	A(int len=1){
		/* 当构造对象时 申请内存*/
		cout <<"申请内存开始"<<endl;
		this->len=len;
		data=new int[len];
	}
	A(const A& a):len(a.len){
		cout <<"在拷贝构造中申请内存"<<endl;
		data=new int[len];
		for(int i=0;i<a.len;i++){
			data[i]=a.data[i];
		}
	}
	~A(){
		/*当对象销毁时 释放内存*/
		cout <<"释放掉管理的内存"<< endl;
		delete[] data;
	}
};
void foo(){
	A a(4);
	A b=a;
	cout<<&a<<" "<<&b<<endl;
}
int main(){
	foo();
	while(1);
}

#include<iostream>

using namespace std;

int main(){
	int var_i;
	/*不保证是零*/
	int *pi = new int;
	int *pi2 = new int(10);
	cout << *pi2 <<endl;
	delete pi;
	delete pi2;
	cout << *pi2 <<endl;
	/* 使用new[] 申请5个整数内存 */
	int *parr = new int[5];
	for(int i=0;i<5;i++){
		//*parr++=i+1; 经典的错误
		//parr[i]=i+1;
		*(parr+i)=i+1;
	}
	for(int i=0;i<5;i++){
		cout<<parr[i]<<" ";
	}
	cout << endl;
	/* 使用delete[] 释放掉 new[] 申请的内存 */
	
	delete[] parr;//悬空指针
	union{
		char data[20];
		int m;
	};
	int *parr2 = new (data)int[5];
	cout <<"-------------"<<endl;
	cout << data <<endl;
	cout <<parr2 << endl;
	cout << (void*)data <<endl;
	cout << &m <<endl;
	
	
}

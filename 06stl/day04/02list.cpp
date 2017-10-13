#include <iostream>
#include <list>
#include <algorithm>
#include "03print.h"
class CmpInt{
public:
	bool operator()(int a,int b)const{
		return a>b;
	}
};
using namespace std;
int main(void){
	int arr[]={10,20,20,20,30,10,20,20,40};
	list<int> lst(arr,arr+9);
	print(lst.begin(),lst.end());
	lst.unique();
	print(lst.begin(),lst.end());
	lst.remove(10);
	print(lst.begin(),lst.end());
	list<int> ls2;
	ls2.push_back(2000);
	ls2.push_back(3000);
	ls2.push_back(4000);
	ls2.push_back(5000);
	ls2.push_front(1000);
	list<int>::iterator pos = lst.begin();
	++pos;
	//lst.splice(pos,ls2);
	//list<int>::iterator del = ls2.end();
	//--del;
	//lst.splice(pos,ls2,del);
	list<int>::iterator begin =ls2.begin();
	++begin;
	list<int>::iterator end = ls2.end();
	--end;
	lst.splice(pos,ls2,begin,end);
	cout <<"lst:"<<flush;
	print(lst.begin(),lst.end());
	cout <<"lst2:"<<flush;
	print(ls2.begin(),ls2.end());
	list<int> ls3;
	ls3.push_front(10);
	ls3.push_front(40);
	ls3.push_front(60);
	ls3.push_front(80);
	ls3.push_front(90);
	list<int> ls4;
	ls4.push_front(20);
	ls4.push_front(50);
	ls4.push_front(70);
	ls4.push_front(80);
	ls3.merge(ls4,CmpInt());
	cout <<"ls3:"<<flush;
	print(ls3.begin(),ls3.end());
	cout <<"ls4:"<<flush;
	print(ls4.begin(),ls4.end());
	ls3.sort();
	print(ls3.begin(),ls3.end());
	ls3.sort(CmpInt());
	print(ls3.begin(),ls3.end());
	//sort(ls3.begin(),ls3.end());
	return 0;
}

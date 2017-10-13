#include <iostream>
#include <deque>
#include<algorithm>
using namespace std;
int main(void){
	deque<int> di;
	di.push_back(50);
	di.push_back(70);
	di.push_front(30);
	di.push_front(10);
	for(size_t i=0;i<di.size();++i){
		cout << di[i]<<' ';
	}
	cout <<endl;
	di.pop_front();
	di.pop_back();
	di.insert(di.begin()+1,40);
	di.insert(di.end()-1,45);
	for(deque<int>::iterator it = di.begin();it!=di.end();++it){
		cout << *it << ' ';
	}
	cout <<endl;
	deque<int>::iterator it = find(di.begin(),di.end(),45);
	if(it==di.end()){
		cout <<"没有找到!"<<endl;
	}else{
		cout <<"找到了"<<*it<<endl;
	}
	sort(di.rbegin(),di.rend());
	for(deque<int>::iterator it = di.begin();it!=di.end();++it){
		cout << *it << ' ';
	}
	cout <<endl;
	/*
	cout << di.capacity()<<endl;
	di.reserve(10);
	*/
	it = di.begin();
	cout <<*it << endl;//50
	di.resize(100);
	cout << di[0]<<endl;//50
	cout <<*it <<endl;//50
	di.insert(it+1,48);
	cout << di[0]<<endl;//50
	it = di.begin();
	cout <<*it <<endl;//50
	
	
	
	
	
	
	
	
	
	
	return 0;
}

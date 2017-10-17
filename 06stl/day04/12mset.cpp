#include <iostream>
#include <set>
using namespace std;
int main(void){
	multiset<string> si;
	si.insert("张飞");
	si.insert("赵云");
	si.insert("张飞");
	si.insert("关羽");
	si.insert("赵云");
	si.insert("关羽");
	typedef multiset<string,int>::iterator IT;
	for(IT it = si.begin();it!=si.end();++it){
		cout << *it<<endl;
	}
	cout <<"----------"<<endl;
	IT it = si.lower_bound("张飞");
	cout << *it<<endl;
	it=si.upper_bound("张飞");
	cout << *it<<endl;
	pair<IT,IT> res = si.equal_range("张飞");
	cout<<*res.first<<endl;
	cout <<*res.second<<endl;
	cout <<"-----------"<<endl;
	return 0;
}

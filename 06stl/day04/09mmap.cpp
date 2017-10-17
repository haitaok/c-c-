#include <iostream>
#include <map>
using namespace std;
int main(void){
	multimap<string,int> si;
	si.insert(make_pair("张飞",10000));
	si.insert(make_pair("赵云",15000));
	si.insert(make_pair("张飞",20000));
	si.insert(make_pair("关羽",25000));
	si.insert(make_pair("赵云",30000));
	si.insert(make_pair("关羽",35000));
	typedef multimap<string,int>::iterator IT;
	for(IT it = si.begin();it!=si.end();++it){
		cout << it->first<<" - "<<it->second<<endl;
	}
	cout <<"----------"<<endl;
	IT it = si.lower_bound("张飞");
	cout << it->first<<" - "<<it->second<<endl;
	it=si.upper_bound("张飞");
	cout << it->first<<" - "<<it->second<<endl;
	pair<IT,IT> res = si.equal_range("张飞");
	cout<<res.first->first<<" - "<< res.first->second<<endl;
	cout << res.second->first<<" - "<<res.second->second<<endl;
	cout <<"-----------"<<endl;
	for(IT it = si.begin();it!=si.end();++it){
		string key = it->first;
		IT end = si.upper_bound(key);
		int sum=0;
		for(;it!=end;++it){
			sum+=it->second;
		}
		cout << key <<" - "<<sum<<endl;
		--it;
	}
	return 0;
}

#include <iostream>
#include <set>
using namespace std;
int main(void){
	set<int> si;
	si.insert(13);
	si.insert(34);
	si.insert(13);
	si.insert(29);
	si.insert(34);
	for(set<int>::iterator it=si.begin();it!=si.end();++it){
		cout<<*it<<' ';
	}
	cout << endl;
	return 0;
}

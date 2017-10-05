#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
template <typename IT>
void print(IT begin,IT end){
	while(begin!=end)
		cout <<*begin++<<' ';
	cout <<endl;
}
int main(void){
	vector<int> vi;
	vi.push_back(14);
	vi.push_back(23);
	vi.push_back(19);
	vi.push_back(47);
	vi.push_back(32);
	print(vi.begin(),vi.end());
	vector<int>::iterator it = find(vi.begin(),vi.end(),47);
	if(it==vi.end()){
		cout <<"没找到!"<<endl;
	}else{
		cout <<"找到了"<<*it<<endl;
	}
	return 0;
}

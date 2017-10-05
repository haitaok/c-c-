#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> const& vec){
	cout <<"大小:"<<vec.size()<<endl;
	cout <<"容量:"<<vec.capacity()<<endl;
	cout <<"内容:";
	for(vector<int>::const_iterator it = vec.begin();it!=vec.end();++it){
		cout << *it << ' ';
	}
	cout <<endl;
}
int main(void){
	vector<int> vi;
	vi.push_back(1);
	print(vi);
	vi.push_back(2);
	print(vi);
	vi.push_back(3);
	print(vi);
	vi.push_back(4);
	print(vi);
	vi.push_back(5);
	print(vi);
	vi.resize(9,6);
	print(vi);
	vi.pop_back();
	print(vi);
	vi.resize(5);
	print(vi);
	vi.clear();
	print(vi);
	vi.reserve(0);
	print(vi);
	vi.reserve(20);
	print(vi);
	return 0;
}

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <iterator>
#include <fstream>
#include "03print.h"
template <typename IT1,typename IT2>
void mycopy(IT1 begin,IT1 end,IT2 to){
	while(begin!=end)
		*(to++)=*(begin++);
}
template <typename IT,typename FUNC>
void my_for_each(IT begin,IT end,FUNC func){
	while(begin !=end)
		func(*(begin++));
}
void square(int& x){
	x*=x;
}
void show(int const& x){
	cout << x<<' ';
}

int main(void){
	int arr[]={1,2,3,4,5};
	int brr[5];
	copy(arr,arr+5,brr);
	print(brr,brr+5);
	vector<int> vec(5);
	copy(brr,brr+5,vec.begin());
	print(vec.begin(),vec.end());
	deque<int> deq(5);
	copy(vec.begin(),vec.end(),deq.begin());
	print(deq.begin(),deq.end());
	ofstream ofs("o.dat");
	copy(deq.begin(),deq.end(),ostream_iterator<int>(ofs," "));
	ofs.close();
	ifstream ifs("o.dat");
	int crr[5];
	copy(istream_iterator<int>(ifs),istream_iterator<int>(),crr);
	print(crr,crr+5);
	for_each(crr,crr+5,square);
	my_for_each(crr,crr+5,show);
	cout << endl;
	return 0;
}

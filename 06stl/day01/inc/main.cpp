#include <iostream>
#include <cstring>
#include "clstmpl.hpp"
using namespace std;

int main(void){
	Comparator<int> ci(123,456);
	cout<<ci.max()<<' '<<ci.min()<<endl;
	Comparator<double> cd(1.23,4.56);
	cout <<cd.max()<<' '<<cd.min()<<endl;
	Comparator<string> cs("hello","world");
	cout <<cs.max()<<' '<<cs.min()<<endl;
	Comparator<string> cp("hello","world");
	cout <<cp.max()<<' '<<cp.min()<<endl;
	return 0;
}

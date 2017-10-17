#include <iostream>
#include <map>
using namespace std;
class Integer{
public:
	Integer(int i):m_i(i){}
	/*
	bool operator<(Integer const& rhs)const{
		return m_i>rhs.m_i;
	}
	*/
	int m_i;
};
class Comparator{
public:
	bool operator()(Integer const& a,Integer const& b)const{
		return a.m_i>b.m_i;
	}
};
int main(void){
	map<Integer,string,Comparator> is;
	is[0]="beijing";
	is[1]="tianjin";
	is[2]="shanghai";
	map<Integer,string>::iterator it = is.find(1);
	cout <<it->first.m_i<<", "<<it->second << endl;
	for(it = is.begin();it!=is.end();++it){
		cout <<it->first.m_i<<' '<<it->second<<endl;
	}
	cout << is[0]<<endl;
	return 0;
}

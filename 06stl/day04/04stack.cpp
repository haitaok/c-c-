#include <iostream>
#include <stack>
#include <vector>
using namespace std;
template<typename T,typename C=deque<T> >
class mystack{
public:
	void push(T const& data){
		m_c.push_back(data);
	}
	void pop(void){
		m_c.pop_back();
	}
	T& top(void){
		return m_c.back();
	}
	T const& top(void)const{
		return const_cast<mystack*>(this)->top();
	}
	size_t size(void)const{
		return m_c.size();
	}
	bool empty(void)const{
		return m_c.empty();
	}
private:
	C m_c;
};
int main(void){
	//mystack<string,vector<string> > ss;
	//mystack<string,list<string> > ss;
	stack<string> ss;
	ss.push("饭");
	ss.push("吃");
	ss.push("我");
	while(!ss.empty()){
		cout << ss.top();
		ss.pop();
	}
	cout << endl;
	return 0;
}

#include <iostream>
#include <queue>
#include <list>
#include <deque>
using namespace std;
template<typename T,
 template<typename E,typename=allocator<E> > class C=deque >
class myqueue{
public:
	void push(T const& data){
		m_c.push_back(data);
	}
	void pop(void){
		m_c.pop_front();
	}
	T& front(void){
		return m_c.front();
	}
	T const& front(void)const{
		return const_cast<myqueue*>(this)->front();
	}
	T& back(void){
		return m_c.back();
	}
	T const& back(void)const{
		return const_cast<myqueue*>(this)->back();
	}
	size_t size(void)const{
		return m_c.size();
	}
	bool empty(void){
		return m_c.empty();
	}
private:
	C<T> m_c;
};
using namespace std;
int main(void){
	//queue<string,list<string> > qs;
	//myqueue<string,list> qs;
	myqueue<string>qs;
	qs.push("我");
	qs.push("吃");
	qs.push("饭");
	while(!qs.empty()){
		cout << qs.front();
		qs.pop();
	}
	cout << endl;
	return 0;
}

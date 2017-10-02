//双向线性链表容器
#include <iostream>
#include <stdexcept>
#include <cstring>
using namespace std;
//链表模板
template<typename T>
class List{
public:
	//构造、析构、拷贝构造、拷贝赋值
	List(void):m_head(NULL),m_tail(NULL){}
	~List(void){
		clear();
	}
	List(List const& that):m_head(NULL),m_tail(NULL){
		for(Node* node = that.m_head;node;node=node->m_next){
			push_back(node->m_data);
		}
	}
	List& operator=(List const& that){
		if(&that!=this){
			List list = that;
			swap(m_head,list.m_head);
			swap(m_tail,list.m_tail);
		}
		return *this;
	}
	//获取首元素
	T& front(void){
		if(empty()){
			throw underflow_error("链表下溢！");
		}
		return m_head->m_data;
	}
	T const& front(void) const{
		return const_cast<List*>(this)->front();
	}
	//向首部压入
	void push_front(T const& data){
		m_head = new Node(data,NULL,m_head);
		if(m_head->m_next){
			m_head->m_next->m_prev=m_head;
		}else{
			m_tail=m_head;
		}
	}
	//从头部弹出
	void pop_front(void){
		if(empty()){
			throw underflow_error("链表下溢！");
		}
		Node* next = m_head->m_next;
		delete m_head;
		m_head=next;
		if(m_head)
			m_head->m_prev=NULL;
		else
			m_tail=NULL;
	}
	//获取尾元素
	T& back(void){
		if(empty())
			throw underflow_error("链表下溢！");
		return m_tail->m_data;
	}
	T const& back(void)const{
		return const_cast<List*>(this)->back();
	}
	//从尾部压入
	void push_back(T const& data){
		m_tail=new Node(data,m_tail);
		if(m_tail->m_prev)
			m_tail->m_prev->m_next=m_tail;
		else
			m_head=m_tail;
	}
	//从尾部弹出
	void pop_back(void){
		if(empty())
			throw underflow_error("链表下溢！");
		Node* prev = m_tail->m_prev;
		delete m_tail;
		m_tail=prev;
		if(m_tail)
			m_tail->m_next=NULL;
		else
			m_head=NULL;
	}
	//删除所有匹配元素
	void remove(T const& data){
		for(Node* node = m_head,*next;node;node=next){
			next=node->m_next;
			if(equal(node->m_data,data)){
				if(node->m_prev)
					node->m_prev->m_next=node->m_next;
				else
					m_head=node->m_next;
				if(node->m_next)
					node->m_next->m_prev = node->m_prev;
				else
					m_tail=node->m_prev;
				delete node;
			}
		}
	}
	//清空
	void clear(void){
		for(Node* next;m_head;m_head=next){
			next=m_head->m_next;
			delete m_head;
		}
		m_tail=NULL;
	}
	//判空
	bool empty(void)const{
		return m_head==NULL&&m_tail==NULL;	
	}
	//大小
	size_t size(void)const{
		size_t counter = 0;
		for(Node* node = m_head;node;node=node->m_next){
			++counter;
		}
		return counter;
	}
	//输出
	friend ostream& operator<<(ostream& os,List const& list){
		for(Node* node =list.m_head;node;node=node->m_next){
			os <<*node;
		}
		return os;
	}
	
private:
	//节点模板
	class Node{
	public:
		Node(const T& data,Node* prev=NULL,Node* next = NULL)
		:m_data(data),m_prev(prev),m_next(next){}
		friend ostream& operator<<(ostream& os,const Node& node){
			return os<<'['<<node.m_data<<']';
		}
		T 	  m_data;//数据
		Node* m_prev;//前指针
		Node* m_next;//后指针
	};
	//判等函数的通用版本
	bool equal(T const& lhs,T const& rhs)const{
		return lhs==rhs;
	}
	Node* m_head;//头指针
	Node* m_tail;//尾指针
public:
	//正向迭代器
	class Iterator{
	public:
		Iterator(Node* head =NULL,Node* tail=NULL,Node* node = NULL)
		:m_head(head),m_tail(tail),m_node(node){}
		bool operator==(Iterator const& it)const{
			return m_node==it.m_node;
		}
		bool operator!=(Iterator const& it)const{
			return !(*this==it);
		}
		Iterator& operator++(void){
			if(m_node)
				m_node=m_node->m_next;
			else
				m_node = m_head;
			return *this;
		}
		const Iterator operator++(int){
			Iterator old=*this;
			++*this;
			return old;
		}
		Iterator& operator--(void){
			if(m_node)
				m_node=m_node->m_prev;
			else
				m_node=m_tail;
			return *this;
		}
		const Iterator operator--(int){
			Iterator old=*this;
			--*this;
			return old;
		}
		T& operator*(void)const{
			return m_node->m_data;
		}
		T* operator->()const{
			return &**this;
		}
	private:
		Node* m_head;//头指针
		Node* m_tail;//尾指针
		Node* m_node;//当前节点指针
		friend class List;
	};
	//获取起始正向迭代器
	Iterator begin(void){
		return Iterator(m_head,m_tail,m_head);
	}
	//获取终止正向迭代器
	Iterator end(void){
		return Iterator(m_head,m_tail);
	}
	//常正向迭代器
	class ConstIterator{
	public:
		ConstIterator(void){
			
		}
		ConstIterator(Iterator const& it):m_it(it){}
		bool operator==(ConstIterator const& it) const{
			return m_it==it.m_it;
		}
		bool operator!=(ConstIterator const& it) const{
			return !(*this==it);
		}
		ConstIterator& operator++(void){
			++m_it;
			return *this;
		}
		const ConstIterator operator++(int){
			ConstIterator old = *this;
			++*this;
			return old;
		}
		ConstIterator operator--(void){
			--m_it;
			return *this;
		}
		const ConstIterator operator--(int){
			ConstIterator old = *this;
			--*this;
			return old;
		}
		T const& operator*(void)const{
			return *m_it;
		}
		T const* operator->(void)const{
			return &**this;
		}
	private:
		Iterator m_it;
	};
	//获取起始常正向迭代器
	ConstIterator begin(void)const{
		return const_cast<List*> (this)->begin();
	}
	//获取终止常正向迭代器
	ConstIterator end(void)const{
		return const_cast<List*> (this)->end();
	}
	//在正向迭代器之前插入
	Iterator insert (Iterator loc,T const& data){
		if(loc==end()){
			push_back(data);
			return Iterator(m_head,m_tail,m_tail);
		}else{
			Node* node = new Node(data,loc.m_node->m_prev,loc.m_node);
			if(node->m_prev)
				node->m_prev->m_next=node;
			else
				m_head=node;
			node->m_next->m_prev=node;
			return Iterator(m_head,m_tail,node);
		}
		
	}
	// 删除正向迭代器的目标
	Iterator erase(Iterator loc){
		if(loc==end()){
			throw invalid_argument("无效参数");
		}
		if(loc.m_node->m_prev)
			loc.m_node->m_prev->m_next=loc.m_node->m_next;
		else
			m_head=loc.m_node->m_next;
		if(loc.m_node->m_next)
			loc.m_node->m_next->m_prev=loc.m_node->m_prev;
		else
			m_tail=loc.m_node->m_prev;
		Node* next = loc.m_node->m_next;
		delete loc.m_node;
		return Iterator(m_head,m_tail,next);
	}
	//反向迭代器
	class ReverseIterator{};
	//常反向迭代器
	class ConstReverseIterator{};
};
//判断函数针对char const* 类型的特化版本
template<>
bool List<char const*>::equal(char const* const& lhs,char const* const& rhs)const{
	return strcmp(lhs,rhs)==0;
}
//测试用例1
void test1(void){
	List<int> list;
	list.push_front(40);
	list.push_front(30);
	list.push_front(20);
	list.push_front(10);
	cout <<list<<endl;
	list.push_back(50);
	list.push_back(60);
	list.push_back(70);
	list.push_back(80);
	cout <<list <<endl;
	list.pop_front();
	cout <<list <<endl;
	list.pop_back();
	cout <<list <<endl;
	list.front()=15;
	cout <<list<<endl;
	++list.back();
	cout <<list<<endl;
	List<int> const& rlist = list;
	cout<<rlist.front()<<' '<<rlist.back()<<endl;
	/*
	rlist.front()+=10;
	rlist.back()--;
	*/
	list.push_front(40);
	list.push_back(40);
	cout <<list<<endl;
	list.remove(40);
	cout<<list<<endl;
	cout<<list.size()<<endl;
	cout <<boolalpha<<list.empty()<<endl;
	list.clear();
	cout <<list.size()<<endl;
	cout <<list.empty()<<endl;
	cout <<list<<endl;
	list.push_back(100);
	list.push_back(200);
	list.push_back(300);
	List<int>list2 =list;
	cout <<"1:"<<list<<endl;
	cout <<"2:"<<list2<<endl;
	list.pop_front();
	list2.back()++;
	cout <<"1:"<<list<<endl;
	cout <<"2:"<<list2<<endl;
	list2 = list;
	cout <<"1:"<<list<<endl;
	cout <<"2:"<<list2<<endl;
	list.front()--;
	list2.pop_back();
	cout <<"1:"<<list<<endl;
	cout <<"2:"<<list2<<endl;
}
//测试用例2
void test2(void){
	List<int> la;
	la.push_back(10);
	List<int> lb;
	lb.push_back(20);
	lb.push_back(30);
	List<int> lc;
	lc.push_back(40);
	lc.push_back(50);
	lc.push_back(60);
	List<List<int> > ld;
	ld.push_front(lc);
	ld.push_front(lb);
	ld.push_front(la);
	cout <<ld<<endl;
}
//测试用例3
void test3(void){
	char cities[][256]={"beijing","tanjin","beijing","shanghai","beijing","chongqing"};
	List</*string*/char const*> ls;
	for(size_t i=0;i<sizeof(cities)/sizeof(cities[0]);++i){
		ls.push_back(cities[i]);
	}
	cout <<ls<<endl;
	ls.remove("beijing");
	cout <<ls<<endl;
}
void test4(void){
	List<int> list;
	for(int i=0;i<10;++i){
		list.push_back(i);
	}
	for(List<int>::Iterator it = list.begin();it!=list.end();++it){
		cout <<*it<<' ';
	}
	cout <<endl;
	List<int>::Iterator it = list.begin();
	*++++it=20;
	cout<<list<<endl;
	//const List<int>::Iterator cit = list.begin();
	//*cit=100;
	//cout<<*cit<<endl;
	List<int>::ConstIterator cit = it;
	//*cit=200;
	List<int> const& clist = list;
	//it=clist.begin();
	for(cit=clist.begin();cit!=clist.end();++cit){
		cout <<*cit<<' ';
	}
	cout <<endl;
	
}
void test5(void){
	List<int> list;
	list.insert(list.end(),10);
	list.insert(list.end(),20);
	list.insert(list.end(),30);
	cout <<list<<endl;
	List<int>::Iterator it = list.end();
	list.insert(list.insert(--it,25),22);
	cout <<list<<endl;
	it=list.begin();
	list.erase(list.erase(++it));
	cout <<list<<endl;
}
/*int main(void){
	//test1();
	//test2();
	//test3();
	//test4();
	test5();
	return 0;
}*/

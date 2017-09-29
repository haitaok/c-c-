//双向线性链表容器
#include <iosream>
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
	List(List const& that){
		
	}
	List& operator=(List const& that){}
	//获取首元素
	T& front(void){
		
	}
	T const& front(void) const{
		
	}
	//向首部压入
	void push_front(T const& data){
		
	}
	//从头部弹出
	void pop_front(void){}
	//获取尾元素
	T& back(void){}
	T const& back(void)const{}
	//从尾部压入
	void pop_back(void){}
	//删除所有匹配元素
	void remove(T const& data){}
	//清空
	void clear(void){}
	//判空
	bool empty(void)const{}
	//大小
	size_t size(void)const{}
	//输出
	friend ostream& operator<<(ostream& os,List const& list){}
	
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
	Node* m_head;//头指针
	Node* m_tail;//尾指针
};

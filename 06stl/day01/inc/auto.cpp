#include <iostream>
#include <memory>
#include<typeinfo>
using namespace std;
class A{
public:
	A(int data=0):m_data(data){
		cout <<"A 构造"<<endl;
	}
	~A(void){
		cout <<"A 析构"<<endl;
	}
	void print(void) const{
		cout <<m_data<<endl;
	}
public:
	int m_data;
};
template <typename T>
class good_ptr{
public:
	good_ptr(T* p=NULL):m_p(p){
		
	}
	~good_ptr(void){
		if(m_p){
			delete m_p;
			m_p=NULL;
		}
	}
	good_ptr(good_ptr& that):m_p(that.release()){
		
	}
	good_ptr& operator=(good_ptr& that){
		if(&that!=this){
			reset(that.release());
		}
		return *this;
	}
	T& operator*(void)const{
		return *m_p;
	}
	T* operator->(void)const{
		return &**this;
	}
private:
	T* release(void){
		T* p = m_p;
		m_p=NULL;
		return p;
	}
	void reset(T* p){
		if(p!=m_p){
			delete m_p;
			m_p=p;
		}
	}
	T* m_p;
};
template <typename T>
class good_ptr<T[]>{
public:
	good_ptr(T* p=NULL):m_p(p){
		
	}
	~good_ptr(void){
		if(m_p){
			delete[] m_p;
			m_p=NULL;
		}
	}
	good_ptr(good_ptr& that):m_p(that.release()){
		
	}
	good_ptr& operator=(good_ptr& that){
		if(&that!=this){
			reset(that.release());
		}
		return *this;
	}
	T& operator*(void)const{
		return *m_p;
	}
	T* operator->(void)const{
		return &**this;
		/*return &*(*this);
		return &(*this).operator*();
		return m_p;*/
	}
private:
	T* release(void){
		T* p = m_p;
		m_p=NULL;
		return p;
	}
	void reset(T* p){
		if(p!=m_p){
			delete[] m_p;
			m_p=p;
		}
	}
	T* m_p;
};
int main(void){
	//auto_ptr<A> pa(new A[2]);
	/*A* pa = new A[2];
	union{
		A* a;
		long int* b;
	};
	a=pa;
	//cout << sizeof(a)<<endl;
	//cout << sizeof(b)<<endl;
	cout <<*(b-1)<<endl;
	delete[] pa;*/
	/*
	good_ptr<A> pa(new A(1234));
	cout <<(*pa).m_data<<endl;
	pa->print();
	good_ptr<A> pb=pa;
	cout <<(*pb).m_data<<endl;
	pb->print();
	*/
	good_ptr<A[]> pa(new A[2]);
	return 0;
}

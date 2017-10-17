#include <iostream>
#include <queue>
#include <vector>
using namespace std;
class Student{
public:
	Student(string const& name,float score):m_name(name),m_score(score){}
	friend ostream& operator<<(ostream& os,Student const& stu){
		os <<'('<<stu.m_name<<", "<<stu.m_score<<')';
	}
	/*
	bool operator<(Student const& rhs)const{
		return m_score<rhs.m_score;
	}
	*/
private:
	string m_name;
	float m_score;
	friend class CmpStu;
};
class CmpStu{
public:
	bool operator()(Student const& sa,Student const& sb)const{
		return sa.m_score< sb.m_score;
	}	
};
int main(void){
	priority_queue<int> pi;
	pi.push(13);
	pi.push(24);
	pi.push(17);
	pi.push(23);
	pi.push(36);
	while(!pi.empty()){
		cout <<pi.top()<<' ';
		pi.pop();
	}
	cout << endl;
	priority_queue<Student,vector<Student>,CmpStu> ps;
	ps.push(Student("张飞",75.5));
	ps.push(Student("赵云",80));
	ps.push(Student("关羽",75.5));
	ps.push(Student("刘备",50));
	ps.push(Student("曹操",100));
	while(!ps.empty()){
		cout << ps.top()<<' ';
		ps.pop();
	}
	cout << endl;
	return 0;
}

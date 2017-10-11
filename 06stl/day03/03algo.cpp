#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
template <typename IT>
void print(IT begin,IT end){
	while(begin!=end)
		cout <<*begin++<<' ';
	cout <<endl;
}
class Integer{
public:
	Integer(int const& i):m_i(i){}
	/*
	operator int&(void){
		return m_i;
	}
	operator int const& (void)const{
		return static_cast<int&>(const_cast<Integer&>(*this));
	}*/
	bool operator==(Integer const& rhs)const{
		return m_i==rhs.m_i;
	}
	friend ostream& operator<<(ostream& os,Integer const& i){
		return os<<i.m_i;
	}
private:
	int m_i;
};
bool str_case_cmp(string const& a,string const& b){
	return strcasecmp(a.c_str(),b.c_str())<0;
}
class StrCmp{
public:
	StrCmp(bool caps=true):m_caps(caps){}
	bool operator()(string const& a,string const& b)const{
		if(m_caps){
			return strcmp(a.c_str(),b.c_str())<0;
		}else{
			return strcasecmp(a.c_str(),b.c_str())<0;
		}
	}
private:
	bool m_caps;

};
class Student{
public:
	Student(string const& name,int age):m_name(name),m_age(age){}
	friend ostream& operator<< (ostream& os,Student const& stu){
		return os<<'('<<stu.m_name<<","<<stu.m_age<<')';
	}
	bool operator<(Student const& rhs)const{
		if(m_name!=rhs.m_name)
			return m_name>rhs.m_name;
		return m_age<rhs.m_age;
	}
private:
	string m_name;
	int m_age;
	friend class StuCmp;
};
class StuCmp{
public:
	bool operator()(Student const& a,Student const& b)const{
		if(a.m_name!=b.m_name){
			return a.m_name>b.m_name;
		}
		return a.m_age<b.m_age;
	}
};
int main(void){
	vector<Integer> vi;
	vi.push_back(14);
	vi.push_back(23);
	vi.push_back(19);
	vi.push_back(47);
	vi.push_back(32);
	print(vi.begin(),vi.end());
	vector<Integer/*int*/>::iterator it = find(vi.begin(),vi.end(),47);
	if(it==vi.end()){
		cout <<"没找到!"<<endl;
	}else{
		cout <<"找到了"<<*it<<endl;
	}
	vector<string> vs;
	vs.push_back("heze");
	vs.push_back("qingdao");
	vs.push_back("heZe");
	vs.push_back("binzhou");
	vs.push_back("linyi");
	vs.push_back("weifang");
	vs.push_back("QINGDAO");
	//sort(vs.begin(),vs.end());
	//sort(vs.begin(),vs.end(),str_case_cmp);
	sort(vs.begin(),vs.end(),StrCmp(false));
	print(vs.begin(),vs.end());
	
	vector<Student> vt;
	vt.push_back(Student("zhangfei",25));
	vt.push_back(Student("zhaoyun",22));
	vt.push_back(Student("zhangfei",20));
	vt.push_back(Student("zhaoyun",28));
	vt.push_back(Student("guanyu",48));
	//sort(vt.begin(),vt.end());
	sort(vt.begin(),vt.end(),StuCmp());
	print(vt.begin(),vt.end());
	return 0;
}

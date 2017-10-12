#include <iostream>
using namespace std;
int main(void){
	string s1("0123456789");
	string s2 = s1.substr(3,4);
	cout << s2 <<endl;
	s2=s1.substr(3);
	cout << s2 <<endl;
	string s3(s1,3,4);//构造
	cout << s3<<endl;
	s3 = string(s1,3);//构造
	cout << s3 <<endl;
	for(string::size_type i=0;i<s3.size();++i)
		//cout << s3[i]<<' ';
		cout << s3.at(i)<<' ';
	cout << endl;
	//s3[s3.size()+10]='A';//不会作越界检查
	try{
		s3.at(s3.size()+10)='A';
	}catch(exception& ex){
		cout <<ex.what()<<endl;
	}
	string s4="int foo(int a,int b){int x;}";
	string s5="int";
	string s6="unsigned int";
	string::size_type pos = 0;
	while((pos=s4.find(s5,pos))!=string::npos){
		s4.replace(pos,s5.size(),s6);
		pos+=s6.size();
	}
	cout <<s4<<endl;
	s4.insert(9,"long ").insert(9,"long ");
	cout <<s4<<endl;
	s4.erase(9,10);
	cout <<s4<<endl;
	s4.erase(9);
	cout <<s4<<endl;
	s4.erase();
	cout <<boolalpha<<s4.empty()<<endl;
	string s7("hello"),s8("world");
	s7.swap(s8);
	cout << s7<<' '<<s8<<endl;
	//s7=s8;
	s7.assign(s8);
	cout <<s7<<' '<<s8<<endl;
	//s7=string("tarena",1,3);
	s7.assign("tarena",1,3);
	cout <<s7<<endl;
	string s9="ABCDEFGHIJKLMN";
	for(string::reverse_iterator it=s9.rbegin();it!=s9.rend();++it){
		cout <<*it;
	}
	cout <<endl;
	return 0;
}

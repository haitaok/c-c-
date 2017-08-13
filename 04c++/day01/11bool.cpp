%:include <iostream>
using namespace std;
int main(){
	bool flag=false;
	/*
		bool类型四大假
		false 0 '\0' NULL
	*/
	flag="abc";
	if(flag)<%
		cout<<"flag is true"<<endl;
	}else{
		cout <<"flag is false"<<endl;
	%>
	int age=100;
	cout <<age<<&age<<endl;
	cout <<age<<bitand age<<endl;
}

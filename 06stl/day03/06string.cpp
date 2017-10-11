#include <iostream>
#include <string>
//#include <string.h>
//#include <cstring>
using namespace std;
int main(void){
	string s1("ABC");
	string s2("123");
	cout << s1.append(s2)<<endl;
	cout << s1 <<endl;
	string s3("Hello,World!");
	s1.append(s3,6,5);
	cout << s1<<endl;
	s1.append(10,'*');
	cout << s1 <<endl;
	string s4("abcdefg");
	string s5("123c456f789");
	string::size_type pos = s4.find_first_of(s5,3);
	cout <<pos<<endl;//5
	pos = s4.find_first_not_of(s5,2);
	cout <<pos<<endl;//3
	pos = s4.find_last_of(s5);
	cout <<pos<<endl;//5
	pos = s4.find_last_not_of(s5);
	cout <<pos<<endl;//6
	return 0;
}

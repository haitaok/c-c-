#include <iostream>
using namespace std;
int main(){
	char data[10]={0};
	cout <<"cin="<<&cin<<endl;
	cin.getline(data,8);
	cout << data<<endl;
	cout <<"cin="<<&cin<<endl;
	/*如果流出错 修正错误状态*/
	if(!cin){
		cin.clear();
	}
	/*忽略掉缓冲中的字符*/
	//cin.ignore(); 忽略调一个字符
	/*最多忽略调1000个字符 直到‘\n’*/
	cin.ignore(1000,'\n');
	cin.getline(data,8,'=');
	cout << data<<endl;
}

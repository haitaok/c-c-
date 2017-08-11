#include <iostream>
using namespace std;

int age=100;
namespace {
	/* 防止跨文件访问 */
	int count=1001;
}
int main(){
	cout<<age<<endl;
	cout<<::age<<endl;
	cout<<count<<endl;
	cout<<::count<<endl;
}


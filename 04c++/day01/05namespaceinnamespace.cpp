#include <iostream>
using namespace std;

namespace ns1{
	int age=1;
	namespace ns2{
		int age=2;
		void show(){
			cout<< age << endl;
		}
	}
}
namespace ns3 = ns1::ns2;
int main(){
	/* 调用ns2 中的show函数 */
	ns1::ns2::show();
	using ns1::ns2::show;
	show();
	//using namespace ns1::ns2;
	//show();
	ns3::show();
}


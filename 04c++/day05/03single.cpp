#include <iostream>
using namespace std;
class Singleton{
	/*私有化构造 拷贝构造 防止类外创建*/
	private:
	Singleton(){
	
	}
	Singleton(const Singleton& s){
	
	}
	/* 提供静态成员 类外初始化 */
	static Singleton sig;
	public:
	/* 提供公开的得到对象的接口
		使用类型就可以得到对象 */
	static Singleton& getInstance(){
		return sig;
	}
};
Singleton Singleton::sig;
int main(){
	Singleton& sig1 = Singleton::getInstance();
	Singleton& sig2=Singleton::getInstance();
	cout <<&sig1<<endl;
	cout <<&sig2<<endl;
}

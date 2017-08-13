#include <iostream>

using namespace std;
enum Direction{D_UP,D_DOWN,D_LEFT,D_RIGHT};
int main(){
	/*定义一个方向*/
	Direction dire=D_UP;
	cout << dire << endl;
	dire=D_LEFT;
	cout << dire << endl;
	/*枚举的本质是一个整数*/
	int x=dire;
	cout<<"x="<<x<<endl;
	/*c是可以的 这里编译出错 不能把一个整数赋值给枚举类型 这里体现了c++类型检查严格 */
	dire =1;
}

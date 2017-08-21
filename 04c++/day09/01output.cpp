#include <iostream>
using namespace std;
int main(){
	/*刷缓冲 */
	cout << "hello "<<flush;
	/*这两个不能重定向*/
	clog<<"world ";
	cerr<<"test cerr ";
	
}

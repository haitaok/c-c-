#include <iostream>
#include <fstream>
using namespace std;

int main(){
	fstream iofs("random.txt");
	if(!iofs){
		cout << "stream failed" <<endl;
		return -1;
	}
	cout << iofs.tellp()<<endl;
	cout <<iofs.tellg()<<endl;
	iofs<<"hello";
	cout << iofs.tellp()<<endl;
	cout <<iofs.tellg()<<endl;
	iofs<<"world";
	cout << iofs.tellp()<<endl;
	cout <<iofs.tellg()<<endl;
	/*向前调整5个字节*/
	iofs.seekp(5,ios::beg);
	iofs<<123;
	cout << iofs.tellp()<<endl;
	cout <<iofs.tellg()<<endl;
	iofs.close();
	
}

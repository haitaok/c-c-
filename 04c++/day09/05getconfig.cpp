#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream fis("config.txt");
	if(!fis){
		cout<<"打开配置文件失败"<<endl;
		return -1;
	}
	char data[20]={0};
	fis.getline(data,20,'=');
	string serverIp;
	fis>>serverIp;
	cout <<serverIp<<endl;
	fis.getline(data,20,'=');
	short port;
	/*格式化读取*/
	fis>>port;
	cout << port <<endl;
	fis.close();
	
}

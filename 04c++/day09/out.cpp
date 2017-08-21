#include <fstream>
#include <iostream>
using namespace std;
int main(){
	ifstream ifs("03getput.cpp");
	if(!ifs){
		perror("open file failed");
		return -1;
	}
	ofstream ofs("out.cpp");
	if(!ofs){
		perror("open file failed");
		return -1;
	}
	char c;
	while((c=ifs.get())!=EOF){
		ofs.put(c);
	}
	ifs.close();
	ofs.close();
}

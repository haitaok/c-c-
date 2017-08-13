#include <iostream>

using namespace std;

int main(){
	union{
		int m;
		char d[4];
	};
	/* 49->'1' 50->'2' 51->'3' 52->'4' */
	m=0x31323334;
	for(int i=0;i<4;i++){
		cout << d[i]<<" ";
	}
	cout<<endl;
}


#include <iostream>

extern "C" void *memcpy(void*,const void *,size_t);

extern "C" size_t strlen(const char *);

using namespace std;

int main(){
	const char* cstr="hello world";
	char scstr[30]="1231231";
	memcpy(scstr,cstr,strlen(cstr));
	cout<<scstr<<endl;
}

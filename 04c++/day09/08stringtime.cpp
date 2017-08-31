#include <ctime>
#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;
int main(){
	struct tm *local;
	time_t t=time(NULL);
	local=localtime(&t);
	ostringstream oss;
	string name="wtmpx";
	oss<<setfill('0')<<local->tm_year+1900<<setw(2)<<local->tm_mon+1
			<<setw(2)<<local->tm_mday
			<<setw(2)<<local->tm_hour<<":"
			<<setw(2)<<local->tm_min<<":"
			<<setw(2)<<local->tm_sec<<name;
	string filename = oss.str();
	cout << filename<<endl;
}

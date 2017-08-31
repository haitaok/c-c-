#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;
int main(){
	string filename = "wtmpx";
	int year=2014;
	int month = 3;
	int day=8;
	ostringstream ostr;
	ostr<<filename;
	ostr<<setfill('0')<<year<<"-"<<setw(2)<<month<<"-";
	ostr<<setw(2)<<day;
	string mystr = ostr.str();
	cout <<mystr<<endl;
}

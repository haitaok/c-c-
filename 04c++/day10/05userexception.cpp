#include <iostream>
using namespace std;
class DmsClientException{
	string msg;
	public:
	DmsClientException(string msg="dms client exception"){
		this->msg=msg;
	}
	virtual const char* what()const throw(){
		return msg.c_str();
	}
};
class DmsReaderException:public DmsClientException{
	public:
	DmsReaderException(string msg="dms reader exception"):DmsClientException(msg){
		
	}
};
void readLogs()throw(DmsReaderException){
	if(1==1){
		throw DmsReaderException("back up file failed");
	}
}
int main(){
	try{
		try{
			readLogs();
		}catch(DmsReaderException& e){
			//cout << e.what()<<endl;
			/*不能处理 就继续上抛*/
			cout <<"这一层处理不了 请求上级处理"<<endl;
			throw ;
		}
	}catch(DmsReaderException& e){
		cout << e.what()<<endl;
	}
	cout <<"app continue"<<endl;
}

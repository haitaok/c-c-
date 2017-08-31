#include <iostream>
#include <cstdlib>
#include <fstream>
#include <ctime>
using namespace std;
/*对数据进行^*/
void _xor(const char*src,const char* des,unsigned char key){
	ifstream ifs(src,ios::binary);
	if(!ifs){
		perror("打开源文件失败");
		return;
	}
	ofstream ofs(des,ios::binary);
	if(!ofs){
		perror("打开目标文件失败");
		return;
	}
	char data[50];
	while(ifs.read(data,sizeof data)){
		/*数组满*/
		for(int i=0;i<50;i++){
			data[i]=data[i]^key;
		}
		ofs.write(data,sizeof data);
	}
	/*最后一次读取的数据加密之后写入文件*/
	int gcount = ifs.gcount();
	for(int i=0;i<gcount;i++){
		data[i]=data[i]^key;
	}
	ofs.write(data,gcount);
	/*关闭资源*/
	ifs.close();
	ofs.close();
}
/*加密函数*/
void enc(const char* src,const char*des){
	/*随机密钥*/
	srand(time(NULL));
	unsigned char key=rand()%256;
	cout <<"key = "<<(int)key<<endl;
	_xor(src,des,key);
	
}
/*解密函数*/
void dec(const char* src,const char*des,unsigned char key){
	_xor(src,des,key);
}
int main(int argc,char**argv){
	if(argc<3){
		cout <<"程序使用错误 应如下："<<endl;
		cout <<"./a.out 源文件名 加密文件"<<endl;
		cout <<"./a.out 加密文件 破解文件 key"<<endl;
		return -1;
	}
	if(argc==3){
		//调用一个函数 对文件数据加密
		cout <<"文件加密"<<endl;
		enc(argv[1],argv[2]);
	}
	if(argc>=4){
		//调用一个函数 对文件解密
		cout <<"文件解密"<<endl;
		dec(argv[1],argv[2],atoi(argv[3]));
	}
}

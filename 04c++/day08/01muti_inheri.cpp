#include <iostream>
using namespace std;

class Phone{
	double price;
	public:
	Phone(double price=0):price(price){
		cout <<"Phone()"<<endl;
	}
	double getPrice(){
		return price;
	}
	void phoneCall(){
		cout <<"使用phone打电话"<<endl;
	}
};
class Camera{
	double price;
	public:
	Camera(double price=0):price(price){
		cout <<"Camera()"<<endl;
	}
	double getPrice(){
		return price;
	}
	void cameraFun(){
		cout <<"使用Camera拍视频"<<endl;
	}
};
class Mp3{
	double price;
	public:
	Mp3(double price=0):price(price){
		cout <<"Mp3()"<<endl;
	}
	double getPrice(){
		return price;
	}
	void mp3Fun(){
		cout <<"使用mp3播放音乐"<<endl;
	}
};
/*
	IPhone 继承多个类
	构造顺序 和 继承顺序 一致
*/
class IPhone:public Phone,public Camera,public Mp3{//初始化是跟继承顺序有关
	/*名字隐藏*/
	public:
	IPhone(double p=0,double c=0,double m=0):Mp3(m),Camera(c),Phone(p){
		
	}
	/*名字隐藏*/
	double getPrice(){
		return Mp3::getPrice()+Camera::getPrice()+Phone::getPrice();
	}
};
int main(){
	IPhone iphone;
	//iphone.getPrice();
	iphone.phoneCall();
	iphone.cameraFun();
	iphone.Phone::getPrice();
	iphone.Camera::getPrice();
	cout << "------------"<<endl;
	IPhone iphone4(1000,1001,28);
	cout << iphone4.Phone::getPrice()<<endl;
	cout << iphone4.Mp3::getPrice()<<endl;
	cout << iphone4.getPrice()<<endl;
}


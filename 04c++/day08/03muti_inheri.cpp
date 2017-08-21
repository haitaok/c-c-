#include <iostream>
using namespace std;
class Product{
	double price;
	public:
	Product(double price=0):price(price){
		
	}
	double getPrice(){
		return price;
	}
};
class Phone:virtual public Product{
	
	public:
	Phone(double price=0):Product(price){
		cout <<"Phone()"<<endl;
	}
	
	void phoneCall(){
		cout <<"使用phone打电话"<<endl;
	}
};
class Camera:virtual public Product{
	public:
	Camera(double price=0):Product(price){
		cout <<"Camera()"<<endl;
	}
	void cameraFun(){
		cout <<"使用Camera拍视频"<<endl;
	}
};
class Mp3:virtual public Product{
	public:
	Mp3(double price=0):Product(price){
		cout <<"Mp3()"<<endl;
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
	IPhone(double p=0,double c=0,double m=0):Mp3(m),Camera(c),Phone(p),Product(p+c+m){
		
	}
	/*名字隐藏*/
	/*double getPrice(){
		return Mp3::getPrice()+Camera::getPrice()+Phone::getPrice();
	}*/
};
int main(){
	cout << sizeof(Phone)<<endl;
	cout << sizeof(IPhone)<<endl;
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
	Phone phone(998);
	cout << phone.getPrice()<< endl;
}

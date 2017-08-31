#include <QApplication>
#include <QLabel>
#include <QTextCodec>
int main(int argc,char** argv){
	/*构建qt应用程序对象*/
	QApplication app(argc,argv);
	/*创建编码对象*/
	QTextCodec *coder = QTextCodec::codecForName("utf-8");
	/*构建标签对象*/
	QLabel qlab(coder->toUnicode("你好 qt!"));
	/*默认隐藏 需要显示*/
	qlab.show();
	/*让程序进入事件循环*/
	return app.exec();
}

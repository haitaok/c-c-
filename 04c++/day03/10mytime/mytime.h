#ifndef MYTIME_H
#define MYTYIME_H
	extern int g_var;
	class MyTime{
		int hour;
		int min;
		int sec;
		public:
		MyTime(int h=0,int m=0,int s=0);
		void show();
		void dida();
		void run();
	};
#endif

#ifndef MYTIME_H
#define MYTIME_H 1

	class MyTime{
		int hour;
		int min;
		int sec;
		public:
		MyTime();
		MyTime(int hour,int min=0,int sec=0);
		~MyTime();
		MyTime(const MyTime& mt);
		static int g_c;
		void show();
		void dida();
		void run();
	};
	
#endif

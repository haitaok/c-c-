#include <stdio.h>

//int fgetc(FILE*);int fputc(int,FILE*)

int main(int argc,char* argv[]){
	//a.out filename copyfile
	if(argc!=3){
		printf("%s filename copyfile\n",*argv);
		return 0;
	}
	FILE* fi = fopen(argv[1],"r");
	if(fi==NULL){
		printf("无法打开文件%s\n",argv[1]);
		return 1;
	}
	FILE* fo= fopen(argv[2],"w");
	if(fo==NULL){
		printf("无法打开文件%s\n",argv[2]);
		return 2;
	}
	int c;
	while((c=fgetc(fi))!=EOF){
		putchar(c);
		fputc(c,fo);
	}
	fclose(fi);
	fclose(fo);
	return 0;
}
#include <stdio.h>

//int fgetc(FILE*);int fputc(int,FILE*)

int main(int argc,char* argv[]){
	//a.out filename copyfile
	if(argc!=3){
		printf("%s filename copyfile\n",*argv);
		return 0;
	}
	FILE* fi = fopen(argv[1],"r");
	if(fi==NULL){
		printf("无法打开文件%s\n",argv[1]);
		return 1;
	}
	FILE* fo= fopen(argv[2],"w");
	if(fo==NULL){
		printf("无法打开文件%s\n",argv[2]);
		return 2;
	}
	int c;
	while((c=fgetc(fi))!=EOF){
		putchar(c);
		fputc(c,fo);
	}
	fclose(fi);
	fclose(fo);
	return 0;
}
#include <stdio.h>

//int fgetc(FILE*);int fputc(int,FILE*)

int main(int argc,char* argv[]){
	//a.out filename copyfile
	if(argc!=3){
		printf("%s filename copyfile\n",*argv);
		return 0;
	}
	FILE* fi = fopen(argv[1],"r");
	if(fi==NULL){
		printf("无法打开文件%s\n",argv[1]);
		return 1;
	}
	FILE* fo= fopen(argv[2],"w");
	if(fo==NULL){
		printf("无法打开文件%s\n",argv[2]);
		return 2;
	}
	int c;
	while((c=fgetc(fi))!=EOF){
		putchar(c);
		fputc(c,fo);
	}
	fclose(fi);
	fclose(fo);
	return 0;
}
#include <stdio.h>

//int fgetc(FILE*);int fputc(int,FILE*)

int main(int argc,char* argv[]){
	//a.out filename copyfile
	if(argc!=3){
		printf("%s filename copyfile\n",*argv);
		return 0;
	}
	FILE* fi = fopen(argv[1],"r");
	if(fi==NULL){
		printf("无法打开文件%s\n",argv[1]);
		return 1;
	}
	FILE* fo= fopen(argv[2],"w");
	if(fo==NULL){
		printf("无法打开文件%s\n",argv[2]);
		return 2;
	}
	int c;
	while((c=fgetc(fi))!=EOF){
		putchar(c);
		fputc(c,fo);
	}
	fclose(fi);
	fclose(fo);
	return 0;
}
#include <stdio.h>

//int fgetc(FILE*);int fputc(int,FILE*)

int main(int argc,char* argv[]){
	//a.out filename copyfile
	if(argc!=3){
		printf("%s filename copyfile\n",*argv);
		return 0;
	}
	FILE* fi = fopen(argv[1],"r");
	if(fi==NULL){
		printf("无法打开文件%s\n",argv[1]);
		return 1;
	}
	FILE* fo= fopen(argv[2],"w");
	if(fo==NULL){
		printf("无法打开文件%s\n",argv[2]);
		return 2;
	}
	int c;
	while((c=fgetc(fi))!=EOF){
		putchar(c);
		fputc(c,fo);
	}
	fclose(fi);
	fclose(fo);
	return 0;
}
//int fgetc(FILE*);int fputc(int,FILE*)

int main(int argc,char* argv[]){
	//a.out filename copyfile
	if(argc!=3){
		printf("%s filename copyfile\n",*argv);
		return 0;
	}
	FILE* fi = fopen(argv[1],"r");
	if(fi==NULL){
		printf("无法打开文件%s\n",argv[1]);
		return 1;
	}
	FILE* fo= fopen(argv[2],"w");
	if(fo==NULL){
		printf("无法打开文件%s\n",argv[2]);
		return 2;
	}
	int c;
	while((c=fgetc(fi))!=EOF){
		putchar(c);
		fputc(c,fo);
	}
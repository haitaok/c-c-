#include <stdio.h>
//fread/fwrite(内存地址，每个元素字节数，元素个数，文件)
typedef struct person{
	char name[20];//20b
	char gender;//1b
	int age;//4b+空3b
	double salary;//8b
}person;//共36个字节

int main(){
	person a[5]={
		{"过一如",'F',18,3500},
		{"王龙",'M',20,4500},
		{"高尚",'M',21,4000},
		{"张永祥",'F',19,3600},
		{"刘建",'M',24,6000}
	};
	FILE* fp = fopen("person.dat","w");
	if(fp==NULL){
		printf("打开person.dat文件失败\n");
		return 1;
	}
	int b[10]={11,22,33,44,55,66,77,88,99,1010};
	short s=12345;
	fwrite(a,sizeof(person),5,fp);
	fwrite(b,sizeof(int),10,fp);
	fwrite(&s,sizeof(short),1,fp);
	fclose(fp);
	return 0;
}

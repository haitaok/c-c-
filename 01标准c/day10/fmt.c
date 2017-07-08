#include <stdio.h>

int main(){
	char* s="furong";
	printf("%d,%10d,%-10d,%010d,%+d\n",123,123,123,123,123);
	printf("%f,%10f,%-10f,%06.3f,%6.2f\n",1.2,1.2,1.2,1.2,1.2);	
	printf("%s,%10s,%-10s,%6.3s\n",s,s,s,s);
	int w;
	for(w=10;w<15;w++){
		printf("%c,%*c\n",'a',w,'a');
	}
	printf("input an integer:");
	int x,y;
	scanf("%3d%5d",&x,&y);
	printf("x=%d,y=%d\n",x,y);
	scanf("%*d%d",&x);
	printf("x=%d\n",x,y);
	char str[100],st[100];
	//scanf("%*[^\n]");
	scanf("%*c");
	scanf("%[a-z]%[^a-z\n]",str,st);
	printf("str=%s,st=%s\n",str,st);
	return 0;
}


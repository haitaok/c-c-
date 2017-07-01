#include <stdio.h>

#define SORT(a,op) for(int i=0;i<sizeof(a)/sizeof(*a);i++){ \
		for(int j=i+1;j<sizeof(a)/sizeof(*a);j++){ \
			if(a[i] op a[j]){ \
				int temp=a[i]; \
				a[i]=a[j]; \
				a[j]=temp; } \
		} \
	}	
			

int main()
{
	int a[5]={2,3,8,4,1};
	SORT(a,>);
	int n=0;	
	for(n=0;n<sizeof(a)/sizeof(*a);n++){
		printf("%d ",a[n]);
	}
	printf("\n");
	SORT(a,<);
	for(n=0;n<sizeof(a)/sizeof(*a);n++){
		printf("%d ",a[n]);
	}
	printf("\n");
	return 0;
}

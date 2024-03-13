#include<stdio.h>
int main(){
	int i,range;
	
	printf("ENTER THE RANGE :");
	scanf("%d",&range);
	
	for(i=1;i<=range;i++){
		int a=i*i;
		printf(" %d,",a);
	}
}
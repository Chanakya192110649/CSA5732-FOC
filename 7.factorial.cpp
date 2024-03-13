#include<stdio.h>
int main(){
	int i,num,a=1;
	
	printf("ENTER THE integer :");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++){
		a *=i;
	
	}
		printf(" %d",a);
}
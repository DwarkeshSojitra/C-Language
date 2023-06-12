#include<stdio.h>

int main(){
	
	int i,n;
	
	printf("enter n : ");
	scanf("%d",&n);
	
	do{
		
		if(n%2==0)
		printf("%d\n",n);
		n--;
	}while(i<=n);
	
	return 0;
}

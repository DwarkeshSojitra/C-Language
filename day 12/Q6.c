#include<stdio.h>

int main(){
	
	int i,n;
	
	printf("enter n : ");
	scanf("%d",&n);
	
	while(i<=n){
		
		if(n%2==0)
		printf("%d\n",n);
		n--;
	}
	return 0;
}

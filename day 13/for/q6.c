#include<stdio.h>

int main(){
	
	int i,n;
	
	printf("enter n : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;n--){
		
		if(n%2==0)
		printf("%d\n",n);
		
	}
	return 0;
}

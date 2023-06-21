#include<stdio.h>

int main(){
	
	int n,i;
	
	printf("Enter Size of Array (n): ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0; i<n; i++){
		
		printf(" Enter Element a[%d] : ",i);
		scanf("%d",&a[i]);
    }
     
	for(i=0; i<n; i++){
	
	    printf("%d ",a[i]);
    }
    
	return 0;
}

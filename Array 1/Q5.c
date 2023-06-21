#include<stdio.h>

int main(){
	
	int n,i;
	
	printf("enter size of element (n) : ");
	scanf("%d",&n);
	
	printf("\n");

    int a[n],b[n],c[n];   
   
    for(i=0; i<n; i++){
    
		               printf("enter element a[%d] :",i);
		               scanf("%d",&a[i]);
    }
    printf("\n");
    
	for(i=0; i<n; i++){
    
		               printf("enter element b[%d] :",i);
		               scanf("%d",&b[i]);
	}
    printf("\n");
   
    for(i=0; i<n; i++){
	                   c[i]=a[i]+b[i];
                       printf("\nElement of c[%d] => a[%d] + b[%d] : %d ",i,i,i,c[i]);
	}
	//printf("anthor araay c[] : %d",c[i]);
	
    	
  return 0;}

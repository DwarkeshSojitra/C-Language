#include<stdio.h>

int main(){
	
	int n,i;
	
	printf("enter size of array (n) : ");
	scanf("%d",&n);
	printf("\n");
	
	int a[n],b[n],addition=0;
	
	for(i=0; i<n; i++){
		
		printf("enter element of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++){
		
		addition=addition + a[i];
	}
	printf("\naddition of a[] : %d\n",addition);
	
	for(i=0; i<n; i++){
		 
		b[i]=a[i];
		printf("\nelement of b[%d] : %d",i,b[i]);
	}
	printf("\n\naddition of b[] : %d",addition);
	
	
  return 0;
}

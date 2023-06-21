#include<stdio.h>

int main(){
	
	int length,i,n;
	
	printf("Enter size of array n : ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0; i<n; i++){
		
		printf("enter element of a[%d] : ",i  );
	    scanf("%d",&a[i]);
	}
	
	
	length=sizeof(a)/sizeof(a[0]);
	
	printf("length of array : %d",length);
	
  return 0;
}

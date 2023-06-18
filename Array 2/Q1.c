#include<stdio.h>

int main(){
	
	int m,n;
	
	printf("Enter the element of rows : ");
	scanf("%d",&m);
	
	printf("Enter the element of columns : ");
	scanf("%d",&n);
	

	int i,j;
	int a[i][j];
	
	for(i=0; i<=2; i++){
		
		for(j=0; j<=2; j++){
			
			printf(" Enter element of a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0; i<=2; i++){
		
		for(j=0; j<=2; j++){
			
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

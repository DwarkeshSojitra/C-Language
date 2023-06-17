#include <stdio.h>

int main() {
    int i,j;
    int x=4 , y=4;

    for (i=1; i<=4; i++) {
    	
        for (j=1; j<=7; j++) {
        	
            if (j==x || j==y) {
            	
                printf(" * ");
            } 
			else {
				
                printf("  ");
            }
            
        }
        printf("\n");
        x--;
        y++;
    }
  return 0;
}

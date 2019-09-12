#include<stdio.h>
#include<stdlib.h>

int main( int argc, char* argv[]){
    printf("\nMultiplication table for %d\n", atoi(argv[1]));
    for(int i = 0; i <=atoi(argv[1]); i++){
    	    for(int j = 1; j <=3; ++j){
	    	    printf("%d times %d is %d\n",i,j,i*j);
            }
     }
}
		   

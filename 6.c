/*
   输出100至200之间的素数 
*/
#include <stdio.h>

int fun(int n){
    int i=2;	
	for(i=2;i<=sqrt(n);i++){
    	if(n%i==0)			
    		return 0;	
  	}
	return 1;	
}

int main()
{
	int i;
	for ( i=100 ; i<=200 ; i++ ) {
  		if(fun(i))		
			printf("%d ",i);	
	}	
	return 0;
}


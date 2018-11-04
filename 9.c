#include <stdio.h>

int check (int i)
{
	if ( i==1 ) {
		return (0);
	} else {
		int a[i+1] , j , sum=0;
		for (j=1 ; j<=i ; j++)
		    a[j] = 0; 
		for ( j=1 ; j<i ; j++ ) {
			if ( a[j] )
				break;
			if (j==1){
				sum++;
				a[1]=1;
			}else if ( i%j==0 ) {
				a[j] = 1;
				a[i/j] = 1;
				sum+=(j+(i/j));
			}
		}
		if ( sum==i ) 
		    return (1);
		else return (0);
	}
}

void allPerfectNumbers (int n)
{
	int i;
	for ( i=1 ; i<=n ; i++ ) {
		if ( check(i) ){
			printf("%d " , i);
		}
	}
}

int main (void)
{
	int m;
	scanf("%d" , &m);
	allPerfectNumbers (m);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

void findPrincipalElement (int array[], int length)
{
	int *m;
	m = (int*) malloc( length*(sizeof(int)) );
	int i ,  max = 0  ,  min = 99999 , max_ , min_;
	for ( i=0 ; i<length ; i++)
		m[i] = 0;
	for ( i=0 ; i<length ; i++) {
		if( array[i]>max ) {
			max = array[i];
		    max_ = i;
		}
		if( array[i]<min ) {
			min = array[i];
			min_ = i;
		}
	}
	if ( min_>max_ ) {
		printf("нч\n");
		return ;
	} else if ( min_!=0 && max_!=length-1 ) {
		for ( i=0 ; i<min_ ; i++ ){
			m[i] = 1;
		}
		for ( i=length-1 ; i>max_ ; i-- ){
	 	   m[i] = 1;
		}
	} else if ( min_!=0) {
		for ( i=length-1 ; i>max_ ; i-- ){
	 	   m[i] = 1;
		}
	} else if ( max_!=length-1 ) {
		for ( i=0 ; i<min_ ; i++ ){
			m[i] = 1;
		}
	}
	for ( i=min_ ; i<=max_ ; i++ ) {
		if ( !m[i] ) {
			int j;
			for( j=0 ; j<i ; j++ ) {
				if ( array[j]>array[i] ) {
					m[i] = 1;
					m[j] = 1;
				}
			}
			for ( j=length-1 ; j>i ; j--) {
				if( array[j]<array[i] ) {
					m[i] = 1;
					m[j] = 1;
				}
			}
		}
	}
	for ( i=min_ ; i<=max_ ; i++) {
		if ( !m[i] ) {
			printf("%d " ,array[i]);
		}
	}
	printf("\n");
}


int main(void)
{
	int n , *a;
	scanf("%d" , &n);
	a = (int*) malloc( n*(sizeof(int)) );
	int i;
	for ( i=0 ; i<n ; i++ )
		scanf("%d" , &a[i]);
	findPrincipalElement(a,n);
	free (a);
	return (0);
}

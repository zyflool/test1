#include <stdio.h>

void PrintSandglass (int n)
{
	int m = (n-1)/2 , i , sum = 0;
	for ( i=3 ; ; i+=2 ) {
		sum += i;
		if ( sum == m )
		    break;
	}
	int j = i;
	do {
		int k;
		for ( k=1 ; k<=(i-j)/2 ; k++ )
		    putchar(' ');
		for ( k=1 ; k<=j ; k++)
		    putchar('*');
		for ( k=1 ; k<=(i-j)/2 ; k++)
		    putchar(' ');
		putchar('\n');
		j -= 2;
	} while ( j>=1 );
	j = 3;
	while ( j<=i ) {
		int k;
		for ( k=1 ; k<=(i-j)/2 ; k++ )
		    putchar(' ');
		for ( k=1 ; k<=j ; k++)
		    putchar('*');
		for ( k=1 ; k<=(i-j)/2 ; k++)
		    putchar(' ');
		putchar('\n');
		j += 2;
	} 
}

int main (void)
{
	int n;
	scanf("%d" , &n);
	PrintSandglass (n);
	return (0);
}

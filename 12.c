#include <stdio.h>
 
void Get_binary (int n)
{
	int res[6] , i=0;
	while ( n ) {
		res[i] = n%2;
		i++;
		n = n/2;
	}
	for ( i=i-1 ; i>=0 ; i--)
	    printf("%d" , res[i]);
	putchar('\n');
}

int main (void)
{
	int n;
	scanf("%d" , &n);
	Get_binary(n);
	return (0);
}

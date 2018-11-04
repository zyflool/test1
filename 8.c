#include <stdio.h>

void printSquare (int a)
{
	if ( a==1 ) {
		printf("**\n**\n");
	} else {
		int i=1;
		while ( i<=a ) {
			if ( i==1 || i==a ) {
				int j;
				for ( j=1 ; j<=a ; j++ )
					putchar('*');
				putchar('\n');
			} else {
				putchar('*');
				int j;
				for ( j=1 ; j<=a-2 ; j++ )
					putchar(' ');
				putchar('*');
				putchar('\n');
			}
			i++;
		}
	}
}

int main (void)
{
	int n;
	scanf("%d" , &n);
	printSquare (n);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

int *n, count=1;

void getn (char a[])
{
	char tmp[10]={'\0'};
	int i=0 , j=0 , k=0;
	while ( (a[i] == ' ')|| (a[i]>='0'&&a[i]<='9') ) {
		if ( a[i] != ' ' ) {
			tmp[j] = a[i];
			j++;
			i++;
		} else {
			int time=1;
			n[k]=0;
			for ( j=j-1 ; j>=0 ; j-- ) {
				n[k] += (tmp[j]-'0')*time;
				time *= 10;
			}
			j=0;
			k++;
			i++;
		}
	}
	int time = 1;
	n[k] = 0;
	for ( j=j-1 ; j>=0 ; j-- ) {
		n[k] += (tmp[j]-'0')*time;
		time *= 10;
	}
}

void reverse (int a[])
{
	int x = 0 , y = count-1 ; 
	while ( !( (x==y) || (x+1==y) ) ) {
		a[x] = a[x] + a[y];
		a[y] = a[x] - a[y];
		a[x] = a[x] - a[y];
		x++ , y--;
	}
}

int main (void)
{
	char a[1001];
	printf("请输入第一个数组,以空格分开：\n");
	gets(a);
	int i = 0;
	while ( a[i] ) {
		if ( a[i] == ' ' )
			count++;
		i++;
	}
	n = ( int* ) malloc( count*( sizeof(int) ) );
	getn(a);
	reverse (n);
	printf("处理后的数组为：\n");
	for ( i=0 ;i<count ; i++)
		printf("%d " , n[i]);
	free(n);
	return (0); 
} 

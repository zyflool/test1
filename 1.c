#include <stdio.h>
#include<stdlib.h>
#include <memory.h>

int *n1, *n2 , *res , count=1;

void get_num (char a[] , short p)
{
	if (p==1) {
		char tmp[10]={'\0'};
		int i=0 , j=0 , k=0;
		while ( (a[i] == ' ')|| (a[i]>='0'&&a[i]<='9') ) {
			if ( a[i] != ' ' ) {
				tmp[j] = a[i];
				j++;
				i++;
			} else {
				int time=1;
				n1[k]=0;
				for ( j=j-1 ; j>=0 ; j-- ) {
					n1[k] += (tmp[j]-'0')*time;
					time *= 10;
				}
				j=0;
				k++;
				i++;
			}
		}
		int time = 1;
		n1[k] = 0;
		for ( j=j-1 ; j>=0 ; j-- ) {
			n1[k] += (tmp[j]-'0')*time;
			time *= 10;
		}
	} else {
		char tmp[10]={'\0'};
		int i=0 , j=0 , k=0;
		while ( (a[i] == ' ')|| (a[i]>='0'&&a[i]<='9') ) {
			if ( a[i] != ' ' ) {
				tmp[j] = a[i];
				j++;
				i++;
			} else {
				int time=1;
				n2[k]=0;
				for ( j=j-1 ; j>=0 ; j-- ) {
					n2[k] += (tmp[j]-'0')*time;
					time *= 10;
				}
				j=0;
				k++;
				i++;
			}
		}
		int time = 1;
		n2[k] = 0;
		for ( j=j-1 ; j>=0 ; j-- ) {
			n2[k] += (tmp[j]-'0')*time;
			time *= 10;
		}
	}
}

void process (int a[], int b[])
{
	int i=0;
	for(i=0; i<count; i++) {
		res[i] = a[i] - b[i];
	}
}

int main(void)
{
	char a[1001];
	printf("请输入第一个数组,以空格分开：\n");
	gets(a);
	int i=0 ;
	while ( a[i] ) {
		if ( a[i] == ' ' ){
			count++;
		}
		i++;
	}
    n1 = (int*)malloc(count*(sizeof(int)));
    n2 = (int*)malloc(count*(sizeof(int)));
    res = (int*)malloc(count*(sizeof(int)));
	get_num (a,1);
	printf("请输入第二个数组,以空格分开：\n");
	memset(a, '\0', 1001);
	gets(a);
	get_num (a,2);
	process (n1,n2);
	free(n1);
	free(n2);
	free(res);
	return (0);
}

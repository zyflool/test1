#include "stdio.h"
#include <math.h>

void sortA (int *a, int n)  //冒泡排序  递增 
{
	for (int i=0;i<n-1;i++){
	   	for (int j=0;j<n-i-1;j++){
    	    if (a[j]>a[j+1]) {
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
	    }
	}
}

int check (int a[],int n)  //对于给定的数组，判断数组相邻两个元素的差按从小到大排序后是否是以一为公差的等差数列。 
{
	int i;
	int b[n];
	if (n==1) {
		printf("yes\n");
    	return 0;
	} else {
    	for (i=0;i<n-1;i++)
    		b[i]=fabs(a[i]-a[i+1]); //	求a[i] 和 a[i+1] 差的绝对值 
    	sortA(b,n); //排序 
    	for (i=0;i<n-2;i++) {      //判断 b[n]数组是否按 1递增 
			if (b[i+1]-b[i]==1)
				continue;
			else break;
		}
		if (i==n-2)          
			printf("yes\n");
		else printf("no\n"); 
	}
	return 0;
}

int main()
{
	int array[]={4,8,10,7,6,11};
	check(array,6);
	return 0;
}
/*
运行结果：
yes
 
*/ 

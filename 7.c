#include "stdio.h"
#include <math.h>

void sortA (int *a, int n)  //ð������  ���� 
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

int check (int a[],int n)  //���ڸ��������飬�ж�������������Ԫ�صĲ��С����������Ƿ�����һΪ����ĵȲ����С� 
{
	int i;
	int b[n];
	if (n==1) {
		printf("yes\n");
    	return 0;
	} else {
    	for (i=0;i<n-1;i++)
    		b[i]=fabs(a[i]-a[i+1]); //	��a[i] �� a[i+1] ��ľ���ֵ 
    	sortA(b,n); //���� 
    	for (i=0;i<n-2;i++) {      //�ж� b[n]�����Ƿ� 1���� 
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
���н����
yes
 
*/ 

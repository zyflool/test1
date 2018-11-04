#include <stdio.h>

int sum ( int start,int end)
{
	if ( start%2==0 )
		start++;
	if( end%2==0 )
	    end--;
	return ( (start+end) * ((end-start)/2+1) / 2 );
}

int main (void) 
{
	int s , e ;
	printf("请输入开始数字：\n");
	scanf("%d" , &s);
	printf("请输入结束数字：\n");
	scanf("%d" , &e);
	printf("结果为： %d\n" , sum(s,e) );
	return (0);
}

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
	printf("�����뿪ʼ���֣�\n");
	scanf("%d" , &s);
	printf("������������֣�\n");
	scanf("%d" , &e);
	printf("���Ϊ�� %d\n" , sum(s,e) );
	return (0);
}

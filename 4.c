#include <stdio.h> 

int a,b;

void way_1 ( )
{
	a = a + b ;
	b = a - b ;
	a = a - b ;
}

void way_2 ( )
{
	a = a - b ;
	b = a + b ;
	a = b - a ;
}

void way_3 ( )
{
	a = b - a ;
	b = b - a ;
	a = a + b ;
}

void way_4 ( )
{
	a = a * b ;
	b = a / b ;
	a = a / b ;
}

int main (void)
{
	int n;
	printf("�������������֣�\n");
	scanf("%d%d" , &a , &b );
	printf("������ʹ�÷����ı�ţ�\n");
	scanf("%d" , &n);
	switch ( n ) {
	case 1: { way_1( ); break; }
	case 2: { way_2( ); break; }
	case 3: { way_3( ); break; }
	case 4: { way_4( ); break; }
	}
	printf("������Ľ��Ϊ��\n%d %d\n" , a , b );
	return (0);
}

 

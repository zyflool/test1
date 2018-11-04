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
	printf("请输入两个数字：\n");
	scanf("%d%d" , &a , &b );
	printf("请输入使用方法的编号：\n");
	scanf("%d" , &n);
	switch ( n ) {
	case 1: { way_1( ); break; }
	case 2: { way_2( ); break; }
	case 3: { way_3( ); break; }
	case 4: { way_4( ); break; }
	}
	printf("操作后的结果为：\n%d %d\n" , a , b );
	return (0);
}

 

/* ��������  ����ϴ� ����  */ 

#include <stdio.h>
#include <conio.h>

main()
{
	int dan, kuku;
	
	for( dan=1; dan<=361; dan++) 
	{
		for( kuku=1; kuku<=361; kuku++)
		{
			printf("%d * %d��%d�Դϴ�. \n", dan, kuku, dan*kuku); 
		}
	}
}

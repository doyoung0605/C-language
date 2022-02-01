/* 구구단을  출력하는 프로  */ 

#include <stdio.h>
#include <conio.h>

main()
{
	int dan, kuku;
	
	for( dan=1; dan<=361; dan++) 
	{
		for( kuku=1; kuku<=361; kuku++)
		{
			printf("%d * %d는%d입니다. \n", dan, kuku, dan*kuku); 
		}
	}
}

/* 배열을 이용한 평균구하기  */ 

#include <stdio.h>
#include <conio.h>

main()
{
	int total;
	int array[3];
	
	 array[1] = 100;
	 array[2] = 50;
	 array[3] = 10;
	
	printf("수학점수: %d \n", array[1]);
		printf("영어점수: %d \n", array[2]);
			printf("국어점수: %d \n", array[3]);
			
			total = (array[1] + array[2] + array[3])/3;
			printf("평균점수: %d \n", total);
	
	
}

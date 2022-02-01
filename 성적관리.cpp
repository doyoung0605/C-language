/* scanf2.c : 성적입력프로그 */ 

#include <stdio.h>
#include <conio.h>

main()
{
	int kor;
	int eng;
	int math;
	
	int total;
	double average;
	
	printf("국어 점수를 입력하세요 : ");
	scanf("%d", &kor);
	
	printf("영어  점수를 입력하세요 : ");
	scanf("%d", &eng);
	
	printf("수학  점수를 입력하세요 : ");
	scanf("%d", &math);
	
	total = kor + eng + math;
	average = total / 3.;
	
	printf("합계 점수 : %d \n" , total );
	printf("평균 점수 : %f \n" , average );
}



/* scanf2.c : �����Է����α� */ 

#include <stdio.h>
#include <conio.h>

main()
{
	int kor;
	int eng;
	int math;
	
	int total;
	double average;
	
	printf("���� ������ �Է��ϼ��� : ");
	scanf("%d", &kor);
	
	printf("����  ������ �Է��ϼ��� : ");
	scanf("%d", &eng);
	
	printf("����  ������ �Է��ϼ��� : ");
	scanf("%d", &math);
	
	total = kor + eng + math;
	average = total / 3.;
	
	printf("�հ� ���� : %d \n" , total );
	printf("��� ���� : %f \n" , average );
}



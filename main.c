#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	int grade[5];
	int average = 0; 
	
	for (i=0;i<5;i++)
	{
		printf("input value (%i) : ",i);
		scanf("%d",&grade[i]);
	}
	
	int ave = 0;
	for (i=0;i<5;i++)
	{
		printf("grade[%i] = %i\n", i, *(grade+i)); //grade[i]�� �迭�� ����, *(grade+1)�� ������ ���� 
		average += *(grade+i);
	}
	printf("average : %i", average/5);
	
	system("PAUSE");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
	int a, b, l;
	printf("write two numbers for cube:\n");
	printf("minimum:\n");
	scanf("%d", &a);
	printf("maximum:\n");
	scanf("%d", &b);
	srand(time(NULL));
	for (int i = 0; i < 15; i++) {
	//int i = 0;
	//while (i < 15) {
		l = rand() % (b - a + 1) + a;
		printf("%d\n", l);
		if (l == b)
		{ 
			printf("congratulations!\n");
		}
		else 
		{
			printf("try again\n");
		}
		//i++;
    }
	return 0;	
}
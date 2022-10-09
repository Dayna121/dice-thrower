#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) 
{
	int a, b, l;	
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	srand(time(NULL));
	for (int i = 0; i < 15; i++) {

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
		
    }
	return 0;	
}
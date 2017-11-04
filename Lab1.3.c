#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main (void)
{
	int a = rand() % 101;
	printf("%d\n",a);
	const float N = RAND_MAX;
	float b = rand()/N;
	printf("%.12f",b);
	return 0;
}


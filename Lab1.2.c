#include<stdio.h>
#define NMAX 100
int main (void)
{	
	long long int F[NMAX];
	F[0]=0;
	F[1]=1;
	int n;
	scanf("%d",&n);
	int i;
	for(i=2;i<=n;i++) F[i]=F[i-1]+F[i-2];	
	for(i=0;i<=n;i++) printf("%lld\n",F[i]);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int n = 0;
long long pr = 0;
printf("Kоличество элементов: ");
scanf("%d",&n);
unsigned int x[n];
for (int i=0;i<n;i++)
{
	x[i]=0+rand()%2147;
	printf("%d\n", x[i]);
}
pr=x[0];
for (int i=1;i<n;i++)
{
	pr=pr*x[i];
}
printf("Произведение последовательности: ");
printf("%lld",pr);
}

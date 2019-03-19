#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int n=0;
long double sum=0;
long double sr=0,o=0;
printf("Kоличество элементов: ");
scanf("%d",&n);
unsigned int x[n];
printf("Введите элементы:\n");
for (int i=0;i<n;i++)
{
	scanf("%d", &x[i]);
	sum=sum+x[i];
}
sr=sum/n;
printf("\nСреднее арифметическое:");
printf("%.5Lf",sr);
}

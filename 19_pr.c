#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int n = 0;
int pr = 1;
printf("Kоличество элементов:");
scanf("%d",&n);
int x=0;
printf("Введите элементы:\n");
for (int i=0;i<n;i++)
{
	scanf("%d", &x);
	pr=pr*x;
}
printf("Произведение последовательности: ");
printf("%d\n",pr);
}

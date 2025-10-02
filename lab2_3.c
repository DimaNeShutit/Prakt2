#include <stdio.h>
#include <locale.h>
int n, L;
L = 353;
n = 2;
void main()
{
setlocale(LC_CTYPE, "RUS");
printf("Дано:\v\t%3d\n       %d\n       _______\nОтвет:\n       %+08.4f", n, L, (double)n/L);
}
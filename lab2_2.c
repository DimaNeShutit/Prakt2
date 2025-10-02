#include <stdio.h>
#include <locale.h>
int N, K;
N = 22;
K = 22;
void main()
{
setlocale(LC_CTYPE, "RUS");
printf("Сейчас %d часов %d минут 00 секунд\n", N, K);
printf("Идёт %d минута суток\n", N*60+K);
printf("До полуночи осталось %d часов и %d минут\n", 23-N, 60-K);
printf("С 8.00 прошло %d секунд\n", (N*60*60+K*60)-8*60*60);
printf("Текущий час = %1.2f суток и текущая минута = %1.2f часа", (double)N/24, (double)K/60);
}
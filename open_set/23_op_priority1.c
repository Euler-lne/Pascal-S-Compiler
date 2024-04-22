#include <stdio.h>
#define bool int
#define true 1
#define false 0
int main_a;
int main_b;
int main_c;
int main_d;
int main()
{
main_a = 10;
main_b = 4;
main_c = 2;
main_d = 2;
printf("%d", main_c + main_a * main_b - main_d);
}

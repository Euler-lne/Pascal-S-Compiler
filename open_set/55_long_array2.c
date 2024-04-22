#include <stdio.h>
#define bool int
#define true 1
#define false 0
int arrays_a[4096];
int arrays_b[4][1024];
int arrays_c[1024][4];
int arrays_f1_()
{
arrays_a[5-(0)] = 4000;
arrays_a[4000-(0)] = 3;
arrays_a[4095-(0)] = 7;
arrays_c[0-(0)][arrays_a[4095-(0)]-(0)] = arrays_a[2216-(0)] + 9;
return arrays_a[arrays_a[5-(0)]-(0)];
}
int main()
{
arrays_b[1-(0)][0-(0)] = 1;
arrays_b[2-(0)][0-(0)] = 2;
arrays_b[2-(0)][1-(0)] = 3;
arrays_b[3-(0)][0-(0)] = 4;
arrays_b[3-(0)][1-(0)] = 5;
arrays_b[3-(0)][2-(0)] = 6;
arrays_c[0-(0)][0-(0)] = 1;
arrays_c[0-(0)][1-(0)] = 2;
arrays_c[1-(0)][0-(0)] = 3;
arrays_c[1-(0)][1-(0)] = 4;
printf("%d", arrays_f1_());
printf("%d", arrays_c[2-(0)][0-(0)]);
}

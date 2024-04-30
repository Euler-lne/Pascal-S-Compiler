#include <stdio.h>
#define bool int
#define true 1
#define false 0
const double main_pi = 3.14159265359;
const double main_twoApi = 6.28318530718;
const double main_epsilon = 0.000001;
int dimAx;
int dimAy;
int i;
int j;
double testAblock[8][8];
double testAdct[8][8];
double testAidct[8][8];
void main_dct_(int n, int m);
void main_idct_(int n, int m);
double main_myAcos_(double x);
double main_myAfabs_(double x);
double main_myAsinAimpl_(double x);
double main_myAsin_(double x);
double main_p_(double x);
void main_writeAmat2_(int n, int m);
void main_writeAmat_(int n, int m);
void main_dct_(int n, int m)
{
int i;
int j;
int u;
int v;
for(u = 0;
u <= n - 1;
u++)
{
{
for(v = 0;
v <= m - 1;
v++)
{
{
testAdct[u-(0)][v-(0)] = 0;
for(i = 0;
i <= n - 1;
i++)
{
{
for(j = 0;
j <= m - 1;
j++)
{
{
testAdct[u-(0)][v-(0)] = testAdct[u-(0)][v-(0)] + testAblock[i-(0)][j-(0)] * main_myAcos_(main_pi * 1.0 / n * (i + 1.0 * 1.0 / 2.0) * u) * main_myAcos_(main_pi * 1.0 / m * (j + 1.0 * 1.0 / 2.0) * v);
}
}
}
}
}
}
}
}
}
void main_idct_(int n, int m)
{
int i;
int j;
int u;
int v;
for(u = 0;
u <= n - 1;
u++)
{
{
for(v = 0;
v <= m - 1;
v++)
{
{
testAidct[u-(0)][v-(0)] = 1 * 1.0 / 4.0 * testAdct[0-(0)][0-(0)];
for(i = 1;
i <= n - 1;
i++)
{
testAidct[u-(0)][v-(0)] = testAidct[u-(0)][v-(0)] + 1 * 1.0 / 2.0 * testAdct[i-(0)][0-(0)];
}
for(j = 1;
j <= m - 1;
j++)
{
testAidct[u-(0)][v-(0)] = testAidct[u-(0)][v-(0)] + 1 * 1.0 / 2.0 * testAdct[0-(0)][j-(0)];
}
for(i = 1;
i <= n - 1;
i++)
{
for(j = 1;
j <= m - 1;
j++)
{
testAidct[u-(0)][v-(0)] = testAidct[u-(0)][v-(0)] + testAdct[i-(0)][j-(0)] * main_myAcos_(main_pi * 1.0 / n * (u + 1.0 * 1.0 / 2.0) * i) * main_myAcos_(main_pi * 1.0 / m * (v + 1.0 * 1.0 / 2.0) * j);
}
}
testAidct[u-(0)][v-(0)] = testAidct[u-(0)][v-(0)] * 2.0 * 1.0 / n * 2.0 * 1.0 / m;
}
}
}
}
}
double main_myAcos_(double x)
{
return main_myAsin_(x + main_pi * 1.0 / 2);
}
double main_myAfabs_(double x)
{
if (x > 0.0)
{
return x;
}
else
{
return  -x;
}
}
double main_myAsinAimpl_(double x)
{
if (main_myAfabs_(x) <= main_epsilon)
{
return x;
}
else
{
return main_p_(main_myAsinAimpl_(x * 1.0 / 3.0));
}
}
double main_myAsin_(double x)
{
int xx;
if ((x > main_twoApi) || (x <  -main_twoApi))
{
{
xx = 1;
x = x - 1.0;
}
}
if (x > main_pi)
{
x = x - main_twoApi;
}
if (x <  -main_pi)
{
x = x + main_twoApi;
}
return main_myAsinAimpl_(x);
}
double main_p_(double x)
{
return 3 * x - 4 * x * x * x;
}
void main_writeAmat2_(int n, int m)
{
int i;
int j;
for(i = 0;
i <= n - 1;
i++)
{
{
printf("%f", testAidct[i-(0)][0-(0)]);
for(j = 1;
j <= m - 1;
j++)
{
printf("%f", testAidct[i-(0)][j-(0)]);
}
}
}
}
void main_writeAmat_(int n, int m)
{
int i;
int j;
for(i = 0;
i <= n - 1;
i++)
{
{
printf("%f", testAdct[i-(0)][0-(0)]);
for(j = 1;
j <= m - 1;
j++)
{
printf("%f", testAdct[i-(0)][j-(0)]);
}
}
}
}
int main()
{
dimAx = 0;
dimAy = 0;
scanf("%d", &(dimAx));
scanf("%d", &(dimAy));
for(i = 0;
i <= dimAx - 1;
i++)
{
for(j = 0;
j <= dimAy - 1;
j++)
{
scanf("%f", &(testAblock[i-(0)][j-(0)]));
}
}
main_dct_(dimAx, dimAy);
main_writeAmat_(dimAx, dimAy);
main_idct_(dimAx, dimAy);
main_writeAmat2_(dimAx, dimAy);
}

#include <stdio.h>
#define bool int
#define true 1
#define false 0
int matrixmultiplication_a0[3];
int matrixmultiplication_a1[3];
int matrixmultiplication_a2[3];
int matrixmultiplication_b0[3];
int matrixmultiplication_b1[3];
int matrixmultiplication_b2[3];
int matrixmultiplication_c0[3];
int matrixmultiplication_c1[3];
int matrixmultiplication_c2[3];
int matrixmultiplication_i;
int matrixmultiplication_l;
int matrixmultiplication_m;
int matrixmultiplication_n;
int matrixmultiplication_x;
int matrixmultiplication_multiplymatrices_i;
int matrixmultiplication_multiplymatrices_()
{
for(matrixmultiplication_multiplymatrices_i = 0;
matrixmultiplication_multiplymatrices_i <= matrixmultiplication_m - 1;
matrixmultiplication_multiplymatrices_i++)
{
{
matrixmultiplication_c0[matrixmultiplication_multiplymatrices_i-(0)] = matrixmultiplication_a0[0-(0)] * matrixmultiplication_b0[matrixmultiplication_multiplymatrices_i-(0)] + matrixmultiplication_a0[1-(0)] * matrixmultiplication_b1[matrixmultiplication_multiplymatrices_i-(0)] + matrixmultiplication_a0[2-(0)] * matrixmultiplication_b2[matrixmultiplication_multiplymatrices_i-(0)];
matrixmultiplication_c1[matrixmultiplication_multiplymatrices_i-(0)] = matrixmultiplication_a1[0-(0)] * matrixmultiplication_b0[matrixmultiplication_multiplymatrices_i-(0)] + matrixmultiplication_a1[1-(0)] * matrixmultiplication_b1[matrixmultiplication_multiplymatrices_i-(0)] + matrixmultiplication_a1[2-(0)] * matrixmultiplication_b2[matrixmultiplication_multiplymatrices_i-(0)];
matrixmultiplication_c2[matrixmultiplication_multiplymatrices_i-(0)] = matrixmultiplication_a2[0-(0)] * matrixmultiplication_b0[matrixmultiplication_multiplymatrices_i-(0)] + matrixmultiplication_a2[1-(0)] * matrixmultiplication_b1[matrixmultiplication_multiplymatrices_i-(0)] + matrixmultiplication_a2[2-(0)] * matrixmultiplication_b2[matrixmultiplication_multiplymatrices_i-(0)];
}
}
return 0;
}
int main()
{
matrixmultiplication_n = 3;
matrixmultiplication_m = 3;
matrixmultiplication_l = 3;
for(matrixmultiplication_i = 0;
matrixmultiplication_i <= matrixmultiplication_m - 1;
matrixmultiplication_i++)
{
{
matrixmultiplication_a0[matrixmultiplication_i-(0)] = matrixmultiplication_i;
matrixmultiplication_a1[matrixmultiplication_i-(0)] = matrixmultiplication_i;
matrixmultiplication_a2[matrixmultiplication_i-(0)] = matrixmultiplication_i;
matrixmultiplication_b0[matrixmultiplication_i-(0)] = matrixmultiplication_i;
matrixmultiplication_b1[matrixmultiplication_i-(0)] = matrixmultiplication_i;
matrixmultiplication_b2[matrixmultiplication_i-(0)] = matrixmultiplication_i;
}
}
matrixmultiplication_multiplymatrices_();
for(matrixmultiplication_i = 0;
matrixmultiplication_i <= matrixmultiplication_n - 1;
matrixmultiplication_i++)
{
{
matrixmultiplication_x = matrixmultiplication_c0[matrixmultiplication_i-(0)];
printf("%d", matrixmultiplication_x);
}
}
for(matrixmultiplication_i = 0;
matrixmultiplication_i <= matrixmultiplication_n - 1;
matrixmultiplication_i++)
{
{
matrixmultiplication_x = matrixmultiplication_c1[matrixmultiplication_i-(0)];
printf("%d", matrixmultiplication_x);
}
}
for(matrixmultiplication_i = 0;
matrixmultiplication_i <= matrixmultiplication_n - 1;
matrixmultiplication_i++)
{
{
matrixmultiplication_x = matrixmultiplication_c2[matrixmultiplication_i-(0)];
printf("%d", matrixmultiplication_x);
}
}
}

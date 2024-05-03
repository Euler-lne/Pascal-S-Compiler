#include <stdio.h>
#define bool int
#define true 1
#define false 0
int arr[6];
int i;
int sum;
int main()
{
arr[0-(0)] = 1;
arr[1-(0)] = 2;
arr[2-(0)] = 33;
arr[3-(0)] = 4;
arr[4-(0)] = 5;
arr[5-(0)] = 6;
sum = 0;
for(i = 0;
i <= 5;
i++)
{
{
sum = sum + arr[i-(0)];
}
}
printf("%d", sum);
}

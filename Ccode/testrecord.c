#include <stdio.h>
#define bool int
#define true 1
#define false 0
struct testrecord_rec1
{
    int x;
    char y;
} testrecord_rec1;
struct testrecord_rec2
{
    int x;
    char y;
} testrecord_rec2;
struct testrecord_rec3
{
    struct x
    {
        int x1;
        double x2;
    } x;
    char y;
} testrecord_rec3;
int main()
{
    testrecord_rec1.x = 2023;
    testrecord_rec1.y = "t";
    testrecord_rec2.x = testrecord_rec1.x;
    testrecord_rec2.y = testrecord_rec1.y;
    printf("%d", testrecord_rec2.x);
    printf("%c", testrecord_rec2.y);
    testrecord_rec3.x.x1 = 2023;
    testrecord_rec3.x.x2 = 3.14;
    testrecord_rec3.y = "t";
    printf("%d", testrecord_rec3.x.x1);
    printf("%f", testrecord_rec3.x.x2);
    printf("%c", testrecord_rec3.y);
}

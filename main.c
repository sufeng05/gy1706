#include <stdio.h>

int max(int x, int y)
{
    return x > y? x : y;
}
int add(int x , int y)
{
    return x + y;
}
int main()
{
    int a = 2;
    int b = 3;
    int d = add(a,b);
    int m = max(a,b);
    printf("hello");
}

#include <stdio.h>
#include <iostream>
using namespace std;

void fun1(int n)
{
    if (n > 0)
    {
        printf(" %d", n);
        fun1(n - 1);
    }
}
void fun2(int n)
{
    if (n > 0)
    {
        fun2(n - 1);
        printf(" %d", n);
    }
}
int main()
{
    int x = 3;
    fun1(x);
    fun2(x);
}
#include <stdio.h>
typedef struct bs 
{
int a:8;
int b:2;
int c:6;
 
}data;
 
int d = 0xabcd;
void f1()
{
    data  *da = (data *)(&d);
 
    int i,j;
}
void f2()
{
    data da;
    da.a = d & 0xff;
    da.b = d >> 8 & 0x3;
    da.c = d >> (8+2) & 0x3f;

    
   int i,j;
}
int main()
{
    f1();
    f2();
    return 0;
}

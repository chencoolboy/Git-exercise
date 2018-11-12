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
   
}
void f2()
{
    data da;
    da.a = d & 0xff;
    da.b = d >> 8 & 0x3;
    da.c = d >> (8+2) & 0x3f;

    printf("%x %x %x \n",da->a & 0xff ,da->b & 0x3 ,da->c &0x3f);
    printf("%x %x %x \n",da->a & 0xff ,da->b & 0x3 ,da->c &0x3f);
}
int main()
{
    f1();
    f2();
    return 0;
}

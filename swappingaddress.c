// Swapping of Address
#include <stdio.h>
int main() {
    int a,b;
    int p1,p2,t;
    p1=&a;
    p2=&b;
    printf("\nBefore swapping of Address a is %d b is %d",p1,p2);
    t=p1;
    p1=p2;
    p2=t;
    printf("\nAfter Swapping a Address a is %d b is %d",p1,p2);
}
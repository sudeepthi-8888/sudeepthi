#include<stdio.h>
struct time
{
    unsigned int hours:5;
    unsigned int min:6;
    unsigned int sec:6;
};
int main()
{
    struct time t;
    t.hours=10;
    t.min=30;
    t.sec=31;
    printf("%dhh:%dmm:%dss",t.hours,t.min,t.sec);
    return 0;
}

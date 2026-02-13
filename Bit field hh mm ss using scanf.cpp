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
    int temp;
    printf("\nenter hours ");
    scanf("%d",&temp);
    t.hours=temp;
    printf("\nenter min ");
    scanf("%d",&temp);
    t.min=temp;
    printf("\nenter sec ");
    scanf("%d",&temp);
    t.sec=temp;
    printf("\n%dhh:%dmm:%dss",t.hours,t.min,t.sec);
    return 0;
}

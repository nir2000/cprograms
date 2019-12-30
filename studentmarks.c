#include<stdio.h>
int main()
{
    int sub1, sub2, sub3, sub4, sub5, aggregate;
    float percentage;

    printf("enter the mark of sub1\n");
    scanf("%d", &sub1);
    printf("enter the mark of sub2\n");
    scanf("%d", &sub2);
    printf("enter the mark of sub3\n");
    scanf("%d", &sub3);
    printf("enter the mark of sub4\n");
    scanf("%d", &sub4);
    printf("enter the mark of sub5\n");
    scanf("%d", &sub5);

    aggregate = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = aggregate / 5;

    printf("aggregate is %d\n", aggregate);
    printf("percentage is %f\n", percentage);
 
    return 0;

}




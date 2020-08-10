#include<stdio.h>
main()
{
    int num1,num2;
    printf("give two numbers for swapping:");
    scanf("%d%d",&num1,&num2);
    num1= num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("after swapping: num1=%d,            num2=%d",num1,num2); 
    return 0;
}
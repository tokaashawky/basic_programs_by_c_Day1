#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x,y;
    char ch;
    printf("Enter the two integer nums: ");
    scanf("%d %d",&x,&y);
    printf("enter type of operation (+,- * /):  ");
    scanf(" %c",&ch);
    switch(ch)
    {
        case '+' :
            printf("the sum of two nums: %d",x+y);
            break;
        case '-' :
            printf("the subtract of two nums: %d",x-y);
             break;
        case '*' :
            printf("the multiplication of two nums: %d",x*y);
             break;
        case '/' :
            printf("the division of two nums: %d",x/y);
             break;
        default:
            printf("try again there an error ^_^");
    }

        return 0;
}

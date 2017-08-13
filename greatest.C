#include <stdio.h>
 
void main()
{
    int n1, n2, n3;
 
    printf("Enter the values of number1, number2 and number3\n");
    scanf("%d %d %d", &n1, &n2, &n3);
    printf("number1 = %d\tnumber2 = %d\tnumber3 = %d\n", n1, n2, n3);
    if (n1 > n2)
    {
        if (n1 > n3)
        {
            printf("number1 is the greatest among three \n");
        }
        else
        {
            printf("number3 is the greatest among three \n");
        }
    }
    else if (n2 > n3)
        printf("number2 is the greatest among three \n");
    else
        printf("number3 is the greatest among three \n");
}

#include <stdio.h>
int main(){
    float n1, n2, n3, answer;
char operator;
    printf("enter the Two numbers to be computed\n");
    scanf("%f%f", &n1, &n2);
    L:
    printf("Enter the operation you want to carry out (+, -, *, /):");
    scanf("%c", &operator);
    switch (operator){
        case '+': answer= n1 + n2;
        printf("the sum is %f\n", answer);
    break;
        case '-': answer= n1 - n2;
        printf("the difference is %f\n", answer);
    break;
        case '*': answer= n1 * n2;
        printf("the product is %f\n", answer);
    break;
        case '/':
            if(n2==0)
            {
                printf("error cannot divide by 0\n");
                return(0);
            }
            else
            {
                 answer= n1 / n3;
        printf("the quotient is %f\n", answer);
            }
    break;
    default:
            printf("invalid operator.\n");
            goto L;
    }
    return 0;
}

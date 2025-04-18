#include <stdio.h>

int main() {
    int num1,num2,gcd,j,count=0;
    while (1) {
        if (count>0) {
            printf("\n");
        }
        printf("Enter your first number: ");
        scanf("%d",&num1);
        if (num1<0) {
            printf("Please enter a non-negative number");
            return 0;
        }
        printf("Enter your second number: ");
        scanf("%d",&num2);
        if (num2<0) {
             printf("Please enter a non-negative number");
                return 0;
        }
        else {
            if (num2>num1) {
                j = num2;
                num2 = num1;
                num1 = j;
            }
            for (int i=1;i<=num2;i++) {
                if (num1%i==0 && num2%i==0) {
                    gcd = i;
                }
            }
            printf("Greatest common divizor = %d",gcd);
            count++;
        }
    }
}
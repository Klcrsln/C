#include <stdio.h>

int main() {
    int n,i;
    printf("Please enter a number: ");
    scanf("%d",&n);
if (n<=1) {
    printf("Your number is not prime\n");
}
    else {
        for (i=2;i<n;i++) {
            if (n % i==0) {
                printf("Your number is not prime");
                return 0;
            }
        }
        printf("Your number is prime");
        return 0;
    }
}
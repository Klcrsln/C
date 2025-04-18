#include <stdio.h>
int main() {
    int i,j,n;

    for(i=15;i>=1;i--){
        for(j=1 ; j<=15-i;j++){
            printf("  ");
        }

        for(j=1;j<=i;j++){

            printf("15");
        }
        printf("\n");
    }

}
#include <stdio.h>
#include <limits.h>
int main()
{
    int num1,counter = 1,maxnum1 = INT_MIN,maxnum2 = INT_MIN,totalnumbers;
    printf("Please enter a how many number you will use: ");
    scanf("%d",&totalnumbers);

    if (totalnumbers <= 1) {
        printf("Please enter at least 2 number");
        return 0;
    }

    printf("\nPlease enter numbers:\n");

    while( counter <= totalnumbers){
        scanf("%d",&num1);

        if( num1 > maxnum2 ){

            maxnum2 = num1;

            if( num1> maxnum1){

                maxnum2 = maxnum1;
               maxnum1 = num1;
            }
        }
        counter++;
    }

    printf("\nFirst maximum number : %d\n",maxnum1);
    printf("\nSecond maximum number : %d\n",maxnum2);

    return 0;


}
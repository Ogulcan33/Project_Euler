/*

Question:Find the difference between the sum of the squares of the
first one hundred natural numbers and the square of the sum.


1)sumOfSquare = 0, squareOfSum = 0, diff
2)i = 1

3)if i <= 100, go to step 4, otherwise go to step 7
4)sumOfSquare += (i*i)
5)squareOfSum += i
6)i++, go to step 3

7)squareOfSum = squareOfSum * squareOfSum
8)diff = squareOfSum - sumOfSquare
9)print diff

*/


#include<stdio.h>

int main(){
    long int sumOfSquare = 0, squareOfSum = 0, diff;
    for(int i = 1; i<=100; i++){
        sumOfSquare += (i*i);
        squareOfSum += i;
    }
    squareOfSum = squareOfSum * squareOfSum;
    diff = squareOfSum - sumOfSquare;
    printf("difference: %ld", diff);
}

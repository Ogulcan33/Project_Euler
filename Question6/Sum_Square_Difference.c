/*

Tanım:İlk 100 doğal sayının (toplamların karesi - karelerin toplamı) bulunuz.


1)sumOfSquare = 0, squareOfSum = 0, diff
2)i = 1
3)sumOfSquare += (i*i)
4)squareOfSum += i
5)eğer i<= 100 ise 3. adıma git ve i++ yap
6)squareOfSum = squareOfSum * squareOfSum
7)diff = squareOfSum - sumOfSquare
8)diff yazdır

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
    printf("difference: %d", diff);
}
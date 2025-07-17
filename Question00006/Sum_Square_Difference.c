/*

Question:Find the difference between the sum of the squares of the
first one hundred natural numbers and the square of the sum.

---------------------------------------------
Pseudecode1(closer to flowchart)
1)sumOfSquare = 0, squareOfSum = 0, diff
2)i = 1
3)if i <= 100, go to step 4, otherwise go to step 7
4)	sumOfSquare += (i*i)
5)	squareOfSum += i
6)i++, go to step 3
7)squareOfSum = squareOfSum * squareOfSum
8)diff = squareOfSum - sumOfSquare
9)print diff
-------------------------------------------
Gaddis Pseudocode
Module main()
	Declare Integer sumOfSquare
	Declare Integer squareOfSum
	Declare Integer diff
	Set sumOfSquare = 0
	Set squareOfSum = 0
	Declare Integer i
	For i = 1 to 100
		Set sumOfSquare = sumOfSquare + (i * i)
		Set squareOfSum = squareOfSum + i
	End For
	Set squareOfSum = squareOfSum * squareOfSum
	Set diff = squareOfSum - sumOfSquare
	Display diff
End Module
------------------------------------------
Pseudecode2(very close to the natural language)
Declare Integer sumOfSquare
Declare Integer squareOfSum
Declare Integer diff
Set sumOfSquare = 0
Set squareOfSum = 0

1)iterate starting from i = 1 to 100
2)	add x to the power of 2 to the sumOfSquare
3)	add i to the squareOfSum
4)end iteration
5)add squareOfSum to the squareOfSum
6)subtract sumOfSquare from squareOfSum and assign the result to the diff
7)display diff
--------------------------------------------------
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

/*

Question:Find the difference between the sum of the squares of the
first one hundred natural numbers and the square of the sum.

---------------------------------------------
Summary of my solution:

Assign 1 to i.  
Start a loop from i to 100.  
Inside the loop, update sumOfSquare and squareOfSum using i.  
End the loop.  
Calculate the difference between squareOfSum and sumOfSquare.

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
assign 0 to sumOfSquare
assign 0 to squareOfSum

Declare Integer i
assign 1 to i
iterate from i to 100 with an increment 1
	add the square of i to sumOfSquare
	add i to squareOfSum
End iteration
assign squareOfSum to its square
Subtract sumOfSquare from squareOfSum and assign the result to diff
Display diff
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

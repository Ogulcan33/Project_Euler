/*
Question:By considering the terms in the Fibonacci sequence
whose values do not exceed four million,
find the sum of the even-valued terms.
---------------------------------
Summary of my solution:
Set sum to the summation of first and second.
Iterate from sum up to 4,000,000.
Inside the loop, check if sum is divisible by 2. If it is, add sum to generalSum.
Update first and second to the next Fibonacci numbers.
Recalculate sum.
End the loop.

---------------------------------
Pseudecode1(closer to flowchart)
1)first = 1 
2)second = 2
3)sum declared
4)generalSum = 2
5)print first and second
6)sum = first + second
7)if sum <= 4000000 go to step 8, otherwise go to step 14
8)	print sum
9)	if sum % 2 == 0 then go to step 10, otherwise go to step 11
10)		generalSum += sum
11)	first = second
12)	second = sum
13)	sum = first + second, go to step 7
14)print generalSum
---------------------------------
Gaddis Pseudocode
Module main()
	Declare Integer first
	Declare Integer second
	Declare Integer sum
	Declare Integer generalSum
	Set first = 1
	Set second = 2
	Set generalSum = 2
	
	Display first
	Display second
	
	Set sum = first + second
	While sum <= 4000000
		Display sum
		If sum Mod 2 = 0 Than
			Set generalSum = generalSum + sum
		End If
		Set first = second
		Set second = sum
		Set sum = first + second
	End While
	Display generalSum
End Module
----------------------------------
Pseudecode2(very close to the natural language)

Declare Integer first
Declare Integer second
Declare Integer sum
Declare Integer generalSum
assign 1 to first
assign 2 to second
assign 2 to generalSum
assign summation of first and second to sum 
iterate sum to 4000000
	If sum is divisible by 2, then add sum to the generalSum  
	assign second to the first  
	assign sum to the second  
	assign the summation of first and second to sum //increment
end iteration  
Display generalSum  
----------------------------------

*/
#include<stdio.h>

int main(){
	int first = 1, second = 2, sum;
    int generalSum = 2;
	
	printf("%d, %d", first, second);

    sum = first + second;
	while(sum <= 4000000){	
		printf(", %d", sum);
		if(sum % 2 == 0){
			generalSum += sum;
		}
		
		first = second;
		second = sum;
		sum = first + second;	
	}
    /*
	for(sum = first + second; sum<=4000000;sum = first + second){
		printf(", %d", sum);
		if(sum % 2 == 0){
			generalSum += sum;
		}
		
		first = second;
		second = sum;
		
	}
	*/
	printf("\n%d",generalSum);
}



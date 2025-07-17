/*
Question:By considering the terms in the Fibonacci sequence
whose values do not exceed four million,
find the sum of the even-valued terms.
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
		If sum Mod 2 = 0 Then
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
Set first = 1
Set second = 2
Set generalSum = 2
1) Add the first and second numbers to summation  
2) Iterate starting from the value of summation  
3) Iterate to 4000000  
4)     If summation is divisible by 2, then add summation to the general summation  
5)     Set first = second  
6)     Set second = sum  
7)     Set sum = first + second  
8) Exit iteration  
9) Display generalSum  
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



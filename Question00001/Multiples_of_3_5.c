/*

Question:Find the sum of all of the multiples of 3 or 5 below 1000.
------------------------------
Summary of my solution: 
Iterate i from 1 to 999 with an increment of 1.
Inside the loop, check if i is divisible by 3 or 5. If it is, add i to the sum.
End the loop.
------------------------------
Pseudecode1(closer to flowchart)
1)num declared
2)sum = 0
3)i = 1
4)if i < 1000, go to step 5,otherwise go to step 9
5)	num = i
6)	if (num % 3 == 0 || num % 5 == 0) then go to step 7, otherwise go to step 8
7)		sum += num
8)i++, go to step 4
9)print sum

-----------------------------
Gaddis Pseudocode
Module main()
	Declare Integer num
	Declare Integer sum
	Set sum = 0
	
	Declare Integer i
	For i = 1 To 999
		Set num = i
		If (num Mod 3 = 0 Or num Mod 5 = 0) Then
			Set sum = sum + num
		End If
	End For	
	Display sum
End Module

-----------------------------
Pseudecode2(very close to the natural language)

Declare Integer num
Declare Integer sum
assign 0 to sum
Declare Integer i
assign 1 to i
iterate i to 999 with an increment of 1
	Check if i is divisible by 3 or divisible by 5  
	If it is divisible, add this number to sum  
end iteration  
Display sum  

-----------------------------

*/



#include <stdio.h>

int main() {
    int num, sum = 0;


    for(int i = 1; i < 1000; i++){
        num = i;
        if(num % 3 == 0 || num % 5 == 0){
            sum += num;
        }

    }

    printf("sum = %d", sum);
    

}

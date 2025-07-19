/*
Question: What is the largest prime factor of the number 600851475143?
--------------------------------------------
Summary of my solution:

Assign the square root of the given number to i.  
Create a main loop from i down to 3.  
Assign the given number divided by i to secondMultiplier.  
If the given number is divisible by i, then create two inner loops.  
Inside these loops, check whether i and secondMultiplier are prime numbers, and if they are, activate the corresponding flags.  
If the flags are activated and the newly found prime factor is greater than the largest variable, update the largest variable.  
Reset the flags.  
End the loop

--------------------------------------------
Pseudecode1(closer to flowchart)
1)largest = 0, flag1 = 0, flag2 = 0
2)num = 600851475143
3)sqr = sqrt(num)
4)secondMultiplier declared
5)i = sqr
6)if i>2 then go to step 7, otherwise go to step 26
7)	secondMultiplier = num/i
8)	if num % i == 0 then go to step 9, otherwise go to step 25
9)		j = 2
10)		if j <= sqrt(i) then go to step 11, otherwise go to step 14
11)			if i % j == 0 then go to step 12, otherwise go to step 13
12)				flag1 = 1, go to step 14
13)		j++ then go to step 10
14)		k = 2
15)		if k <= sqrt(secondMultiplier) then go to step 16, otherwise go to step 19
16)			if secondMultiplier % k == 0 then go to step 17, otherwise go to step 18
17)				flag2 = 1, go to step 19
18)		k++ then go to step 15
19)		if flag1 == 0 && i > largest then go to step 20, otherwise go to step 21
20)			largest = i
21)		if flag2 == 0 && secondMultiplier > largest then go to step 22, otherwise go to step 23
22)			largest = secondMultiplier;
23)		flag1 = 0
24)		flag2 = 0
25)i-- then go to step 6
26)print largest
--------------------------------------
Gaddis Pseudocode
Module main()
	Declare Integer largest
	Declare Integer flag1
	Declare Integer flag2
	Declare Integer num
	Declare Integer sqr
	Declare Integer secondMultiplier
	
	Set largest = 0
	Set flag1 = 0
	Set flag2 = 0
	Set num = 600851475143
	//convert sqrt(num) to integer
	Set sqr = Call sqrt(num)
	
	Declare Integer i
	For i = sqr To 3 Step -1
		Set secondMultiplier = num/i
		If num Mod i = 0 Then
			Declare Integer j
			//convert sqrt(i) to integer
			For j = 2 To sqrt(i)
				If i Mod j = 0 Than
					Set flag1 = 1
					Exit For
				End If
			End For
			Declare Integer k
			//convert sqrt(secondMultiplier) to integer
			For k = 2 To sqrt(secondMultiplier)
				If secondMultiplier Mod k = 0 Then
					Set flag2 = 1
					Exit For
				End If
			End For
			If flag1 = 0 And i > largest Then
				Set largest = i
			End If
			If flag2 = 0 And secondMultiplier > largest Then
				Set largest = secondMultiplier
			End If
			Set flag1 = 0
			Set flag2 = 0
		End If
	End For
	Display largest
End Module

--------------------------------------
Pseudecode2(very close to the natural language)

Declare Integer largest
Declare Integer flag1
Declare Integer flag2
Declare Integer num
Declare Integer sqr
Declare Integer secondMultiplier

assign 0 to largest
assign 0 to flag1
assign 0 to flag2
assign 600851475143 to num
assign square root of num to sqr

Declare Integer i
assign sqr to i
iterate i to 3 with an decrement of -1
	assign num divided by i to the secondMultiplier
	if num modulus i is equal to 0 than
		Declare Integer j
		assign 2 to j
		iterate j to square root of i with an increment of 1
			if i modulus j is equal to 0 then
				assign 1 to flag1
				exit iteration
			end if
		end iteration
		Declare Integer k
		assign 2 to k
		iterate k to square root of secondMultiplier with an increment of 1
			If secondMultiplier modulus k is equal to 0 then
				assign 1 to flag2
				exit iteration
			end if
		end iteration
		If flag1 is equal to 0 And i is greater than largest Then
			assign i to largest
		end if
		If flag2 is equal to 0 And secondMultiplier is greater than largest Then
			assing secondMultiplier to largest
		end if
		assign 0 to flag1
		assign 0 to flag2
	end if
end iteration
Display largest


---------------------------------


*/
#include <stdio.h>
#include <math.h>

int main() {
    int largest = 0,flag1 = 0, flag2 = 0;
    long long int num = 600851475143;
    long int sqr = (int)sqrt(num), secondMultiplier;
    for(long long int i = sqr; i>2; i--){
		secondMultiplier = num/i;
		if(num % i == 0){
			for(long long int j = 2; j <= (int)sqrt(i); j++){
				if(i % j == 0){
					flag1 = 1;
					break;
					
				}
			}
			
			for(long long int k = 2; k <= (int)sqrt(secondMultiplier); k++){
				if(secondMultiplier % k == 0){
					flag2 = 1;
					break;
					
				}
			}

			if(flag1 == 0 && i > largest){
				largest = i;
			}
			if(flag2 == 0 && secondMultiplier > largest){
				largest = secondMultiplier;
			}
						
			flag1 = 0;
			flag2 = 0;
		}
	
    }

    
    printf("largest: %d", largest);
    
    

}



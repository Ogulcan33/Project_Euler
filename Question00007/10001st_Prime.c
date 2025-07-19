/*

Question: What is the 10001st prime number?

Tips:
-------------------------
Modular Patterns
Prime numbers greater than 2 can be written in the form of 6k ± 1.
This is because prime numbers greater than 2 and 3 cannot be multiples of 6, and they take the form 6k ± 1.

For example:

5 = 6×1 − 1

7 = 6×1 + 1

11 = 6×2 − 1

13 = 6×2 + 1

17 = 6×3 − 1

19 = 6×3 + 1

23 = 6×4 − 1

29 = 6×5 − 1

This is not an absolute pattern, but it is used when scanning for prime candidates.
----------------------------
Summary of my solution:

Assign 4 to i 
Assign 3 to counter
Start a loop that runs until counter equals 10001  
Check if i is in the form of 6k ± 1 
If so, check if i is a prime number
If it is prime, increment counter by 1 
After the checks, increment i by 1  
End the loop
Display i

----------------------------
Pseudecode1(closer to flowchart)

1)flag = 0, largest
2)i = 4
3)counter = 3
4)if counter <= 10001, go to step 5, otherwise go to step 16
5)	if (i%6 == 1 || i%6== 5), go to step 6, otherwise go to step 15
6)		j = 2
7)		if j < (i-1), go to step 8, otherwise go to step 11
8)			if i % j == 0, go to step 9, otherwise go to step 10
9)				flag = 1
10)		j++, go to step 7
11)		if flag == 0, go to step 12, otherwise go to step 14
12)			largest = i
13)			counter++
14)		flag = 0
15)i++, go to step 4
16)print largest
----------------------------------
Gaddis Pseudocode
Module main()
	Declare Integer flag
	Declare Integer largest
	Declare Integer i
	Declare Integer counter
	Set flag = 0
	Set i = 4
	Set counter = 3
	While counter <= 10001
		If (i Mod 6 = 1 Or i Mod 6 = 5) Then
			Declare Integer j
			For j = 2 To i-2
				If i Mod j = 0 Then
					Set flag = 1
				End If
			End For
			If flag = 0 Then
				Set largest = i
				Set counter = counter + 1
			End If
			Set flag = 0
		End If
		Set i = i + 1		
	End While
	Display largest
End Module
----------------------------------------
Pseudecode2(very close to the natural language)
Declare Integer flag
Declare Integer largest
Declare Integer i
Declare Integer counter
assign 0 to flag
assign 4 to i
assign 3 to counter

iterate when counter is less than or equal to 10001
	if when i is divided by 6 the remainder is 1 or 5 then
		Declare Integer j
		assign 2 to j
		iterate from j to i - 2 with an increment 1
			if i is divisible by j then
				assign 1 to flag
			end if
		end iteration
		if flag is equal to 0 then
			assign i to largest
			add 1 to the counter
		end if
		assign 0 to flag
	end if
	add 1 to the i
end iteration
Display largest




----------------------------------------

*/

#include<stdio.h>
int main(){
    int flag = 0, largest;
    int i = 4;
    int counter = 3;
    while(counter <= 10001){
        if((i%6 == 1 || i%6== 5)){
            for(int j = 2; j < (i-1); j++){
                if(i%j == 0){
                    flag = 1;
                }
            }
            if(flag == 0){
                largest = i;
                counter++;
            }
            flag = 0;
        }
        i++;
    }
    printf("largest: %d", largest);
}

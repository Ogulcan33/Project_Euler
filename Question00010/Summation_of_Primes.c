/*
Question: Find the sum of all the primes below two million.
--------------------------------------
Summary of my solution:

Start a loop from 3 up to two million 
Check if the current number is prime
If it is, add it to the variable sum
End the loop  
Display the value of sum

--------------------------------------
Pseudecode1(closer to flowchart)
1)sum = 2, long long int flag
2)i = 3
3)if i < 2000000, go to step 4, otherwise go to step 13
4)	flag = 0
5)	j = 2
6)	if j <= sqrt(i), go to step 7, otherwise go to step 10
7)		if i % j == 0, then go to step 8, otherwise go to step 9
8)			flag = 1, go to step 10
9)	j++, go to step 6
10)	if flag == 0, go to step 11, otherwise go to step 12
11)		sum += i
12)i++, go to step 3
13)print sum
--------------------------------------
Gaddis Pseudocode
Module main()
	Declare Integer sum
	Declare Integer flag
	Set sum = 2
	Declare Integer i
	For i = 3 To 1999999
		Set flag = 0
		Declare Integer j
		For j = 2 To sqrt(i)
			If i Mod j = 0 Then
				Set flag = 1
				Exit For
			End If
		End For
		If flag = 0 Then
			Set sum = sum + i
		End If
	End For
	Display sum
End Module
--------------------------------------
Pseudecode2(very close to the natural language)
Declare Integer sum
Declare Integer flag
assign 2 to the sum
Declare Integer i
Assign 3 to i
iterate starting from i to 1999999 with an increment 1
	assign 0 to the flag
	Declare Integer j
	assign 2 to j
	iterate starting from j to sqrt(i) with an increment 1
		If i Modulus j is equal to 0 Then
			assign 1 to flag
			Exit For
		end if
	end iteration
	If flag is equal to 0 Then
		add sum and i then assign it to sum
	end if
end iteration
Display sum


--------------------------------------
*/

#include<stdio.h>
#include<math.h>

int main(){
    long long int sum = 2;
    int flag;
    for(int i = 3; i< 2000000; i++){
		flag = 0;
        for(int j = 2; j <= sqrt(i); j++){
            if(i % j == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            sum += i;
        }
    }
    printf("%lld", sum);
}

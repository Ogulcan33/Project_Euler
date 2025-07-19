/*
Question: Find the largest palindrome made from the product of two 3-digit numbers.
---------------------------------------------
Summary of my solution:

Set j and k to 100.  
Start a loop from j to 998.  
Inside this loop, start another loop from k = 100 to 998.  
Inside the nested loop, assign j multiplied by k to productNum.  
Extract the digits of productNum.  
Then, if it’s a palindrome and greater than largest, assign productNum to largest.  
End both loops.


---------------------------------------------
Pseudecode1(closer to flowchart)
1)largest=0, firstDig, secondDig, thirdDig, fourthDig, fifthDig, sixthDig, productNum
2)j = 100
3)if j<999, go to step 4, otherwise go to step 16
4)	k = 100
5)	if k<999, go to step 6, otherwise go to step 15
6)		productNum = j*k
7)		if productNum > 99999, go to step 8, otherwise go to step 11
8)			sixthDig = productNum%10
			fifthDig = (productNum/10)%10
			fourthDig = (productNum/100)%10
			thirdDig = (productNum/1000)%10
			secondDig = (productNum/10000)%10
			firstDig = (productNum/100000)%10
9)			if sixthDig == firstDig && fifthDig == secondDig && fourthDig == thirdDig && productNum > largest, go to step 10, otherwise go to step 11
10)				largest = productNum
11)		fifthDig = productNum%10
		fourthDig = (productNum/10)%10
		thirdDig = (productNum/100)%10
		secondDig = (productNum/1000)%10
		firstDig = (productNum/10000)%10
12)		if fifthDig == firstDig && fourthDig == secondDig && productNum > largest, go to step 13, otherwise go to step 14
13)			largest = productNum
14)	k++, go to step 5
15)j++, go to step 3
16)print largest
-----------------------------------------------
Gaddis Pseudocode
Module main()
	Declare Integer largest
	Set largest = 0
	Declare Integer firstDig
	Declare Integer secondDig
	Declare Integer thirdDig
	Declare Integer fourthDig
	Declare Integer fifthDig
	Declare Integer sixthDig
	Declare Integer productNum
	Declare Integer j
	For j = 100 To 998
		Declare Integer k
		For k = 100 To 998
			Set productNum = j * k
			If productNum > 99999 Then
				Set sixthDig = productNum Mod 10
				Set fifthDig = (productNum/10) Mod 10
				Set fourthDig = (productNum/100) Mod 10
				Set thirdDig = (productNum/1000) Mod 10
				Set secondDig = (productNum/10000) Mod 10
				Set firstDig = (productNum/100000) Mod 10
				If sixthDig = firstDig And fifthDig = secondDig And fourthDig = thirdDig And productNum > largest Than
					Set largest = productNum
				End If
			Else
				Set fifthDig = productNum Mod 10
				Set fourthDig = (productNum/10) Mod 10
				Set thirdDig = (productNum/100) Mod 10
				Set secondDig = (productNum/1000) Mod 10
				Set firstDig = (productNum/10000) Mod 10
				If fifthDig = firstDig And fourthDig = secondDig And productNum > largest Than
					Set largest = productNum
				End If
			End If
		End For
	End For
	Display largest
End Module
--------------------------------------
Pseudecode2(very close to the natural language)
Declare Integer largest
assign 0 to largest
Declare Integer firstDig
Declare Integer secondDig
Declare Integer thirdDig
Declare Integer fourthDig
Declare Integer fifthDig
Declare Integer sixthDig
Declare Integer porductNum
Declare Integer j
assign 100 to j
iterate j to 998 with an increment 1
	Declare Integer k
	assign 100 to k
	iterate k to 998 with an increment 1
		assign j multiplied by k to productNum
		If productNum greater than 99999 Then
			assign productNum modulus 10 to sixthDig
			assign (productNum divided by 10) modulo 10 to fifthDig
			assign (productNum divided by 100) modulo 10 to fourthDig
			assign (productNum divided by 1000) modulo 10 to thirdDig
			assign (productNum divided by 10000) modulo 10 to secondDig
			assign (productNum divided by 100000) modulo 10 to firstDig
			If (sixthDig is equal to firstDig) And (fifthDig is equal to secondDig) And (fourthDig is equal to thirdDig) And (productNum greater than largest) Then
				assign productNum to largest
			End If
		Else
			assign productNum modulus 10 to fifthDig
			assign (productNum divided by 10) modulus 10 to fourthDig
			assign (productNum divided by 100) modulus 10 to thirdDig
			assign (productNum divided by 1000) modulus 10 to secondDig
			assign (productNum divided by 10000) modulus 10 to firstDig
			If (fifthDig is equal to firstDig) And (fourthDig is equal to secondDig) And (productNum greater than largest) Then
				assign productNum to largest
			End If
		End If
	End iteration
End iteration
Display largest


----------------------------------------


*/


#include<stdio.h>

int main(){
	
	int largest = 0, firstDig, secondDig, thirdDig, fourthDig, fifthDig, sixthDig, productNum;


	for(int j = 100; j<999 ;j++){
		for(int k = 100; k<999 ;k++){
			productNum = j * k;
			if(productNum > 99999){
				sixthDig = productNum%10;
				fifthDig = (productNum/10)%10;
				fourthDig = (productNum/100)%10;
				thirdDig = (productNum/1000)%10;
				secondDig = (productNum/10000)%10;
				firstDig = (productNum/100000)%10;
				if(sixthDig == firstDig && fifthDig == secondDig && fourthDig == thirdDig && productNum > largest){
					largest = productNum;
				}
			}else{
				fifthDig = productNum%10;
				fourthDig = (productNum/10)%10;
				thirdDig = (productNum/100)%10;
				secondDig = (productNum/1000)%10;
				firstDig = (productNum/10000)%10;
				if(fifthDig == firstDig && fourthDig == secondDig && productNum > largest){
					largest = productNum;
				}
				
			}
			
		}
	}

	printf("largest: %d", largest);
}

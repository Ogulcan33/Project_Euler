/*
Question: Find the largest palindrome made from the product of two 3-digit numbers.
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
				If sixthDig = firstDig And fifthDig = secondDig And fourthDig = thirdDig And productNum > largest Then
					Set largest = productNum
				End If
			Else
				Set fifthDig = productNum Mod 10
				Set fourthDig = (productNum/10) Mod 10
				Set thirdDig = (productNum/100) Mod 10
				Set secondDig = (productNum/1000) Mod 10
				Set firstDig = (productNum/10000) Mod 10
				If fifthDig = firstDig And fourthDig = secondDig And productNum > largest Then
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
Set largest = 0
Declare Integer firstDig
Declare Integer secondDig
Declare Integer thirdDig
Declare Integer fourthDig
Declare Integer fifthDig
Declare Integer sixthDig
Declare Integer porductNum
Declare Integer j

1) Iterate starting from j = 100 to 998  
2) Iterate starting from k = 100 to 998  
3)	   Set productNum = j * k
4)     If productNum is greater than 99999 then  
5)         Set sixthDig = productNum modulus 10  
           Set fifthDig = (productNum divided by 10) modulus 10  
           Set fourthDig = (productNum divided by 100) modulus 10  
           Set thirdDig = (productNum divided by 1000) modulus 10  
           Set secondDig = (productNum divided by 10000) modulus 10  
           Set firstDig = (productNum divided by 100000) modulus 10  
6)         If corresponding digits are equal and productNum is greater than largest then  
7)             Set largest = productNum  
8)     Else  
9)         Set fifthDig = productNum modulus 10  
           Set fourthDig = (productNum divided by 10) modulus 10  
           Set thirdDig = (productNum divided by 100) modulus 10  
           Set secondDig = (productNum divided by 1000) modulus 10  
           Set firstDig = (productNum divided by 10000) modulus 10  
10)         If corresponding digits are equal and productNum is greater than largest then  
11)            Set largest = productNum  
12) Display largest  
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

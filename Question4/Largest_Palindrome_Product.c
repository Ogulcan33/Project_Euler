/*
Question: Find the largest palindrome made from the product of two 3-digit numbers.

1)largest=0, firstDig, secondDig, thirdDig, fourthDig, fifthDig, sixthDig, productNum
2)j = 100
3)if j<999, go to step 4, otherwise go to step 16

4)k = 100
5)if k<999, go to step 6, otherwise go to step 15

6)productNum = j*k
7)if productNum > 99999, go to step 8, otherwise go to step 11
8)  sixthDig = productNum%10
	fifthDig = (productNum/10)%10
	fourthDig = (productNum/100)%10
	thirdDig = (productNum/1000)%10
	secondDig = (productNum/10000)%10
	firstDig = (productNum/100000)%10
9)if sixthDig == firstDig && fifthDig == secondDig && fourthDig == thirdDig && productNum > largest, go to step 10, otherwise go to step 11
10)largest = productNum
11)	fifthDig = productNum%10
	fourthDig = (productNum/10)%10
	thirdDig = (productNum/100)%10
	secondDig = (productNum/1000)%10
	firstDig = (productNum/10000)%10
12)if fifthDig == firstDig && fourthDig == secondDig && productNum > largest, go to step 13, otherwise go to step 14
13)largest = productNum

14)k++, go to step 5

15)j++, go to step 3
16)print largest


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

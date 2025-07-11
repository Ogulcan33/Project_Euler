/*
tanım: En büyük üç haneli sayıların çarpımından oluşan en büyük palindrom

1)Değişkenler: largest=0, firstDig, secondDig, thirdDig, fourthDig, fifthDig, sixthDig, productNum
2)j = 100
3)k = 100
4)productNum = j*k
5)eğer productNum > 99999 ise 6. adım, değilse 9 adıma git
6)sixthDig = productNum%10
 fifthDig = (productNum/10)%10
 fourthDig = (productNum/100)%10
 thirdDig = (productNum/1000)%10
 secondDig = (productNum/10000)%10
 firstDig = (productNum/100000)%10
7)eğer sixthDig == firstDig && fifthDig == secondDig && fourthDig == thirdDig && productNum > largest ise 8. adıma git değilse 12. adıma git
8)largest = productNum ardından 12. adıma git
9)fifthDig = productNum%10
  fourthDig = (productNum/10)%10
  thirdDig = (productNum/100)%10
  secondDig = (productNum/1000)%10
  firstDig = (productNum/10000)%10
10)eğer fifthDig == firstDig && fourthDig == secondDig && productNum > largest ise 11.adıma git değilse 12. adıma git
11)largest = productNum
12)k<999 ise 4. adıma git ve k++ yap
13)j<999 ise 3. adıma git ve j++ yap
14)largest yazdır

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
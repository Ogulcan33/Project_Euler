/*
Question:By considering the terms in the Fibonacci sequence
whose values do not exceed four million,
find the sum of the even-valued terms.

1)first = 1 
2)second = 2
3)sum declared
4)generalSum = 2
5)print first and second
6)sum = first + second
7)if sum <= 4000000 go to step 8, otherwise go to step 14
8)print sum
9)if sum % 2 == 0 then go to step 10, otherwise go to step 11
10)generalSum += sum
11)first = second
12)second = sum
13)sum = first + second, go to step 7
14)print generalSum



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



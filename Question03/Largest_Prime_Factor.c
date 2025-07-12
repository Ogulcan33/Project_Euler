/*
Question: What is the largest prime factor of the number 600851475143?

1)largest = 0, flag1 = 0, flag2 = 0
2)num = 600851475143
3)sqr = sqrt(num)
4)secondMultiplier declared
5)i = sqr
6)if i>2 then go to step 7, otherwise go to step 26
7)secondMultiplier = num/i
8)if num % i == 0 then go to step 9, otherwise go to step 25
9)j = 2
10)if j <= sqrt(i) then go to step 11, otherwise go to step 14
11)if i % j == 0 then go to step 12, otherwise go to step 13
12)flag1 = 1, go to step 14
13)j++ then go to step 10
14)k = 2
15)if k <= sqrt(secondMultiplier) then go to step 16, otherwise go to step 19
16)if secondMultiplier % k == 0 then go to step 17, otherwise go to step 18
17)flag2 = 1, go to step 19
18)k++ then go to step 15
19)if flag1 == 0 && i > largest then go to step 20, otherwise go to step 21
20)largest = i
21)if flag2 == 0 && secondMultiplier > largest then go to step 22, otherwise go to step 23
22)largest = secondMultiplier;
23)flag1 = 0
24)flag2 = 0
25)i-- then go to step 6
26)print largest






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



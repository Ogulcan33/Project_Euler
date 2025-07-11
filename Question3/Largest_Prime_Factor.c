/*
Tanım:600851475143 sayısının en büyük asal çarpanı nedir?

1)largest = 0
2)flag1 = 0, flag2 = 0
3)num = 600851475143
4)sqr = sqrt(num)
5)i = sqr
6)secondMultiplier = num/i
7)eğer num % i == 0 ise 8. adıma git, değilse 24 adıma git
8)j = 2
9)eğer i % j == 0 ise 10. adıma git, değilse 12 adıma git
10)flag1 = 1
11)13.adıma git
12)j <= sqrt(i) ise 9. adıma git ve j++ yap
13)k = 2
14)eğer secondMultiplier % k == 0 ise 15. adıma git, değilse 18. adıma git
15)flag2 = 1
16)18. adıma git
17)k <= sqrt(secondMultiplier) ise 14. adıma git ve k++ yap
18)eğer flag1 == 0 && i > largest ise 19. adıma git, değilse 20. adıma git
19)largest = i
20)eğer flag2 == 0 && secondMultiplier > largest ise 21. adıma git, değilse 22. adıma git
21)largest = secondMultiplier;
22)flag1 = 0
23)flag2 = 0
24)i > 2 ise 6. adıma git ve i-- yap
25)largest yazdır





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



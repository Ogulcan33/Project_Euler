/*
Question:What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

Tips: 
---------------------------
This is the smallest positive number that is evenly divisible by all the numbers from 1 to 20,
in other words, it means finding the Least Common Multiple (LCM) of the numbers from 1 to 20.

Step-by-step logic:

Let's identify the prime factors between 1 and 20:

2, 3, 5, 7, 11, 13, 17, 19

We will take the highest power of each prime that does not exceed 20:

2⁴ = 16 (because 2⁵ = 32 > 20)
3² = 9 (because 3³ = 27 > 20)
5¹ = 5
7¹ = 7
11¹ = 11
13¹ = 13
17¹ = 17
19¹ = 19

We will multiply these together to calculate the LCM.
--------------------------------

1)small = 16, flag = 0, num = 0
2)i = 3

3)if i <= 20, go to step 4, otherwise go to step 18
4)j = 2

5)if j < i, go to step 6, otherwise go to step 9
6)if i % j == 0, go to step 7, otherwise go to step 8
7)flag = 1
8)j++, then go to step 5

9)if flag == 0, go to step 10, otherwise go to step 16
10)k = 1

11)if k <= 4, go to step 12, otherwise go to step 15
12)if pow(i, k) <= 20, go to step 13, otherwise go to step 14
13)num = pow(i,k)
14)k++, go to step 11

15)small *= num
16)flag = 0
17)i++, then go to step 3

18)print small







*/

#include<stdio.h>
#include <math.h>
int main(){
	int small = 16, flag = 0, num = 0;
	for(int i = 3; i<= 20; i++){
		for(int j = 2; j<i;j++){
			if(i % j == 0){
				flag = 1;
			}
		}
		if(flag == 0){
			for(int k = 1; k <= 4; k++){
				if(pow(i, k) <= 20){
					num = pow(i, k);
				}
			}
			small *= num;
		}
		flag = 0;
	}
	printf("%d", small);

}

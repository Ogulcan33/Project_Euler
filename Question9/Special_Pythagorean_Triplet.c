/*

Question: There exists exactly one Pythagorean triplet for which
a + b + c = 1000. Find the product abc.

Tips:
A Pythagorean triplet is a set of three 
natural numbers, a<b<c, for which,a² + b² = c².

For example, 3² + 4² = 9 + 16 = 25 = 5².
----------------------------------------

1)a, b, c, prod
2)i = 0
==
3)if i <= 1000, go to step 4, otherwise go to step 16
4)a = i
5)j = 0
--
6)if j <= 1000, go to step 7, otherwise go to step 15
7)b = j
8)k = 0
-
9)if k <= 1000, go to step 10, otherwise go to step 14
10)c = k
11)if (a<b && c>b && c>a && (a+b+c == 1000) && (a*a + b*b == c*c)), go to step 12, otherwise go to step 13
12)prod = a * b * c
13)k++, go to step 9
-
14)j++, go to step 6
--
15)i++, go to step 3
==
16)print prod
*/ 

#include<stdio.h>

int main(){
	
	int a, b, c, prod;
	for(int i = 0; i <= 1000; i++){
		a = i;
		for(int j = 0; j <= 1000; j++){
			b = j;
			for(int k = 0; k <= 1000; k++){
				c = k;
				if(a<b && c>b && c>a && (a+b+c == 1000) && (a*a + b*b == c*c)){
					prod = a * b * c;
				}
			}
		}
	}
	printf("%d", prod);
	
	
	
}







/*

Question: There exists exactly one Pythagorean triplet for which
a + b + c = 1000. Find the product abc.

Tips:
A Pythagorean triplet is a set of three 
natural numbers, a<b<c, for which,a² + b² = c².

For example, 3² + 4² = 9 + 16 = 25 = 5².
----------------------------------------
Pseudecode1(closer to flowchart)
1)a, b, c, prod
2)i = 0
3)if i <= 1000, go to step 4, otherwise go to step 16
4)	a = i
5)	j = 0
6)	if j <= 1000, go to step 7, otherwise go to step 15
7)		b = j
8)		k = 0
9)		if k <= 1000, go to step 10, otherwise go to step 14
10)			c = k
11)			if (a<b && c>b && c>a && (a+b+c == 1000) && (a*a + b*b == c*c)), go to step 12, otherwise go to step 13
12)				prod = a * b * c
13)		k++, go to step 9
14)	j++, go to step 6
15)i++, go to step 3
16)print prod
-----------------------------------------
Gaddis Pseudocode
Module main()
	Declare Integer a
	Declare Integer b
	Declare Integer c
	Declare Integer prod
	Declare Integer i
	For i = 0 To 1000
		Set a = i
		Declare Integer j
		For j = 0 To 1000
			Set b = j
			Declare Integer k
			For k = 0 To 1000
				Set c = k
				If a<b And c>b And c>a And (a+b+c = 1000) And (a*a + b*b = c*c) Then
					Set prod = a * b * c
				End If
			End For
		End For
	End For
	Display prod
End Module
------------------------------------------
Pseudecode2(very close to the natural language)
Declare Integer a
Declare Integer b
Declare Integer c
Declare Integer prod
iterate starting from i = 0 to 1000
	assign i to the a
	iterate starting from j = 0 to 1000
		assign j to the b
		iterate starting from k = 0 to 1000
			assign k to the c
			If (a less than b) And(c greater than) And (c greater than a) And (sum of abc is equal to 1000) And (a to the power of 2 plus b to the power of 2 equals c to the power of 2) Then
				assign a multiplied by b multiplied by c to the prod
			end If
		end iteration
	end iteration
end iteration
Display prod
-------------------------------------------
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







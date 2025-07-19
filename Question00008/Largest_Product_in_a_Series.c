/*

Question: Find the thirteen adjacent digits in the 1000-digit number 
that have the greatest product. What is the value of this product?

Number:
----------------------------------------------------
73167176531330624919225119674426574742355349194934
96983520312774506326239578318016984801869478851843
85861560789112949495459501737958331952853208805511
12540698747158523863050715693290963295227443043557
66896648950445244523161731856403098711121722383113
62229893423380308135336276614282806444486645238749
30358907296290491560440772390713810515859307960866
70172427121883998797908792274921901699720888093776
65727333001053367881220235421809751254540594752243
52584907711670556013604839586446706324415722155397
53697817977846174064955149290862569321978468622482
83972241375657056057490261407972968652414535100474
82166370484403199890008895243450658541227588666881
16427171479924442928230863465674813919123162824586
17866458359124566529476545682848912883142607690042
24219022671055626321111109370544217506941658960408
07198403850962455444362981230987879927244284909188
84580156166097919133875499200524063689912560717606
05886116467109405077541002256983155200055935729725
71636269561882670428252483600823257530420752963450
-----------------------------------------------------
Summary of my solution:


Store the number as a string in a variable named num  
Assign 0 to i 
Start a loop from i to 987 
In each iteration, multiply thirteen adjacent digits starting at index i  
If the result is greater than the current value of largest, update largest  
End the loop
Display largest

-----------------------------------------------------

Pseudecode1(closer to flowchart)
1)char num[] = "..."
2)long long int mul = 1, largest = 0
3)i = 0
4)if i <= 987, go to step 5, otherwise go to step 13
5)	j = 0
6)	if j < 13, go to step 7, otherwise go to step 9
7)		mul *= (num[i+j] - '0')
8)	j++, go to step 6
9)	if mul > largest, go to step 10, otherwise go to step 11
10)		largest = mul
11)	mul = 1
12)i++, go to step 4
13)print largest

----------------------------
Gaddis Pseudocode
Module main()
	Declare String num
	Declare Integer mul
	Declare Integer largest
	Set num = "..."
	Set mul = 1
	Set largest = 0
	Declare Integer i
	For i = 0 To 987
		Declare Integer j
		For j = 0 To 12 
			Set mul = mul * Call ToInteger(num[i + j]))
		End For
		If mul > largest Then
			Set largest = mul
		End If
		Set mul = 1
	End For
	Display largest
End Module
----------------------------
Pseudecode2(very close to the natural language)
Declare String num
Declare Integer mul
Declare Integer largest
assign the number that given in the question to the num
assign 1 to mul
assign 0 to largest
Declare Integer i
assign 0 to i
iterate starting from i to 987 with an increment 1
	assign 0 to j
	Declare Integer j
	iterate starting from j to 12 with an increment 1
		convert num[i + j] to integer then multiply it with the mul then assign it to the mul
	end iteration
	if mul is greater than largest then
		assign mul to the largest
	end if
	assign 1 to the mul
end iteration
Display largest
-----------------------------
*/

#include<stdio.h>

int main(){ 

    char num[] =    "73167176531330624919225119674426574742355349194934"
                    "96983520312774506326239578318016984801869478851843"
                    "85861560789112949495459501737958331952853208805511"
                    "12540698747158523863050715693290963295227443043557"
                    "66896648950445244523161731856403098711121722383113"
                    "62229893423380308135336276614282806444486645238749"
                    "30358907296290491560440772390713810515859307960866"
                    "70172427121883998797908792274921901699720888093776"
                    "65727333001053367881220235421809751254540594752243"
                    "52584907711670556013604839586446706324415722155397"
                    "53697817977846174064955149290862569321978468622482"
                    "83972241375657056057490261407972968652414535100474"
                    "82166370484403199890008895243450658541227588666881"
                    "16427171479924442928230863465674813919123162824586"
                    "17866458359124566529476545682848912883142607690042"
                    "24219022671055626321111109370544217506941658960408"
                    "07198403850962455444362981230987879927244284909188"
                    "84580156166097919133875499200524063689912560717606"
                    "05886116467109405077541002256983155200055935729725"
                    "71636269561882670428252483600823257530420752963450";

    long long int mul = 1, largest = 0;


    for(int i = 0; i <= 987; i++){
        for(int j = 0; j < 13; j++){
            mul *= (num[i+j] - '0');
            
        }
        if(mul > largest){
            largest = mul;
        }
        mul = 1;
    }
    printf("largest: %lld", largest);

    
    
}

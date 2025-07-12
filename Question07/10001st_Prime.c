/*

Question: What is the 10001st prime number?

Tips:
-------------------------
Modular Patterns
Prime numbers greater than 2 can be written in the form of 6k ± 1.
This is because prime numbers greater than 2 and 3 cannot be multiples of 6, and they take the form 6k ± 1.

For example:

5 = 6×1 − 1

7 = 6×1 + 1

11 = 6×2 − 1

13 = 6×2 + 1

17 = 6×3 − 1

19 = 6×3 + 1

23 = 6×4 − 1

29 = 6×5 − 1

This is not an absolute pattern, but it is used when scanning for prime candidates.
----------------------------


1)flag = 0, largest
2)i = 4
3)counter = 3

4)if counter <= 10001, go to step 5, otherwise go to step 16
5)if (i%6 == 1 || i%6== 5), go to step 6, otherwise go to step 15
6)j = 2

7)if j < (i-1), go to step 8, otherwise go to step 11
8)if i % j == 0, go to step 9, otherwise go to step 10
9)flag = 1
10)j++, go to step 7

11)if flag == 0, go to step 12, otherwise go to step 14
12)largest = i
13)counter++
14)flag = 0
15)i++, go to step 4

16)print largest


*/

#include<stdio.h>
int main(){
    int flag = 0, largest;
    int i = 4;
    int counter = 3;
    while(counter <= 10001){
        if((i%6 == 1 || i%6== 5)){
            for(int j = 2; j < (i-1); j++){
                if(i%j == 0){
                    flag = 1;
                }
            }
            if(flag == 0){
                largest = i;
                counter++;
            }
            flag = 0;
        }
        i++;
    }
    printf("largest: %d", largest);
}

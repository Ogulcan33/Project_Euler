/*

Question:Find the sum of all of the multiples of 3 or 5 below 1000.

1)num declared
2)sum = 0
3)i = 1
4)if i < 1000, go to step 5,otherwise go to step 9
5)num = i
6)if (num % 3 == 0 || num % 5 == 0) then go to step 7, otherwise go to step 8
7)sum += num
8)i++, go to step 4
9)print sum

*/



#include <stdio.h>

int main() {
    int num, sum = 0;


    for(int i = 1; i < 1000; i++){
        num = i;
        if(num % 3 == 0 || num % 5 == 0){
            sum += num;
        }

    }

    printf("sum = %d", sum);
    

}
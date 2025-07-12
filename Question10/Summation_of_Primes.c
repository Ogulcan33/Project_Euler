/*
Question: Find the sum of all the primes below two million.

1)sum = 2, long long int flag
2)i = 3
3)if i < 2000000, go to step 4, otherwise go to step 13
4)flag = 0
5)j = 2
6)if j <= sqrt(i), go to step 7, otherwise go to step 10
7)if i % j == 0, then go to step 8, otherwise go to step 9
8)flag = 1, go to step 10
9)j++, go to step 6
10)if flag == 0, go to step 11, otherwise go to step 12
11)sum += i
12)i++, go to step 3
13)print sum


*/

#include<stdio.h>
#include<math.h>

int main(){
    long long int sum = 2;
    int flag;
    for(int i = 3; i< 2000000; i++){
		flag = 0;
        for(int j = 2; j <= sqrt(i); j++){
            if(i % j == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            sum += i;
        }
    }
    printf("%lld", sum);
}

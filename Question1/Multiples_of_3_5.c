/*

Genel Tanım:1000'in altında 3'ün veya 5'in katı olan bütün sayıların toplamı

1)num tanımlanır
2)sum = 0
3)i = 1
4)num = i
5)eğer num 3'e veya 5'e tam bölünüyorsa 6. adıma git, değilse 7. adıma git
6)sum += num
7)i 1000'den küçükse 4. adıma git ve i++ yap
8)sum yazdır

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

    printf("sayi = %d", sum);
    

}
/*

Soru: 10001. asal sayı nedir?

ipucu: Modüler Örüntüler
2’den büyük asal sayılar 6k ± 1 formunda yazılabilir.
Çünkü 2 ve 3’ten büyük asal sayılar 6’nın katı olamaz ve 6k ± 1 şeklinde olur.

Örneğin:

5 = 6*1 - 1

7 = 6*1 + 1

11 = 6*2 - 1

13 = 6*2 + 1

17 = 6*3 - 1

19 = 6*3 + 1

23 = 6*4 - 1

29 = 6*5 - 1

Bu mutlak bir örüntü değildir ama asal adaylarını tararken kullanılır.


1)flag = 0, largest
2)i = 4
3)counter = 3
4)eğer (i%6 == 1 || i%6== 5) ise 5. adıma git,değilse 13. adıma git
5)j = 2
6)eğer i%j == 0 ise 7. adıma git, değilse 8. adıma git
7)flag = 1
8)j < i-1 ise 6. adıma git ve j++ yap
9)eğer flag == 0 ise 10. adıma git, değilse 12. adıma git
10)largest = i
11)counter++
12)flag = 0
13)i++
14)eğer counter <= 10001 ise 4. adıma git
15)largest yazdır


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

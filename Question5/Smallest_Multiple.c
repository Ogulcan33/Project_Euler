/*
Açıklama;
1'den 20'ye kadar olan sayıların tamamıyla kalansız bölünebilen en küçük pozitif sayı nedir?

Bu 1’den 20’ye kadar tüm sayılara kalansız bölünebilen en küçük pozitif sayı,
yani 1..20 arası sayıların EKOK’unu (LCM) bulmak demektir.

Adım adım mantık:

1..20 arasındaki asal çarpanları belirleyelim:

2, 3, 5, 7, 11, 13, 17, 19

Her asalın 20’yi geçmeyecek en büyük üssünü alacağız:

2^4 = 16 (çünkü 2^5=32 > 20)
3^2 = 9 (çünkü 3^3=27 > 20)
5^1 = 5
7^1 = 7
11^1 = 11
13^1 = 13
17^1 = 17
19^1 = 19
Bunları çarparak EKOK’u hesaplayacağız

1)small = 16, flag = 0, num = 0
2)i = 3
3)j = 2
4)eğer i % j == 0 ise 5. adıma git, değilse 6. adıma git
5)flag = 1
6)eğer j < i ise 4. adıma git ve j++ yap
7)eğer flag == 0 ise 8. adım git, değilse 13. adıma git
8)k = 1
9)eğer pow(i, k) <= 20 ise 10. adıma git, değilse 11. adıma git
10)num = pow(i, k);
11)eğer k <= 4 ise 9. adıma git ve k++ yap
12)small *= num;
13)flag = 0
14)eğer i <= 20 ise 3. adıma git ve i++ yap 
15)small yazdır

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

/*
Tanım: Bu program 4000000'e kadar olan fibonacci sayılarını gösterir ve
bu sayıda dahil olmak üzere altındaki çift olan sayıların toplamını yazar

1)first = 1 
2)second = 2
3)sum tanımla
4)generalSum = 2
5)first ve second yazdır
6)sum = first + second
7)sum yazdır
8)sum 2'ye tam bölünüyorsa generalSum'a ekle
9)first = second
10)second = sum
11)sum = first + second
12)sum 4000000'e küçük eşitse 7. adıma git, değilse 13. adıma git
13)generalSum yazdır

*/
#include<stdio.h>

int main(){
	int first = 1, second = 2, sum;
    int generalSum = 2;
	
	printf("%d, %d", first, second);

    /* sum = first + second;
	while(sum <= 4000000){	
		printf(", %d", sum);
		if(sum % 2 == 0){
			generalSum += sum;
		}
		
		first = second;
		second = sum;
		sum = first + second;	
	}
    */
	for(sum = first + second; sum<=4000000;sum = first + second){
		printf(", %d", sum);
		if(sum % 2 == 0){
			generalSum += sum;
		}
		
		first = second;
		second = sum;
		
	}
	printf("\n%d",generalSum);
}



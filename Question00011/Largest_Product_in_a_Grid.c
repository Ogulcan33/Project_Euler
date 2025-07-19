/*
Question1: What is the greatest product of four adjacent numbers in 
the same direction (up, down, left, right, or diagonally) in the 20x20 grid?

grid:
------------
08 02 22 97 38 15 00 40 00 75 04 05 07 78 52 12 50 77 91 08
49 49 99 40 17 81 18 57 60 87 17 40 98 43 69 48 04 56 62 00
81 49 31 73 55 79 14 29 93 71 40 67 53 88 30 03 49 13 36 65
52 70 95 23 04 60 11 42 69 24 68 56 01 32 56 71 37 02 36 91
22 31 16 71 51 67 63 89 41 92 36 54 22 40 40 28 66 33 13 80
24 47 32 60 99 03 45 02 44 75 33 53 78 36 84 20 35 17 12 50
32 98 81 28 64 23 67 10 26 38 40 67 59 54 70 66 18 38 64 70
67 26 20 68 02 62 12 20 95 63 94 39 63 08 40 91 66 49 94 21
24 55 58 05 66 73 99 26 97 17 78 78 96 83 14 88 34 89 63 72
21 36 23 09 75 00 76 44 20 45 35 14 00 61 33 97 34 31 33 95
78 17 53 28 22 75 31 67 15 94 03 80 04 62 16 14 09 53 56 92
16 39 05 42 96 35 31 47 55 58 88 24 00 17 54 24 36 29 85 57
86 56 00 48 35 71 89 07 05 44 44 37 44 60 21 58 51 54 17 58
19 80 81 68 05 94 47 69 28 73 92 13 86 52 17 77 04 89 55 40
04 52 08 83 97 35 99 16 07 97 57 32 16 26 26 79 33 27 98 66
88 36 68 87 57 62 20 72 03 46 33 67 46 55 12 32 63 93 53 69
04 42 16 73 38 25 39 11 24 94 72 18 08 46 29 32 40 62 76 36
20 69 36 41 72 30 23 88 34 62 99 69 82 67 59 85 74 04 36 16
20 73 35 29 78 31 90 01 74 31 49 71 48 86 81 16 23 57 05 54
01 70 54 71 83 51 54 69 16 92 33 48 61 43 52 01 89 19 67 48

----------------------------------------------
Summary of my solution:

Traverse the two-dimensional character array using nested loops  
Inside the loop, calculate the product in all required directions  
If the result is greater than the current value of largest, then update largest
End all loops 
Display largest

----------------------------------------------
Pseudecode1(closer to flowchart

function find_num(int index, char grid[])
1)int dig1, dig2, num
2)dig1 = (grid[index] - '0')*10
3)dig2 = (grid[index+1]- '0')
4)num = dig1 + dig2
5)return num

function main()
1)char grid[] = "..."
2)long long int prod_up, prod_dia2, prod_right, prod_dia, largest = 0
//i = row, j = column
3)int i = 0;
4)if i < 20, go to step 5, otherwise go to step 25
5)	int j = 0;
6)	if j < 60, go to step 7, otherwise go to step 24
//right
7)		if j >= 9, go to step 8, otherwise go to step 11 
8)			prod_right = findNum(i*60+j, grid) * findNum(i*60+(j-3), grid) * findNum(i*60+(j-6), grid) * findNum(i*60+(j-9), grid)
9)			if prod_right > largest, go to step 10, otherwise go to step 11
10)				largest = prod_right
//up
11)		if i >= 3, go to step 12, otherwise go to step 15 
12)			prod_up = findNum(i*60+j, grid) * findNum((i-1)*60+j, grid) * findNum((i-2)*60+j, grid) * findNum((i-3)*60+j, grid)
13)			if prod_up > largest, go to step 14, otherwise go to step 15
14)				largest = prod_up
//diagonal_1: right and up
15)		if i >= 3 && j <= 48, go to step 16, otherwise go to step 19 
16)			prod_dia = findNum(i*60+j, grid) * findNum((i-1)*60+(j+3), grid) * findNum((i-2)*60+(j+6), grid) * findNum((i-3)*60+(j+9), grid)
17)			if prod_dia > largest, go to step 18, otherwise go to step 19
18)				largest = prod_dia
//diagonal_2: right and down
19)		if i <= 16 && j <= 48, go to step 20, otherwise go to step 23 
20)			prod_dia2 = findNum(i*60+j, grid) * findNum((i+1)*60+(j+3), grid) * findNum((i+2)*60+(j+6), grid) * findNum((i+3)*60+(j+9), grid)
21)			if prod_dia2 > largest, go to step 22, otherwise go to step 23
22)				largest = prod_dia2
23)	j+=3, go to step 6
24)i++, go to step 4
25)print largest

--------------------------------------------------------------------------
Gaddis Pseudocode

Module find_num(Integer index, String grid)
	Declare Integer dig1
	Declare Integer dig2
	Declare Integer num
	Set dig1 = Call ToInteger(grid[index]) * 10
	Set dig2 = Call ToInteger(grid[index+1])
	Set num = dig1 + dig2
	Return num
End Module

Module main()
	Declare String grid
	Set grid = "..."
	Declare Integer prod_up
	Declare Integer prod_dia2
	Declare Integer prod_right
	Declare Integer prod_dia
	Declare Integer largest
	Set largest = 0
	
	Declare Integer i
	For i = 0 To 19
		Declare Integer j
		For j = 0 To 59
			If j >= 9 Then
				Set prod_right = Call find_num(i*60+j, grid) * Call find_num(i*60+(j-3), grid) * Call find_num(i*60+(j-6), grid) * Call find_num(i*60+(j-9), grid)
				If prod_right > largest Then
					Set largest = prod_right
				End If
			End If			
			If i >= 3 Then
				Set prod_up = Call find_num(i*60+j, grid) * Call find_num((i-1)*60+j, grid) * Call find_num((i-2)*60+j, grid) * Call find_num((i-3)*60+j, grid)
				If prod_up > largest Then
					Set largest = prod_up
				End If
			End If			
			If i >= 3 And j <= 48 Then
				Set prod_dia = Call find_num(i*60+j, grid) * Call find_num((i-1)*60+(j+3), grid) * Call find_num((i-2)*60+(j+6), grid) * Call find_num((i-3)*60+(j+9), grid)
				If prod_dia > largest Then
					Set largest = prod_dia
				End If
			End If			
			If i <= 16 And j <= 48 Then
				Set prod_dia2 = Call find_num(i*60+j, grid) * Call find_num((i+1)*60+(j+3), grid) * Call find_num((i+2)*60+(j+6), grid) * Call find_num((i+3)*60+(j+9), grid)
				If prod_dia2 > largest
					Set largest = prod_dia2
				End If
			End If			
		End For
	End For
	Display Largest	
End Module
--------------------------------------------------------------------------
Pseudecode2(very close to the natural language)

find_num(Integer index, String grid)

Declare Integer dig1
Declare Integer dig2
Declare Integer num
convert grid[index] to integer then multiply it with 10 then assign it to dig1
convert grid[index + 1] to integer then assign it to dig2
do dig1 plus dig2 then assign the sum to the num
Return num



main()

Declare String grid
assign "..." to grid
Declare Integer prod_up
Declare Integer prod_dia2
Declare Integer prod_right
Declare Integer prod_dia
Declare Integer largest
assign 0 to largest


Declare ınteger i
assign 0 to i
iterate starting from i to 19 with an increment 1
	Declare Integer j
	assign 0 to j
	iterate starting from j to 59 with an increment 3
		If j greater than or equal to 9 Then
			assign the multiplication of horizontal numbers to prod_right
			If prod_right greater than largest Then
				assign prod_right to the largest
			End If
		End If			
		If i greater than or equal to 3 Then
			assign the multiplication of vertical numbers to prod_up
			If prod_up greater than largest Then
				assign prod_up to largest
			End If
		End If			
		If i greater than or equal to 3 And j lesser than or equal to 48 Then
			assign the multiplication of the diagonal numbers that their shape is go up and right to prod_dia
			If prod_dia greater than largest Then
				assign prod_dia to largest
			End If
		End If			
		If i lesser than or equal to 16 And j lesser than or equal to 48 Then
			assign the multiplication of the diagonal numbers that their shape is go down and right to prod_dia2
			If prod_dia2 greater than largest
				assign prod_dia2 to largest
			End If
		End If			
	end iteration
end iteration
Display Largest	
---------------------------------------------------------------------------

*/

#include<stdio.h>

int find_num(int index,char grid[]) {
    int dig1, dig2, num;
    dig1 = (grid[index] - '0')*10;
    dig2 = (grid[index+1]- '0');
    num = dig1 + dig2;
    return num;
}

int main(){
    char grid[] =   "08 02 22 97 38 15 00 40 00 75 04 05 07 78 52 12 50 77 91 08 "
                    "49 49 99 40 17 81 18 57 60 87 17 40 98 43 69 48 04 56 62 00 "
                    "81 49 31 73 55 79 14 29 93 71 40 67 53 88 30 03 49 13 36 65 "
                    "52 70 95 23 04 60 11 42 69 24 68 56 01 32 56 71 37 02 36 91 "
                    "22 31 16 71 51 67 63 89 41 92 36 54 22 40 40 28 66 33 13 80 "
                    "24 47 32 60 99 03 45 02 44 75 33 53 78 36 84 20 35 17 12 50 "
                    "32 98 81 28 64 23 67 10 26 38 40 67 59 54 70 66 18 38 64 70 "
                    "67 26 20 68 02 62 12 20 95 63 94 39 63 08 40 91 66 49 94 21 "
                    "24 55 58 05 66 73 99 26 97 17 78 78 96 83 14 88 34 89 63 72 "
                    "21 36 23 09 75 00 76 44 20 45 35 14 00 61 33 97 34 31 33 95 "
                    "78 17 53 28 22 75 31 67 15 94 03 80 04 62 16 14 09 53 56 92 "
                    "16 39 05 42 96 35 31 47 55 58 88 24 00 17 54 24 36 29 85 57 "
                    "86 56 00 48 35 71 89 07 05 44 44 37 44 60 21 58 51 54 17 58 "
                    "19 80 81 68 05 94 47 69 28 73 92 13 86 52 17 77 04 89 55 40 "
                    "04 52 08 83 97 35 99 16 07 97 57 32 16 26 26 79 33 27 98 66 "
                    "88 36 68 87 57 62 20 72 03 46 33 67 46 55 12 32 63 93 53 69 "
                    "04 42 16 73 38 25 39 11 24 94 72 18 08 46 29 32 40 62 76 36 "
                    "20 73 35 29 78 31 90 01 74 31 49 71 48 86 81 16 23 57 05 54 "
                    "01 70 54 71 83 51 54 69 16 92 33 48 61 43 52 01 89 19 67 48 "
                    "01 70 54 71 83 51 54 69 16 92 33 48 61 43 52 01 89 19 67 48 ";

    long long int prod_up, prod_dia2, prod_right, prod_dia, largest = 0;
	
	for(int i = 0; i<20; i++){
		for(int j = 0; j < 60; j+=3){

			if(j >= 9){
				prod_right = find_num(i*60+j, grid) * find_num(i*60+(j-3), grid) * find_num(i*60+(j-6), grid) * find_num(i*60+(j-9), grid);
                if(prod_right > largest){
                    largest = prod_right;
                }
			}
            if(i >= 3){
                prod_up = find_num(i*60+j, grid) * find_num((i-1)*60+j, grid) * find_num((i-2)*60+j, grid) * find_num((i-3)*60+j, grid);
                if(prod_up > largest){
                    largest = prod_up;
                }
            }
            if(i >= 3 && j <= 48){
                prod_dia = find_num(i*60+j, grid) * find_num((i-1)*60+(j+3), grid) * find_num((i-2)*60+(j+6), grid) * find_num((i-3)*60+(j+9), grid);
                if(prod_dia > largest){
                    largest = prod_dia;
                }
            }
            if(i <= 16 && j <= 48){
                prod_dia2 = find_num(i*60+j, grid) * find_num((i+1)*60+(j+3), grid) * find_num((i+2)*60+(j+6), grid) * find_num((i+3)*60+(j+9), grid);
                if(prod_dia2 > largest){
                    largest = prod_dia;
                }
            }
		}
	}
    printf("%lld" ,largest);

}

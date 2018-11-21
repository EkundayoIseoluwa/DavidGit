#include "pch.h"
#include <iostream>

int compareNum(int a, int b){
	if (a > b) return a;
	if(b > a) return b;
	if(a==b) return 0;
}

int difference(int a, int b)
{
	return a-b;
}

int main(){
	int a, b;
	int menu = 0;
	int res;	

       while(menu != 3){
	printf("enter the numbers a and b:\n");
	scanf_s("%d %d", a, b);

	printf("1 - compare the numbers\n");
	printf("2 - find the difference\n");
	printf("3 - exit\n");
	
	switch(menu){
		case 1: res = compareNum(a, b);
			if (res != 0){ printf("greater number = %d \n", res); }
				else {printf("numbers are equal\n");} 
			break;
		case 2: printf("%d \n", difference(a, b));
			break;
		case 3: break;
	}
	return 0;
}
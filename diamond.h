#include<bits/stdc++.h>

void diamond(int rows){
		int space=rows-1;
		for(int i=1; i<=rows; i++){
			for(int j=1; j<=space; j++){
				printf(" ");
			}
			space--;
			for(int j=1; j<=2*i-1; j++){
				printf("*");
			}
			std::endl(std::cout);
		}
		space=1;
		for(int i=1; i<=(rows-1); i++){
			for(int j=1; j<=space; j++){
				printf(" ");
			}
			space++;
			for(int j=1; j<=2*(rows-i)-1; j++){
				printf("*");
			}
			std::endl(std::cout);
		}
}
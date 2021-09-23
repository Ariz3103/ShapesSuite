#include<bits/stdc++.h>

void pyramid(int length){
	int space=length-1;
		for(int i=1; i<=length; i++){
			for(int j=1; j<=space; j++){
				printf(" ");
			}
			space--;
			for(int j=1; j<=2*i-1; j++){
				printf("*");
			}
			std::endl(std::cout);
		}
}
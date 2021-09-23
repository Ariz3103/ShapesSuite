#include<iostream>

void reversePyramid(int length){
	int space=0;
		for(int i=1; i<=length; i++){
			for(int j=1; j<=space; j++){
				printf(" ");
			}
			space++;
			for(int j=1; j<=2*(length-i)+1; j++){
				printf("*");
			}
			std::endl(std::cout);
		}
}

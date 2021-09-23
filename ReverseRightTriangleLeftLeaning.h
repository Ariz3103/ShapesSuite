#include<iostream>

void ReverseRightTriangleLeftLeaning(int length){
	for(int i=1; i<=length; i++){
		for(int j=(length-i)+1; 1<=j; j--){
			printf("*");
		}
		std::endl(std::cout);
	}
}

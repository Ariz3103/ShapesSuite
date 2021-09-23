#include<iostream>

void RightTriangleRightLeaning(int length)
{
	for(int i=1; i<=length; i++){
		for(int j=length-i; j>=1; j--){
			printf(" ");
		}
		for(int j=i; j>=1; j--){
			printf("*");
		}
		std::endl(std::cout);
	}
}

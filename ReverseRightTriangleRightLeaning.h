#include<bits/stdc++.h>

void ReverseRightTriangleRightLeaning(int length){
	for(int i=1; i<=length; i++){
		for(int k=i-1; 1<=k; k--){
			printf(" ");
		}
		for(int j=(length-i)+1; 1<=j; j--){
			printf("*");
		}
		std::endl(std::cout);
	}
}
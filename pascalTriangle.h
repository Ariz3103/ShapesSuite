#include<bits/stdc++.h>

void pascalTriangle(int rows)
{
	int arr[rows][rows];
	
	for(int line=0; line<rows; line++){
		for(int i=0; i<=line; i++){
			if(line==i||i==0){
				arr[line][i]=1;
			}
			else{
				arr[line][i]=arr[line-1][i-1]+arr[line-1][i];
			}
			printf("%d ", arr[line][i]);
		}
		std::endl(std::cout);
	}
}
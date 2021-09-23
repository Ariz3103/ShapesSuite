#include<iostream>

void RightTriangleLeftLeaning(int length)
{
    for(int i=1; i<=length; i++)
    {
        int a=0;
        while(a<i){
            printf("+");
            a+=1;
        }
        std::endl(std::cout);
    }
}

#include <stdio.h>
#include <math.h>
#include <bits/stdc++.h> 

int main () 
{
	double squareRoot[10];
  
	double tem;
  
	printf("\nEnter number: ");
  
	scanf("%lf", &tem);
  
	squareRoot[0] = sqrt(tem);
  
	int j;
  
	for(j = 1; j < 10; j++) 
  {
		double number;
    
		printf("\nEnter another number: ");
    
		scanf("%lf", &number);
    
		squareRoot[j] = sqrt(number);
    
	}
  
	double sum;
  
	for (j = 0; j < 10; j++)
  {
		sum = sum + squareRoot[j];
    
	}
	printf("\nAverage of square roots is: %lf\n", sum/10);
  
	return(0);
  
}

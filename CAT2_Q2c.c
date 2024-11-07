/*

AUTHOR:Fidel Loisah 
REG NO:CT101/G/23159/24
DATE:7/11/24

*/
#include<stdio.h>
int main()
{
	int i;
	int j;
	//define and initialize the 2d array 
	int scores[4][2]={{65,92},{84,72},{35,70},{59,69}};
	//use nested for loops to print the elements of the array
	for ( i=0;i<4;i++){
		
		for( j=0;j<2;j++){
			printf("scores[%d][%d]=%d\n",i,j,scores[i][j]);
		}
	}





return 0;
}
#include<stdio.h>
/*MATRIS ALGORITMASI KARSILKLI IKI DEGERIN CARPIMI
arg[0][0]=>1 , arg[0][1]=>5 , arg[0][2]=> 8 , arg[0][3]=> 7 | arg2[0][0]=>4 , arg2[0][1]=>7 , arg2[0][2]=> 9 , arg[0][3]=> 8 
1 7	3 4 | 4 5 1 6 = 1+4 , 7+5 , 3+1 , 4+6
6 2 1 6 | 6 8 2 8 = 6+6 , 2+8 , 1+2 , 6+8

arg[0][0] * arg2[0][0] (1*4=4)
*/
int main(){
	printf("basladi \n");
	int  arg[2][3] = {
	//1 2 3 4
	{1,5,7,6}, //0
	{5,2,3,4}, //1
	{8,2,1,5} //2	
	};
	int  arg2[2][3]= {
	//1 2 3 4
	{1,5,7,6}, //0
	{5,2,6,4}, //1
	{8,2,1,1} //2	
	};
	int  i,j;	
	printf("\n Matris A");
	for(i=0;i<=2;i++){
		printf("\n");
		for(j=0;j<=3; j++){
		printf("%d ",arg[i][j]);
	}
	}
	// B
	printf("\n\n********************************* \n");
	printf("\n Matris B");
	for(i=0;i<=2;i++){
		printf("\n");
		for(j=0;j<=3; j++){
		printf("%d ",arg2[i][j]);
	}
	}
return 0;
}

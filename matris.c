#include<stdio.h>

/*MATRIS ALGORITMASI KARSILKLI IKI DEGERIN CARPIMI
arg[0][0]=>1 , arg[0][1]=>5 , arg[0][2]=> 8 , arg[0][3]=> 7 | arg2[0][0]=>4 , arg2[0][1]=>7 , arg2[0][2]=> 9 , arg[0][3]=> 8 
1 7	3 4 | 4 5 1 6 = 1+4 , 7+5 , 3+1 , 4+6
6 2 1 6 | 6 8 2 8 = 6+6 , 2+8 , 1+2 , 6+8

arg[0][0] * arg2[0][0] (1*4=4)
*/
/* 
YAPILACAKLAR
-Okunan deÄŸerler bÃ¶lÃ¼nÃ¼p arraylere koyulacak
-Arrayler matris algoritmasÄ±na eklenecek
-
*/
void fileread(){
	FILE* openr = fopen("var.txt","r");
	
	if(openr == NULL){
		printf("Dosya yok veya bos");
	}
	else{
			
	int buf[24]; 
 	int arr[24] = { 0 };
 	int c,k;
 	int var[3][4];
	while (fgets(buf,24, openr)!=NULL){
       	printf("\n %s",buf);
	 }
	}	
		fclose(openr);
}
/* BUNU SIMDILIK DAHIL ETME
for(c=0;c<3;c++){	
		for(k=0;k<4;k++)
		{		
		var[c][k] = printf("\n %s",buf);
	   //bu kýsým hatalý
		}			 
		}
*/

int main(){
	printf("basladi \n");
	// BU ARRAYLER SILINECEK
	int	arg[3][4] = {  
   {9, 1, 2, 3} ,   /*   0 */
   {4, 6, 6, 5} ,   /*  1 */
   {3, 9, 6, 1}   /*  2 */
};
	int arg2[3][4] = {  
   {0, 4, 2, 3} ,   /*   0 */
   {4, 5, 3, 7} ,   /*  1 */
   {8, 7, 6, 3}   /*  2 */
};
	// BU ARRAYLER SILINECEK
	printf("Dosya okundu veriler aktarildi \n");
	int  i,j,a,b,sonuc;	
	// A
	printf("\n Matris A");
	for(i=0;i<3;i++){
		printf("\n");
		for(j=0;j<=3; j++){
		printf("%d ",arg[i][j]);
		}
	}
	// B
	printf("\n\n********************************* \n");
	printf("\n Matris B");
	for(i=0;i<3;i++){
		printf("\n");
		for(j=0;j<=3; j++){
		printf("%d ",arg2[i][j]);
		}
	}
	// Islem
	printf("\n\n********************************* \n");
	printf("\n 	Islem");
	for(i=0;i<3;i++){
		printf("\n");
		for(j=0;j<=3; j++){
		a = arg2[i][j];
		b = arg[i][j];
		sonuc=a*b;
		printf("\n %d*%d = %i",arg[i][j],arg2[i][j],sonuc);
		}
	}
	
	fileread();
	/* arrays
	for(i=0;i<3;i++){
		printf("\n");
		for(j=0;j<=3; j++){
		printf("\n arg2[%d][%d] = %d",i,j,arg2[i][j]);
		printf("\n arg[%d][%d]= %d",i,j,arg[i][j]);
		}
	}*/

return 0;
}

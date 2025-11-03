#include <stdio.h>
#include <math.h> 
int main(){
	int n , m , i , j ;
	printf("Nhap so hang: ");
	scanf("%d" , &n );
	printf("Nhap so cot: ");
	scanf("%d" , &m );
	
	int a[n][m];
	for ( i = 0 ; i < n ; i++){
		for( j = 0 ; j < m ; j++){
			printf(" Nhap gia tri cho phan tu o hang %d , cot %d :  " , i , j );
			scanf("%d" , &a[i][j]); 
		} 
	} 
	
	for( i = 0 ; i < n ; i++){
		for ( j = 0 ; j < m ; j++){
			printf("%d " , a[i][j]); 
		} 
		printf("\n"); 
	} 
	return 0; 
} 


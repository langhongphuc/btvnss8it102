#include <stdio.h>
int main(){
	int n , m , i , j ;
	printf("Hay nhap hang n vao day : ");
	scanf ("%d" , &n);
	printf("Hay nhap cot m vao day : ");
	scanf("%d" , &m );
	
	int a[n][m];
	for ( i = 0 ; i < n ; i++){
		for ( j = 0 ; j < m ; j++){
			printf("Hay nhap tung phan tu hang %d cot %d : " , i , j );
			scanf("%d" , &a[i][j]  ); 
		} 
	} 
	for ( i = 0 ; i < n ; i++){
		for ( j = 0 ; j < m ; j++){
			printf("%d\t" , a[i][j]); 
		} 
		printf("\n"); 
	} 
	printf ("Cac phan tu cua mang nam tren duong bien la : \n");
	for ( i = 0 ; i < n ; i++){
		for ( j = 0 ; j < m ; j++){
			if ( i == 0 || i == n -1 || j == 0 || j == m - 1 ){
				printf("%d\t" , a[i][j]); 
			} else {
				printf(" \t"); 
			} 
		}
		printf("\n"); 
	} 
	return 0; 
} 


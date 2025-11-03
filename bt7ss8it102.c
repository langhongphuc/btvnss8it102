#include <stdio.h>
int main(){
    int n;
	int i; 
	printf("Hay nhap so phan tu: ");
	scanf("%d" , &n );
	int arr[n];
	
	for ( i = 0 ; i < n ; i++){
        do {
            printf("Hay nhap phan tu thu %d: ", i + 1);
            scanf("%d", &arr[i]);
            
            if (arr[i] % 2 == 0) {
                printf("Phai la so le! Nhap lai: ");
            }
        } while (arr[i] % 2 == 0); 
    }
	printf("Mang so le: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
	}
	return 0; 
} 


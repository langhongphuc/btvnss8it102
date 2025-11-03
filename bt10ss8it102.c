#include <stdio.h>
#include <math.h> 

int main(){
	int n, i , j  , a ;
	printf("Hay nhap so phan tu  cua mang vao day : ");
	scanf("%d" , &a);
	int arr[a];
	
	for ( i = 0 ; i < a ; i++){
		printf("Hay nhap tung phan tu co trong mang arr[%d] : " , i  );
		scanf("%d" , &arr[i]);
	} 
	
	printf("Mang sau khi nhap la :  ");
	for ( i = 0 ; i < a  ;i++){
		printf(" %d " , arr[i]);
	} 
	   int demNT = 0;
    
    printf("Cac so nguyen to trong mang la: ");
    for (i = 0; i < a; i++){
        int flag = 1;
        
        if (arr[i] < 2) {
            flag = 0;
        } else {
            for (j = 2; j <= sqrt(arr[i]); j++){
                if (arr[i] % j == 0){
                    flag = 0;
                    break; 
                } 
            }
        }
        
        if (flag == 1){
            demNT++;
            printf("%d ", arr[i]); 
        }
    }
	printf("Co %d so nguyen to " , demNT ); 
}

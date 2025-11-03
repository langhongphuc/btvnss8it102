#include <stdio.h> 
int main(){
    int arr[5] = { 10 , 20 , 30 , 40 , 50 };
    int i;
    int min = arr[0];
    int max = arr[0];  

    for ( i = 0 ; i < 5 ; i++ ){
    printf("%d\n" , arr[i]); 
} 
    for( i = 1 ; i < 5 ; i++ ){
	if( arr[i] < min ){
		min = arr[i];
	} 
	if ( arr[i] > max){
		max = arr[i];
	}
}
	printf("Phan tu nho nhat : %d\n"  , min );
	printf("Phan tu lon nhat : %d\n", max );
	
	return 0;
}


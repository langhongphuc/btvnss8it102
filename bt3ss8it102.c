#include <stdio.h>
int main(){
	int a[5] = { 1 , 2 , 3 , 4 , 5 };
	int i;
	int size = 5;
	 for( i = 0 ; i < size ; i++){
    	if( a[i] % 2 == 0 ){
    	printf("\nphan tu so chan trong mang la %d" , a[i]  ); 
        }  else if ( a[i] % 2 != 0 ) {
        	printf("\nmang khong chua so chan la  %d " , a[i]); 
		} 
	} 
    return 0; 
} 

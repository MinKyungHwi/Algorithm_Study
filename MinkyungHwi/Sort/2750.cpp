#include<stdio.h>  //선택정렬 이용 - 제일 작은수를 앞으로 보냄 
  
int main(void){
	int array[1001];
 	int number ,i ,j ,index ,temp, min ;
 	scanf("%d",&number);
 	
 	for(i=0; i < number ; i++){
 		scanf("%d",&array[i]);
	}
	 
	for(i=0 ; i< number ; i++){
		min = 1001;
		for(j=i; j<number ; j++){
			if(min > array[j]){
				min = array[j];  		
				index = j;				// 최소값을 찾는다. 
			}
		}
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;			// 교체  
	}
	for(i=0; i<number ; i++){
		printf("%d\n", array[i]);	} 
	return 0;							// 출력 
 }

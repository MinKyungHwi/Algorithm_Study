#include<stdio.h>  //�������� �̿� - ���� �������� ������ ���� 
  
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
				index = j;				// �ּҰ��� ã�´�. 
			}
		}
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;			// ��ü  
	}
	for(i=0; i<number ; i++){
		printf("%d\n", array[i]);	} 
	return 0;							// ��� 
 }

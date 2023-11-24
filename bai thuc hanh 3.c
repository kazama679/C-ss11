#include<stdio.h> 
int main(){
	int n; 
	printf("nhap so phan tu cua mang:");
	scanf("%d",&n);
	int numbers[n]; 
	printf("nhap gia tri cac phan tu:\n");
	for(int i =0; i<n; i++);
	printf("numbers[%d]=", i);
	scanf("%d", &numbers[i]);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(numbers[j]>numbers[j+1]){
				int temp = numbers[j];
				numbers[j+1]=temp; 
			}
		}
	}
	printf("mang sau khi da sap xep tang dan:\n");
	for(int i=0; i<n; numbers[i]){
	printf("%d\t", numbers[i]); 
	}
} 

#include<stdio.h>
int main(){
	int n;
	printf("nhap so phan tu cua mang:");
	scanf("%d",&n);
	int numbers[n];
	printf("nhap phan tu\n");
	for(int i=0;i<n;i++){
	printf("numbers[%d]= ",i);
	scanf("%d", &numbers[i]);
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(numbers[i]< numbers[j]){
			int temp = numbers[i];
			numbers[i] = numbers[j];
			numbers[j] = temp; 
		}
		} 
	}
	printf("mang sau khi da sap xep tang dan:\n");
	for(int i=0; i<n;i++){
		printf("%d\t", numbers[i]);
	} 
}

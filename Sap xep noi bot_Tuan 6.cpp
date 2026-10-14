#include<stdio.h>
int main(){
	int A[100],p,k;
	printf("Nhap so phan tu cua mang (<100):");
	while(true){
		scanf("%d",&p);
		if(p<=0||p>100)
			printf("So phan tu khong hop le, vui long nhap lai:");
		else break;
	}
	// Nhap vao kich co mang
	
	for(int i=0;i<p;i++){
		scanf("%d",&A[i]);
	}
	// Nhap vao mang
	
	for(int i=0;i<p;i++){
		for(int j=p-1;j>=i;j--){
			k=A[j];
			if(k<=A[j-1]){ // So sanh 2 phan tu canh nhau
				A[j]=A[j-1];
				A[j-1]=k;
			}// Doi cho so nho len truoc, so lon ra sau
		}
	}
	
	printf("Mang sau khi sap xep la:\n");
	for(int i=0;i<p;i++){
		printf("%d ",A[i]);
	}// In ra mang sau khi sap xep
}

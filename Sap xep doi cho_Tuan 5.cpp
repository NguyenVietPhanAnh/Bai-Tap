#include<stdio.h>
int main(){
	int A[100],m,p;
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
	
	for(int i=1;i<p;i++){
		for(int j=i;j>0;j--){
			if(A[j]<A[j-1]){// So sanh 2 so lien ke
				m=A[j-1];
				A[j-1]=A[j];
				A[j]=m;
			}// Doi cho 2 cai lien ke
		}// Ap dung cho A[2] den A[p]
	}
	
	printf("Mang sau khi sap xep la:\n");
	for(int i=0;i<p;i++){
		printf("%d ",A[i]);
	}// In ra mang sau khi sap xep
}

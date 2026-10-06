#include<stdio.h>
int main(){
	int A[100],k,m,n,p;
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
		for(int j=i;j<p;j++){
			if(j==i){
				k=A[j];
				m=j;
			}
			else if(k>=A[j]){
				k=A[j];
				m=j;
			}
		}// Tim Min
		
		n=A[i];
		A[i]=k;
		A[m]=n;	
	}// Doi vi tri Min voi phan tu dau
	
	printf("Mang sau khi sap xep la:\n");
	for(int i=0;i<p;i++){
		printf("%d ",A[i]);
	}// In ra mang sau khi sap xep
	
}

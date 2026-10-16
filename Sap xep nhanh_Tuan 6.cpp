#include<stdio.h>
int main(){
	int A[100],p,t,a,b,c,j;// p-so phan tu, t-chot
	printf("Nhap so phan tu cua mang (<101):");
	while(1){
		scanf("%d",&p);
		if(p<=0||p>100)
			printf("So phan tu khong hop le, vui long nhap lai:");
		else break;
	}
	// Nhap vao kich co mang
	
	for(int i=0;i<p;i++){
		printf("Nhap vao phan tu so %d:", i+1);
		scanf("%d",&A[i]);
	}
	// Nhap vao mang
	a=p;
	b=1;
	t=A[0];
	for(int i=b;i<p;i++){
		for(j=a-1;j>=i;j--){
			c=A[j];
			if(A[j]<t){
				a=j+1;
				break;
			}
		}
		if(i==j){
			A[0]=A[i];
			A[i]=t;
			break;
		}else if(A[i]>=t){
			A[j]=A[i];
			A[i]=c;
		}
	}
	
	printf("Mang sau khi sap xep la:\n");
	for(int i=0;i<p;i++){
		printf("%d ",A[i]);
	}// In ra mang sau khi sap xep
}

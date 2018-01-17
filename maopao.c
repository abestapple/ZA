/*
 ============================================================================
 Name        : maopao.c
 Author      : ZZZ
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define L 10
int main(void) {
	int tran,i,j,k;
	int a[L]={1,5,10,9,6,4,7,2,3,8};
	for(i=0;i<=L-1;i++){
		int flag=1;
		for (j=0;j<=L-i;j++){
			if(a[j]>a[j+1]){
				flag=0;
				tran=a[j+1];
				a[j+1]=a[j];
				a[j]=tran;
			};

		};
		if(flag==1){
			break;
		};
		printf("µ⁄%d¥Œ≈≈¡–£∫",i+1);
		for(k=0;k<=L-1;k++){

			printf("%d\t",a[k]);

		};
		printf("\n");
	};

};

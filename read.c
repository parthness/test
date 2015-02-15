#include"prototypes.h"
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
void read() {
	int i=0;	
	fp=fopen("seq.txt","r");
	if(fp==NULL) {
		printf("can't open file");
		exit(1);	
	}
	fscanf(fp,"%d",&n);
	printf("%d\n",n);
	num=(int *)malloc(n*sizeof(int));
	max=(int *)malloc(n*sizeof(int));
	while(fscanf(fp,"%d",&num[i])!=EOF) 
		i++;
	for(i=0;i<n;i++) {
		max[i]=INT_MAX;
		printf("%d\n",num[i]);
	}	
}

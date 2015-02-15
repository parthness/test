#include"prototypes.h"
#include<limits.h>
int longest() {
	int i=0,j;	
	for(;i<n;i++) {
		j=0;
		while(num[i]>max[j++]);
		max[j-1]=num[i];
	}
	for(i=0;i<n;i++) 
		if(max[i]==INT_MAX)
			break;	
	return i-1;
}

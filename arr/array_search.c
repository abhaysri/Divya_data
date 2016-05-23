#include<stdio.h>

main() {

	int val,a[5],i,flag=1;
	printf("Enter the num that we want to search\n");
	scanf("%d",&val);
	printf("Enter the array element\n");
	for(i=0;i<5;i++) {
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++) {
		printf("%d\n",a[i]);
	}
	for(i=0;i<5;i++) {
		if(val==a[i]) {
			flag=0;
			break;
		}
	}
	if(flag==0) {
		printf("Value is searched in array=%d\n",val);
	}
	else {
		printf("Value is not found\n");	
	}
	
}
	

#include <stdio.h>

int main(void) {
	int t ,p1,p2,k;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	scanf("%d %d %d",&p1,&p2,&k);
	int y=(p1+p2)/k;
	if(y%2==0)
	printf("CHEF");
	else 
	printf("COOK");}
	return 0;
}


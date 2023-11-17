#include<stdio.h>
#include<stdlib.h>
int main(){
	char *c;
	c=(char*)malloc(sizeof(char));
	*c='A';
	while(*c<='Z'){
		printf("%c ",*c);
		*c=*c+1;
	}
	return 0;
}

#include<stdio.h>
int main()
{
	char c;
	char my_string[100];
	int counter;
	printf("Enter your string of characters and terminate by pressing enter ");
	counter=0;
	do
	{
		c=getchar();
		my_string[counter]=c;
		counter=counter+1;
	}while (c!='\n');
	my_string[counter]='\0';
	printf("%s",my_string);
}//end main

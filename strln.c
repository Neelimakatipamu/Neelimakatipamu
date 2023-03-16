#include<stdio.h>
main()
{
	int i=0;
	char str[10];  
	printf("\nEnter any string: ");
	gets(str);
	while (str[i]!='\0')
	{
		i++;
	}
	printf("\nlength of the string is %d",i);
	
	
	
}

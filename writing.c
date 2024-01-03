#include<stdio.h>

main()
{
	int *p;
	char data[1000];
	p = fopen("writing.txt","w");
	
	if(p==0)
	{
		printf("file not open");
	}
	else
	{
		printf("Enter Your String = ");
		gets(data);
		fputs(data,p);
		printf("Data Add Successfully");
	}
	fclose(p);
}
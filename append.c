#include<stdio.h>

main()
{
	int *p;
	char data[1000];
	p = fopen("append.txt","a");
	
	if(p==0)
	{
		printf("file not open");
	}
	else
	{
		printf("Enter Your String = ");
		gets(data);
		fputs("\n",p);
		fputs(data,p);
		printf("Data Add Successfully");
	}
	fclose(p);
	
	printf("\n----data read----\n");
	p = fopen("append.txt","r");
	
	if(p==0)
	{
		printf("file not open");
	}
	else
	{
		while(fgets(data,5,p)!=NULL)
		{
			printf("%s",data);
		}
	}
	fclose(p);
	
}
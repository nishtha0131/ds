#include<stdio.h>
#include<conio.h>
int main()
{
	FILE*fp;
	fp=fopen("F://nishtha//fseek.txt","r");
	if(fp==NULL)
	{
		printf("file not created \n");
		return 1;
	}
	char line[100];
	fseek(fp,4,SEEK_SET);
	fgets(line,sizeof(line),fp);
	printf("forth line is=%s",line);
	fclose(fp);
	return 0;
}

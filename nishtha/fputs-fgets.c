#include<stdio.h>
#include<conio.h>
int main()
{
	FILE*fp;
	fp=fopen("F://nishtha//fputs-fgets.txt","w");
	fputs("this is a fputs & fgets example",fp);
	fclose(fp);
	fp=fopen("F://nishtha//fputs-fgets.txt","r");
	printf("%s",fgets('text',200,fp));
	return 0;
}

#include<stdio.h>
#include<conio.h>
int main()
{
	FILE * fp;
	fp=fopen ("F://nishtha//fputc-fgetc.txt","w");
	fputc ('N',fp);
	fclose(fp);
	char c;
	fp=fopen ("F://nishtha//fputc-fgetc.txt","r");
	while ((c=fgetc (fp)) != EOF)
	{
		printf("%c",c);
	}
	fclose (fp);
	return 0;
}

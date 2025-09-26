#include<stdio.h>
#include<conio.h>
int main()
{
	FILE * file=fopen("F://nishtha//file1.txt","w");
	if(file==NULL)
	{
		printf("error open a file \n");
		return 1;
	}
fprintf(file,"this is a file example \n");
fclose(file);
return 0;
}

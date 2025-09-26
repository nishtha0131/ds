#include<stdio.h>
#include<conio.h>
int main()
{
	FILE * fptr;
	int id;
	char name[30];
	float sal;
	fptr=fopen("F://nishtha//fprintf.txt","w+");
	if(fptr==NULL)
	{
		printf("file not created \n");
		return 1;
	}
	printf("enter id= ");
	scanf("%d",&id);
	fprintf(fptr,"id=%d\n",id);
	printf("enter name= ");
	scanf("%s",&name);
	fprintf(fptr,"name=%s\n",name);
	printf("enter salary= ");
	scanf("%f",&sal);
	fprintf(fptr,"salary=%f\n",sal);
	fclose(fptr);
	return 0;
}

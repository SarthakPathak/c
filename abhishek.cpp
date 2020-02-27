#include<stdio.h>
#include<conio.h>
int main()
{
	int goals;
	printf("Enter the number of goals scored against India");
	scanf("%d",&goals);
	if(goals<=5)
	goto sos;
	{
		printf("About time soccer players learnt C\n");
		printf("and said goodbye!adieu!to soccer");
		exit();
	}
	sos:
		printf("To err is human!");
	getch();
}

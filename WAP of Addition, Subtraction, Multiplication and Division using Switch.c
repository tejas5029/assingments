#include<stdio.h>
main()
{
	int n1,n2;
	int choose,add,sub,multi,div;
	printf("Enter the value of n1 = ");
	scanf("%d",&n1);
	printf("Enter the value of n2 = ");
	scanf("%d",&n2);
	
	printf("/n1.. Adition/n2.. Substraction/n3.. Multiplication/n4.. Division\n\n");
	
	printf("choose your options");
	scanf("%d",&choose);
	switch(choose)
	{
		case 1:
			add=n1+n2;
			printf("%d + %d = %d ",n1,n2,add);
			break;
		case 2:	
			sub=n1-n2;
			printf("%d - %d = %d ",n1,n2,sub);
			break;
		case 3:
			multi=n1*n2;
			printf("%d * %d = %d ",n1,n2,multi);
			break;
		case 4:
			div=n1/n2;
			printf("%d / %d = %d ",n1,n2,div);
			break;
			
		default:
			printf("invalid input");			
			
	}

}

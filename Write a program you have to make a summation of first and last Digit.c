#include <stdio.h>
main()
{
    int no,sum;
    printf("enter any number:\n");
    scanf("%d",&no);
    sum=no%10;
    while(no>9)
	{
        no=no/10;
    }
    sum=sum+no;
    printf("sum of first and last digit is:%d",sum);
}

#include <stdio.h>
  
int main()
{
    int rows = 5;
  
    // first loop is for printing the rows
    for (inti=0;i<rows;i++) 
	{
  
        // loop for printing leading whitespaces
        for (int j = 0; j < 2 * (rows - i) - 2; j++)
		{
            printf(" ");
        }
  
        // loop for printing continious numbers
        for (int k = 0; k <= i; k++) {
            printf("%d ", k + 1);
        }
        printf("\n");
    }
    return 0;
}

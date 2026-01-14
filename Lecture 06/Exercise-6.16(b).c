#include <stdio.h>

void main()
{
    int i,j,size=5;

      for( i=0; i< size; i++)
        {

        for(int j = 0; j < size; j++)
        {

            if(i == 0 || i ==size- 1 || j == 0 || j == size-1)
             {
                printf("S    ");
            }
        else
            {
                printf("     ");
            }
        }
        printf("\n");
    }


}

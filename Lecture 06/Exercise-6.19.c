#include <stdio.h>

void main()
{
    int i,j,size=5;

      for( i=0; i< size; i++)
        {

        for(int j = 0; j < size; j++)
        {

            if( i ==size- 3 && j == size- 3)
             {
                printf("O    ");
            }
        else
            {
                printf("S    ");
            }
        }
        printf("\n");
    }


}


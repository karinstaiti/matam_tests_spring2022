#include "RLEList.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    RLEList list = RLEListCreate();
    char *str = "abcdefghijk";
   // RLEListResult res;
    for(int i=0 ;i<10;i++)
    {
     RLEListAppend(list,str[i]);
     printf("%d",i);
     printf("%c ",RLEListGet(list,i,NULL));
     printf("%d   ",RLEListSize(list));

     RLEListRemove(list,0);

    }
    printf("\n");
    char *exported = RLEListExportToString(list,NULL);
    printf("%s",exported);
    free(exported);
    return 0;
}
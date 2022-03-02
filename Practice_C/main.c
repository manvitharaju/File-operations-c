#include <stdio.h>
#include <stdlib.h>
#include"structure.h"
#include<assert.h>


typedef struct _item_ Item;

struct _item_{
    int price;
    int qty;
};


int main()
{
   int n,sum=0;
   Item i;
   printf("\n Enter the no. of items: ");
   scanf("%d",&n);
   printf("\n Enter the price of items: ");
   for(int i=0;i<n;i++)
   {
       scanf("%d",&i.price);
   }
}


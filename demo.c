#include"header.h"
int demo()
{
    int a[3],b[3];
    int*pa=a;
    int*pb;
    pb=pa;
    printf("Enter any 3 values:");
    int i;
     for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        printf("a[i]= %d\t",*pa);
        *pa++;
    }
   
   for(i=0;i<3;i++)
    {
       printf("\n b[i]= % d\t",*pb);
        *pb++;
    }
    
}

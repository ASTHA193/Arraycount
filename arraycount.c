#include<stdio.h>
void main()
{
    int arr[10],i,k=0,l=0,m=0;
    printf("enter the elements of array\n");
    for(i=0;i<10;i++)
    scanf("%d" ,&arr[i]);
     printf("the elements of array\n");
    for(i=0;i<10;i++)
    printf("%d " ,arr[i]);
    for(i=0;i<10;i++)
    {

    if(arr[i]>0)

          k++;


    else if(arr[i]<0)

           l++;


    else

    m++;
    }
    printf("\n the no is positive%d" ,k);
    printf("\n the no is negative%d" ,l);
    printf("\n the no is zero%d" ,m);

}

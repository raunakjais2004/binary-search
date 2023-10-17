#include<stdio.h>
int binary(int array[], int x, int low, int high)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (array[mid] == x)
            return mid;
        if (array[mid]< x)
            return mid+1;
        else
           high=mid-1;    
            
    }
   return -1;  
}
int main(void)
{
    int array[]={10,4,30,40,50,60,62};
    int n= sizeof(array)/ sizeof(array[0]);
    int x= 60;
    int result=binary(array,x,0,n-1);
    if (result== -1)
      printf("not found");
    else printf("Element is founf at index %d",result);
    return 0;  

}
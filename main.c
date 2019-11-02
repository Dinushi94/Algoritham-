#include <stdio.h>
#include <stdlib.h>

int linear_search(int data[], int sk, int size)
{
  int found=0; //found=0, because initialized is not found when the begin in the program
  int position=-1; //position is the whre i found y search key, whrn the program is start search is the index -1;
  int index;//the array begin of the program the index value is the 0


  for(index=0; index<size; index++)
  {
   if(data[index]==sk)

   {
    found=1;
    position=index;
    break;

   }
  }
   return position; //return where the key was foun

}

int main()
{
 int array[]={100,200,300,400,500};
 int value;
 printf("enter your seach value: ");
 scanf("%d",&value);
 printf("the srach value position is: %d\n",linear_search(array,value,5));

}

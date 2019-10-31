#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

int linear_seacrh(int data[],int size, int key)
{
    int found=0; //initialized not found
    int position=-1;  //set to invalid index (what i want to find)
    int index=0;

    while(index<size && found==0)
    {
        if(data[index]==key)
        {
            found=1;
            position=index;
            break;
        }
        index++;
    }
    return position; //return where the key was found
}

int main() //call function
{
    int array[]={100,600,800,750,250,900}; //the array set
    int value; //declare the search key using "value"
    printf("input your search value: "); //user input
    scanf("%d", &value);
    printf("your search value position is: %d\n",linear_seacrh(array,6,value)); //print what is the search key
    return 0;

}

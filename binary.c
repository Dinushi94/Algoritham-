#include <stdio.h>
int main()
{
int c, f, l, m, n, s, array[100];
printf("Enter The Number Of Elements :");
scanf("%d",&n);
printf("Enter %d integers :", n);
for (c = 0; c < n; c++)
scanf("%d",&array[c]);
printf("Enter The Value To Find :");
scanf("%d", &s);
f=0;
l=(n - 1);
m=(f+l)/2;
while (f<=l)
{
if (array[m]<s)
f=(m+1);
else if (array[m]==s)
{
printf("%d found at location %d.\n", s, m+1);
break;
}
else
l=(m-1);
m=(f+l)/2;
}
if (f>l)
printf("Not found! %d is not present in the list.", s);
return 0;
}

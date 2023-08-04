#include<stdio.h>
void main()
{
int i,first,last,middle,search;
int array[10]={3,5,8,12,23,24,28,32,37,42};
printf("Enter value to find\n");
scanf("%d",&search);
first=0;
last=9;
middle=(first+last)/2;
while(first<=last)
{
if (array[middle]<search)
first=middle+1;
else if (array[middle]==search)
{
printf("%d found at location %d.\n",search,middle+1);
break;
}
else
last=middle-1;
middle=(first+last)/2;
}
if (first>last)
printf("Not found! %d is not present in the.\n",search);
}

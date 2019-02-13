#include <stdio.h>

void main()
{
int a[]={1,0,1,1,1,0,0,1,0,1,0,1,1,1,1,1,1,1,1,1};
int level=0, falling_edge=0, rising_edge=0;
char ar[10];
 ar[0]='L';
 ar[1]='R';
 ar[2]='F';

char d;
int i,j;
j=1;
for(i=0;i<20;i++)
{
if(a[i]==a[j])
{level++;
d=ar[0];
}
else if(a[i]<a[j])
{rising_edge++;
d=ar[1];}
else
{falling_edge++;
d=ar[2];}

printf("\nsample number : %d !! voltage level = %d !! %c ",i,a[i],d);
j++;


}
printf("\n\nlevel=%d, rising edge=%d, falling edge=%d\n\n", level, rising_edge,falling_edge);
}

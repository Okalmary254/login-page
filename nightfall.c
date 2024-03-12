#include <stdio.h>
#include <conio.h>
void main()
{
 int a[25][25],b[25][25],c[25][25],i,j,m,n;

 printf("enter the rows and colums of two matrics:\n");
 scanf("%d%d",&m,&n);
 printf("\nenter the elements of A matrics");
 for(i=0;i<m;i++)
 {
 for(j=0;j<n;j++)
 scanf("\t%d",&a[i][j]);
 }
 printf("\nenter the elements of B matrics");
 for(i=0;i<m;i++)
 {
 for(j=0;j<n;j++)
 scanf("\t%d",&b[i][j]);
 }
 printf("\nThe elements of A matrics");
 for(i=0;i<m;i++)
 {
 printf("\n");
 for(j=0;j<n;j++)
  printf("\t%d",a[i][j]);
 }
 printf("\nThe elements of B matrics");
 for(i=0;i<m;i++)
 {
 printf("\n");
 for(j=0;j<n;j++)
 printf("\t%d",a[i][j]);
 }
 printf("\nThe ssubtraction of two matrics");
 for(i=0;i<m;i++)
 {
 printf("\n");
 for(j=0;j<n;j++)
 {
 c[i][j]=a[i][j]-b[i][j];
 printf("\t%d",c[i][j]);
 }
 }
 getch();
}

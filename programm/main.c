#include<stdio.h>
main()
{
int i,j,k,n;
float A[10][10],c,x[10],sum=0.0;
printf("\n Vvedite razmernost matici ");
scanf("%d",&n);
printf("\n vedite elementy rashirenoy matrici \n\n" ); 
for(i=1; i<=n; i++)
{
  for(j=1; j<=(n+1); j++)
  {
    printf("A[%d][%d] : ", i,j); 
    scant("%f",&A[i][j]);
  }
}
for(j=1; j<=n; j++)
   {
       for(i=1; i<=n; i++)
       {
        if(i>j)
        {
           c=A[i][j]/A[j][j];
            for(k=1; k<=n+1; k++)
            {
              A[i][k]=A[i][k]-c*A[j][k];
            }
        }
       }
   }
x[n]=A[n][n+1]/A[n][n];
for(i=n-1; i>=1; i--)
  {
  sum=0;
  for(j=i+1; j<=n; j++)
       {
         sum=sum+A[i][j]*x[j];
       }
    x[i]=(A[i][n+1]-sum)/A[i][i];
  }
printf("\nResheniye: \n");
   for(i=1; i<=n; i++)
  {
   printf("\nx%d=%f\t",i,x[i]); 
  }
retum(0);
}

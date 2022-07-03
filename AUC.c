#include<stdio.h>
#include<math.h>
int main()
{
  double Ln, Rn,Mn;
  double dx, a = 0, b = 2;
  int i=0;
    printf("n\tLn\t\t\tRn\t\t\tMn\n"); 
  for(int n=20; n<=10000; n+=20)
  {
    dx = (b-a)/n;
    Ln = 0; Rn = 0;Mn = 0;
    for(int i=0;i<n;i++)
    {
      Ln = Ln+(pow((a+i*dx),3)+1)*dx;
      Rn = Rn+(pow((a+(i+1)*dx),3)+1)*dx;
      Mn = Mn+(pow((a+(2*i+1)*dx/2),3)+1)*dx;
    }
    printf("\n%d\t", n);
    printf("%.10lf\t\t", Ln);
    printf("%.10lf\t\t", Rn);
    printf("%.10lf\t\t", Mn);
  }printf("\n"); 
      return 0;
}

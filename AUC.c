# include<stdio.h>
# include<math.h>
# include<stdlib.h>  

int main(){
  double Ln,Rn,Mn ; 
  double dx, a = 0 , b = 2;
  FILE*fp;
  fp = fopen("data.csv","w");
  if(fp==NULL)

}
          printf("Trouble reading file!");
          return(1);\
          {
            printf("Trouble reading file!");
             return(1);\

          }
           printf(fp, "n.Ln,Rn,Mn\n");
           for (int n= 20; n<=10000; n+=20)
           {
            dx = (b-a)/n;
            Ln = 0, Rn = 0, Rn = 0;
            for(int i =0, i<n, i++)
           }

            Ln = Ln+(pow((a+i*dx),3)+1)*dx;
            Rn = Rn+(pow((a+(i+1)*dx),3)+1)*dx;
            Mn = Mn+(pow((a+(2*i+1)dx/2),3)+1)*dx; 
            {
              fprintf(fp,"\n%d,%.13lf,%.13lf,%.13lf", n,Ln,Rn,Mn)
          

            }
              close (fp);
              return 0; 
           


         



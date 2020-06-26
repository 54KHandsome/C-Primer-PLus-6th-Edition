//Relationship between Fahrenheit and Celsius
//Convert F to C or C to F

#include <stdio.h>
#include <stdlib.h>

int main()
{
  char  more = 'y';
  int   choice = 0;
  float C, F;
  while (more == 'y' || more == 'Y')
   {
    printf ("\n\t\tRelationship between Fahrenheit and Celsius");
    printf ("\n\n\t\t\t    1 )    F  - >  C");
    printf ("\n\t\t\t    2 )    C  - >  F");

    while (!(choice == 1 || choice == 2))
     {
      printf ("\n\n\t\t\tChoice (1/2) ? ");
      scanf  ("%d", &choice);
      if (!(choice ==1 || choice == 2))
       {
        printf ("\n\n\t\t\tmust choose from 1 or 2");
       }
     }

     if (choice == 1)
      {
       printf ("\n\t\t\tInput F: ");
       scanf  ("%f", &F);
       C = (5.0 / 9.0) * (F - 32.0);
       printf ("\n\t\t\t%6.2fF = %6.2fC\n", F, C);
      }
       else
       if (choice == 2)
        {
         printf ("\n\t\t\tInput C: ");
         scanf  ("%f", &C);
         F = (9.0 / 5.0) * C + 32.0;
         printf ("\n\t\t\t%6.2fC = %6.2fF\n", C, F);
        }
        
    choice = 0;
    do{
       printf ("\n\t\t\tDo more (Y/N) ? ");
       scanf ("%s", &more);
       if (!(more == 'y' || more == 'Y' || more == 'n' || more == 'N'))
        {
         printf ("\n\t\t\tmust choose from y(yes) or n(no)");
        }
      }while (!(more == 'y' || more == 'Y' || more == 'n' || more == 'N'));
   }
return 0;
}

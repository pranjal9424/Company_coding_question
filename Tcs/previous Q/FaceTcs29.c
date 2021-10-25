#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c;
    float real,root1, root2, img,root;
    float discriminant;
    scanf("%f%f%f", &a, &b, &c);

        discriminant = (b * b) - (4 * a * c);
  if(discriminant>0){
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);

        printf("root1 = %.2f  root2 = %.2f", root1, root2);
  }
  else
  if(discriminant==0){
        root = (-b) / (2*a);
        printf("root1 = %.2f  root2 = %.2f", root, root);
  }
  else
  {
    real = -b/(2*a);
    img=sqrt(-discriminant)/(2*a);
    printf("root1 = %.2f + %.2fi  ", real, img);
    printf("root2 = %.2f - %.2fi  ", real, img);
  }


  return 0;
}

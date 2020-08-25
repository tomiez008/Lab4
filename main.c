#include<stdio.h>
int main() {
      
      int p;
      float area,l1,l2,h,sumL;
      printf("Enter L1 : ");
      scanf("%f" ,&l1);
      printf("Enter L2 : ");
      scanf("%f" ,&l2);
      printf("Enter Height : ");
      scanf("%f" ,&h);

      p = (l2/l1)*100;
      printf("L2 = %d %  \n",p);
      sumL = l1+l2;
      if (p>=40) {
      area = 0.5*h*sumL;
      printf("Area is : %0.2f", area);
      }
      return 0;
}
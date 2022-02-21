#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int subset(int bitn, int num, int num_of_bits) {
   if (bitn >= 0) {
         if ((num & (1 << bitn)) != 0) {
         printf("%d ", num_of_bits - bitn);
      }
           subset(bitn - 1, num, num_of_bits);
   }
   else
      return 0;
      return 1;
}
int printSubSets(int num_of_bits, int num) {
   if (num >= 0) {
      printf("{ ");
          subset(num_of_bits - 1, num, num_of_bits);
      printf("}\n");
          printSubSets(num_of_bits, num - 1);
   }
   else
      return 0;
      return 1;
}
int main() {
   int n ;
   scanf("%d",&n);
   printSubSets(n, (int) (pow(2, n)) -1);
}

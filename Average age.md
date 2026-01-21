\#include <stdio.h>



int main() {

&nbsp;   int age\[] = {2,4,6,8,10};

&nbsp;   int sum = 0;

&nbsp;   int n = sizeof(age)/sizeof(age\[3]);

&nbsp;   float average;

&nbsp;   for(int i = 0;i<n;i++)

&nbsp;   {

&nbsp;       sum+=age\[i];

&nbsp;   }

&nbsp;   average = sum/n;

&nbsp;   printf("average age = %.2f",average);



&nbsp;   return 0;

}


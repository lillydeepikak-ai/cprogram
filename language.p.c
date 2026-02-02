\#include <stdio.h>

int main(){

&nbsp;   int choice;

&nbsp;   printf("Welcome to IVR System\\n");

&nbsp;   printf("press 1 for Tamil\\n");

&nbsp;   printf("press 2 for English\\n");

&nbsp;   printf("press 3 for Hindi\\n");

&nbsp;   printf("Enter your choice:\\n");

&nbsp;   scanf("%d",\&choice);

&nbsp;   switch(choice){

&nbsp;   case 1:

&nbsp;   printf("You have chosen Tamil\\n");

&nbsp;   case 2:

&nbsp;   printf("You have chosen English\\n");

&nbsp;   case 3:

&nbsp;   printf("You have chosen Hindi\\n");

&nbsp;   break;

&nbsp;   default:

&nbsp;   printf("Invalid choice\\n");

}

return 0;

}




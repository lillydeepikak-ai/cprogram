\#include<stdio.h>



int main()

{

&nbsp;   int c=123456,i=3,e,b=10000;

&nbsp;   while(i>0)

&nbsp;   {

&nbsp;       printf("Enter ATM Password:\\n");

&nbsp;       scanf("%d",\&e);

&nbsp;       if(e==c)

&nbsp;       {

&nbsp;           printf("Access successfully.ATM OPENED.\\n");

&nbsp;           printf("Enter your amount:\\n");

&nbsp;           scanf("%d",\&b);

&nbsp;           if(b<10000)

&nbsp;           {

&nbsp;               printf("Cash withdraw successfully.\\n");

&nbsp;           }

&nbsp;           else if(b=10000)

&nbsp;           {

&nbsp;               printf("Cash withdraw successfully but fine.\\n");

&nbsp;           }

&nbsp;           else

&nbsp;           {

&nbsp;               printf("Cash withdraw failed/It's above the amount.\\n");

&nbsp;           }

&nbsp;           break;

&nbsp;       }

&nbsp;       else{

&nbsp;           i--;

&nbsp;           printf("Incorrect Password.Time left:%d.\\n",i);

&nbsp;       }

&nbsp;   }

&nbsp;   if(i==0){

&nbsp;       printf("Try next time.\\n");

&nbsp;   }

&nbsp;   return 0;

}


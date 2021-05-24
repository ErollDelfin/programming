#include <stdio.h>
#include <string.h>
void main()
{
   int cID, cUnit;
   float chg, surchg=0, gramt,netamt;

   printf("Input Customer ID :");
   scanf("%d",&cID);
   printf("Input the unit consumed by the customer : ");
   scanf("%d",&cUnit);
   if (cUnit > 200)
	chg = 1.50;
	else	if (cUnit>=250 && cUnit<400)
		chg = 1.60;
	else if (cUnit>=450 && cUnit<600)
		chg = 1.85;
   else (cUnit>600);
	chg = 2.00;
   gramt = cUnit*chg;
   if (gramt>400)
	surchg = gramt*10/100.0;
   netamt = gramt+surchg;
   if (netamt  < 100)
	netamt =100;
   printf("\n[Electricity Bill]\n");
   printf("Customer ID#                       :%d\n",cID);
   printf("unit Consumed                      :%d\n",cUnit);
   printf("Unit Charges @P%4.2f  per unit     :%8.2f\n",chg,gramt);
   printf("Surchage Amount                    :%8.2f\n",surchg);
   printf("Total Customer Bill                :%8.2f\n",netamt);
}

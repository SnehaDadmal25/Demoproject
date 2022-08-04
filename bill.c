#include<stdio.h>
main()
{
	float unit,bill,subcharge,totalamount,amount;
	printf("\n enter total units consumed= ");
	scanf("%f",&unit);
	if(unit<=50)
	{
		bill=0.5*unit;
	}
	else if(unit>=50 &&unit<=150)
	{
		amount=0.5*50;
		bill=amount+0.75*(unit-50);
	}
	else if(unit>=150&&unit<=250)
	{
		amount=0.75*150;
		bill=amount+1.2*(unit-50);
	}
	else
	{
		amount=1.2*250;
		bill=amount+1.5*(unit-250);
	}
	subcharge=0.2*bill;
	totalamount=bill+subcharge;
	printf("\n total amount to be paid in rs=%0.2f",totalamount);
}

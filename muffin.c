#include <stdio.h>
//this program will a the how many muffins they want to buy.  muffins 
//cost 1.49 each.  If they buy 6 or more there is no tax.  Otherwises
//13% hst is added to the muffins
//this program reads in how many muffins are being purchased and then
//it prints out the cost of the muffins

const float HST = 0.13;

int main(void){
	int quantity;
	float taxes;
	float subtotal;
	float total;

	//ask for # of muffins
	printf("Enter how many muffins you want: ");

	//read in # of muffins
	scanf("%d",&quantity);

	
	//calculate subtotal
	subtotal = quantity * 1.49;
	printf("Subtotal: %.2f\n",subtotal);

	//calculate taxes
	if(quantity >= 6){
		taxes = 0;
	}
	else{
		taxes=HST*subtotal;
	}

	//calculate total
	total = subtotal+ taxes;
	//print total	
	printf("The cost of muffins is: %.2f\n",total);
	return 0;
}

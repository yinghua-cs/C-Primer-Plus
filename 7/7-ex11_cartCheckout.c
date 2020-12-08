//
//  7-ex11_cartCheckout.c - calculate the total and relative amount of grocery shopping.
//  - Solution to Programming Exercise 11, Chapter 7, C Primer Plus, 6th. Page 297 - 298
//
//  - The ABC Mail Order Grocery sells artichokes for $2.05 per pound, beets for $1.15 per 
// 	  pound, and carrots for $1.09 per pound. It gives a 5% discount for orders of $100 or 
// 	  more prior to adding shipping costs. It charges $6.50 shipping and handling for any 
// 	  order of 5 pounds or under, $14.00 shipping and handling for orders over 5 pounds
// 	  and under 20 pounds, and $14.00 plus $0.50 per pound for shipments of 20 pounds or 
// 	  more. Write a program that uses a switch statement in a loop such that a response of a 
// 	  lets the user enter the pounds of artichokes desired, b the pounds of beets, c the pounds 
// 	  of carrots, and q allows the user to exit the ordering process. The program should keep 
// 	  track of cumulative totals. That is, if the user enters 4 pounds of beets and later enters
// 	  5 pounds of beets, the program should use report 9 pounds of beets. The program then
// 	  should compute the total charges, the discount, if any, the shipping charges, and the 
// 	  grand total. The program then should display all the purchase information: the cost per 
// 	  pound, the pounds ordered, and the cost for that order for each vegetable, the total cost 
// 	  of the order, the discount (if there is one), the shipping charge, and the grand total of all 
// 	  the charges.
//
//  Created by Yinghua Han on 10/19/2020.
//  Copyright © 2020 Yinghua Han. All rights reserved.
//

# include <stdio.h>
# include <ctype.h>

int main(void)
{
	const float ARTICHOKES_PRICE = 2.05, BEETS_PRICE = 1.15, CARROTS_PRICE = 1.09, 
				DISCOUNT = 0.05, 
				SHIPPING_COST1 = 6.5, SHIPPING_COST2 = 14, SHIPPING_COST3 = 0.5;
	const int 	DISCOUNT_RANGE = 100,
				SHIPPING_RANGE1 = 5, SHIPPING_RANGE2 = 20;

	char category, confirm;
	float adding_pound, artichokes_weight = 0, beets_weight = 0, carrots_weight = 0, total_weight,
		artichokes_cost, beets_cost, carrots_cost, total_cost, discount = 0,
		shipping = 0, grand_total;

	while (1)
	{	
		printf("Which vegetable would you like to add to the cart?\n"
				"a. artichokes\n"
				"b. beets\n"
				"c. carrots\n"
				"q. quit\n");

		while (isblank(category = getchar()) || category == '\n')
			continue;

		switch(category)
		{
			case 'a':
			case 'A':
				printf("How many atrichokes do you like?\n");
				scanf("%f", &adding_pound);
				artichokes_weight += adding_pound;
				break;

			case 'b':
			case 'B':
				printf("How many beets do you like?\n");
				scanf("%f", &adding_pound);
				beets_weight += adding_pound;
				break;

			case 'c':
			case 'C':
				printf("How many carrots do you like?\n");
				scanf("%f", &adding_pound);
				carrots_weight += adding_pound;
				break;

			case 'q':
			case 'Q':
				break;

			default:
				printf("Input error!\n\n");
		}

		if (category == 'q' || category == 'Q')
		{
			printf("Are you done?(y/n)\n");
			while (isblank(confirm = getchar()) || confirm == '\n')
				continue;
			if (confirm == 'y' || confirm == 'Y')
				break;
		}
	}

	artichokes_cost = artichokes_weight * ARTICHOKES_PRICE;
	beets_cost = beets_weight * BEETS_PRICE;
	carrots_cost = carrots_weight * CARROTS_PRICE;

	total_cost = artichokes_cost + beets_cost + carrots_cost;
	
	if (total_cost >= DISCOUNT_RANGE)
		discount = total_cost * DISCOUNT;

	total_weight = artichokes_weight + beets_weight + carrots_weight;
	if (total_weight <= SHIPPING_RANGE1 && total_weight > 0)
		shipping = SHIPPING_COST1;
	else if (total_weight > SHIPPING_RANGE1 && total_weight < SHIPPING_RANGE2)
		shipping = SHIPPING_COST2;
	else if (total_weight >= SHIPPING_RANGE2)
		shipping = SHIPPING_COST2 + (total_weight - SHIPPING_RANGE2) * SHIPPING_COST3;

	grand_total = total_cost - discount + shipping;

	printf("Here is your shopping details.\n");
	printf("artichokes: $%.2f /lb.      %6.2f lb.      $%6.2f\n", 
		ARTICHOKES_PRICE, artichokes_weight, artichokes_cost);
	printf("beets:      $%.2f /lb.      %6.2f lb.      $%6.2f\n", 
		BEETS_PRICE, beets_weight, beets_cost);
	printf("carrots:    $%.2f /lb.      %6.2f lb.      $%6.2f\n", 
		CARROTS_PRICE, carrots_weight, carrots_cost);
	printf("                                    total:  $%6.2f\n"
		   "                                 discount:  $%6.2f\n"
		   "                                 shipping:  $%6.2f\n"
		   "                              grand total:  $%6.2f\n",
		   total_cost, discount, shipping, grand_total);

	return 0;
}

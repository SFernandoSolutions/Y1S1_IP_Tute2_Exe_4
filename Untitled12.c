#include <stdio.h>

//	create structure 
struct item
{
	int itemNo;
	double price;
	int quantity;
}item1, item2;

int main(void){
	
//	add data to structure
	item1.itemNo=1;
	item1.price=10.00;
	item1.quantity=12;
	
	item2.itemNo=2;
	item2.price=15.00;
	item2.quantity=4;
	
//	print data in structure

	printf("Itemno\tPrice\tQuantity\n"); //print headings
	printf("%d\t %.2f\t %d\n", item1.itemNo, item1.price, item1.quantity); //print 1 row
	printf("%d\t %.2f\t %d\n", item2.itemNo, item2.price, item2.quantity); //print 2 row
	
	return 0;
	
}

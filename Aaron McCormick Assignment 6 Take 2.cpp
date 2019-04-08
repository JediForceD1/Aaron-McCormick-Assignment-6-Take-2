// Chapter 7 - Programming Challenge 14, Gratuity Calculator
// This program utilizes a Tips class to calculate the gratuity on
// a restaurant meal, using whatever tip percent the patron desires.
#include <iostream>
#include <iomanip>

using namespace std;
#include "tips.h"
void printDetails(Tips&);

//------------- tester program ---------------------------------
int main()
{
	Tips mytips;
	//------ after constructor
	cout << "-------- After Constructor ---------";
	printDetails(mytips);

	//----------- Test case 1 --------------
	mytips.setBill_after_taxes(106.5);
	mytips.setTax_rate(6.5);
	mytips.setTip_rate(10);
	cout << "-------- Test case 1 ---------";
	printDetails(mytips);


	//------------ Test case 2 ----------
	mytips.setBill_after_taxes(104.56);
	mytips.setTax_rate(6.25);
	mytips.setTip_rate(10);
	cout << "-------- Test case 2 ---------";
	printDetails(mytips);

	//------------ Test case 3 ----------
	mytips.setBill_after_taxes(75.5);
	mytips.setTax_rate(12.5);
	mytips.setTip_rate(15);
	cout << "-------- Test case 3 ---------";
	printDetails(mytips);

	cin.get();
	return 0;
}

void printDetails(Tips& tip_class)
{
	double tax_rate = tip_class.getTax_rate();
	double tip_rate = tip_class.getTip_rate();
	double bill_after_taxes = tip_class.getBillAfterTaxes();
	double bill_before_taxes = tip_class.getBillAmountBeforeTaxes();
	double tax_amount = tip_class.getTaxAmount();
	double tip_amount = tip_class.getTipAmount();
	double total_bill = tip_class.getTotalBillAmount();
	cout << setprecision(2) << fixed;
	cout <<
		left << setw(33) << "\nTax rate  :" << setw(7) << right << tax_rate << "%" <<
		left << setw(33) << "\nTip rate  :" << setw(7) << right << tip_rate << "%" <<
		left << setw(33) << "\nBill Amount before taxes:" << setw(7) << right << bill_before_taxes <<
		left << setw(33) << "\nTax Amount:" << setw(7) << right << tax_amount <<
		left << setw(33) << "\nBill Amount after taxes:" << setw(7) << right << bill_after_taxes <<
		left << setw(33) << "\nTip Amount:" << setw(7) << right << tip_amount <<
		left << setw(33) << "\nTotal Bill with tip and tax : " << setw(7) << right << total_bill
		<< "\n\n";
}
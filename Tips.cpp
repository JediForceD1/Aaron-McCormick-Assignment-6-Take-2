#include "tips.h"


void Tips::setTax_rate(double _tax_rate)
{
	tax_rate = _tax_rate;
}
void Tips::setBill_after_taxes(double _bill_after_taxes)
{
	bill_after_taxes = _bill_after_taxes;
}
void Tips::setTip_rate(double _tip_rate)
{
	tip_rate = _tip_rate;
}
double Tips::getTax_rate()
{
	return tax_rate;
}
double Tips::getBillAfterTaxes()
{
	return bill_after_taxes;
}
double Tips::getTip_rate()
{
	return tip_rate;
}
//-------- class calculation functions ------ FIX ALL BELOW
double Tips::getTipAmount()
{
	double tip_amount = (100 / tip_rate) + 100;
	
	return tip_amount;
}
double Tips::getBillAmountBeforeTaxes()
{
	double bill_bef_tax = 0;
	return bill_bef_tax;
}

double Tips::getTaxAmount()
{
	double tax_amount = 0;
	return tax_amount;
}
double Tips::getTotalBillAmount()
{
	double total_bill = 0;
	return total_bill;
}

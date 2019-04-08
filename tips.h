// Chapter 7 - Programming Challenge 14, Gratuity Calculator
// This program utilizes a Tips class to calculate the gratuity on
// a restaurant meal, using whatever tip percent the patron desires.
#include <iostream>
#include <iomanip>
using namespace std;

class Tips
{
private:
	double bill_after_taxes = 100,
		tax_rate = 6.25,
		tip_rate = 15;

public:
	//-------- mutator functions ----------
	void setTax_rate(double);
	void setBill_after_taxes(double);
	void setTip_rate(double);

	//--------- accessor functions -------------
	double getTax_rate();
	double getBillAfterTaxes();
	double getTip_rate();

	//----- class functions that perform calculations / "read-only" properties ------
	double getTipAmount();
	double getBillAmountBeforeTaxes();
	double getTaxAmount();
	double getTotalBillAmount();
};
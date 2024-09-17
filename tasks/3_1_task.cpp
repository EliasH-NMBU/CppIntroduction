#include <iostream>

using namespace std;

int main(){
    double sales = 95000;
    const double state_tax = 0.04;
    const double county_tax = 0.02;
    // county_tax = 0; // this will cause an error because county_tax is a constant
    double total_tax_cost = state_tax*sales + county_tax*sales;

    cout << "The total tax cost is: $" << total_tax_cost << endl
         << "from sales of: $"         << sales << endl
         << "with taxation of "       << state_tax*100 << "% and " << county_tax*100 << "%." << endl;
    return 0;
    
}


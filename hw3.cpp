#include <iostream>
using namespace std;

// Sales Commission Calculator Program by <YOUR NAME>
int main() {
    // Declare variables
    int salesAmount;
    double commissionRate, commission;

    cout << "Sales Commission program by Josh Bricker" << endl;
    cout << "****************************************" << endl;

   
    cout << "Enter the Sales amount - ";
    cin >> salesAmount;

    
    if (salesAmount >= 1000000) {
        commissionRate = 0.10;
    } else if (salesAmount >= 750000) {
        commissionRate = 0.08;
    } else if (salesAmount >= 500000) {
        commissionRate = 0.06;
    } else if (salesAmount >= 250000) {
        commissionRate = 0.05;
    } else {
        commissionRate = 0.04;
    }

    
    commission = salesAmount * commissionRate;

   
    cout << "\nYou will receive " << commission << " commission on your sales of " << salesAmount << endl;
    cout << "Your rate of commission was " << commissionRate * 100 << "%" << endl;
    cout << "\nGood Luck on your sales next month!" << endl;

    return 0; }
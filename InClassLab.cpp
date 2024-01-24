#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int i = 6789;
int j = 1234;
int k = 10;
int l = i + j + k;

cout<<"Week 3 - Exercise 1 - Assignment statements\n\n";

cout<<i<<j<<k;
cout<<"\n"<<i<<" "<<j<<"  "<<k;
cout<<"\n"<<setw(6)<<i<<setw(6)<<j<<setw(6)<<k;
cout<<"\nThe sum of the three integers is "<<l;
}
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double dollars, pesos, euros, yen, amount;
    
    cout << "amount of dollars: " ;
    cin >> amount;
    
    dollars = amount;
    pesos = dollars * 20.06;
    euros = dollars * 0.99;
    yen = dollars * 143.08;
    
    cout << setw(10) << "Dollars" << "\t" << setw(10) << "Pesos" << "\t" << setw(10) << "Euros" << "\t" << setw(10) << "Yen" << endl;
    
    cout << fixed << setprecision(2) << setw(10) << dollars << "\t" << setw(10) << pesos << "\t" << setw(10) <<  euros << "\t" <<  setw(10) <<  yen << endl;
   
    
    return 0;
}







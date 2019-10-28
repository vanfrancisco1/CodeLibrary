#include<iostream>
using namespace std;
int main()
{
 double sales,income,FormulaOutput;
 cout << "My Monthly Sales chart:" << endl;
 cout << "Greater than 50,000" << endl;
 cout << "Less than 50,000 but greater than or equal to 40,000" << endl;
 cout << "less than 40,000 but greater than or equal to 30,000" << endl;
 cout << "less than 30,000 but greater than or equal to 20,000" << endl;
 cout << "less than 20,000 but greater than or equal to 10,000" << endl;
 cout << "less than 10,000" << endl;
 cout << "Your sales: " << endl;
 cin >> sales;
 if (sales >= 50000)
 {
  FormulaOutput = sales / 100 * 16;
  income = FormulaOutput + 575; 
 }
 else if (sales >= 40000)
 {
  FormulaOutput = sales / 100 * 14;
  income = FormulaOutput + 550;
 }
 else if (sales >= 30000)
 {
  FormulaOutput = sales / 100 * 12;
  income = FormulaOutput + 525;
 }
  else if (sales >= 20000)
 {
  FormulaOutput = sales / 100 * 9;
  income = FormulaOutput + 500;
 }
  else if (sales >= 10000)
 {
  FormulaOutput = sales / 100 * 5;
  income = FormulaOutput + 450;
 }
 else if (sales < 10000)
 {
  FormulaOutput = sales / 100 * 3;
  income = FormulaOutput + 400;
 }
 cout << "The Income is " << income << endl;
}

#include<iostream>
#include<conio.h>
#include<algorithm>

using namespace std;
int main()
{

// String Variables	
string UserN = "",
Pass = "",
FirstName = "",
LastName = "",
// username is your first name

/*
	Usernames: 
	van
	shem
	erwin
	javid
*/

// Master Admin Van Password
PassInput1 = "dragon",
// Master Employee Shem Password
PassInput2 = "potato",
// Employee Javid
PassInput3 = "1234",
// Employee Erwin
PassInput4 = "4321",
ActOption,
LeaveOption,
ItemChoose,
ItemsOnCart[10] = {"N/A","N/A","N/A","N/A","N/A","N/A","N/A","N/A","N/A","N/A"},
ItemName,
addDecis,
FinalDecis,
DiscountDecis,
PWDDiscount;

// Char used in masking passwords
char P;

// Integer variables
int Aste = 0,
TotalSales = 0,
TotalPrice = 0,
ItemPrice = 0,
Quantity = 0,
Total = 0,
MoneyInput = 0,
Change,
PricesOnCart[10] = {0,0,0,0,0,0,0,0,0,0},
QuantityOnCart[10] = {0,0,0,0,0,0,0,0,0,0},
FinalPrices[10] = {0,0,0,0,0,0,0,0,0,0};

double Discount,
DiscountAcquired;

// Login Part
	while(true)
	{
	cout << "\t\t\t" <<">>Chocolates and Chips<<" << endl;
	cout << "\t\t" <<">> Presented By: Van,Javid,Erwin,Shem <<"<< "\n" << endl;
	cout << "\t\t" <<"               Login                    " << endl;
	cout << "\t\t" <<"Username: ";
	cin >> UserN;
	cout << "\t\t" << "Password: ";
	// Password Masking Function
	while (P != 13 || P != ' ')
	{
		P = getch();
		
		// Delete the asterisk If the user presses delete
		if((P==8 || P==127) && !Pass.empty())
		{
		    cout<<"\b \b";
		    Pass.erase(Pass.size()-1);
		    Aste--;
		}
		// Enters the password if the user presses enter
		else if (P == '\r')
		{
			break;
		}
		// Asterisk is added if the user inputs 
		else
		{
		    Pass+=P;
		    cout<<"*";
		    Aste++;
		}
	}
		// Username and Pass converted to lowercase text;
		transform(UserN.begin(),UserN.end(),UserN.begin(), ::tolower);
		transform(Pass.begin(),Pass.end(),Pass.begin(), ::tolower);
		// Options for login;
	     if(Pass == PassInput1 && UserN == "van")
		 {
		 	FirstName = "Van";
		 	LastName = "Francisco";
		 	cout << "\n\n" << "\t\t" <<"  >> Simple Point-of-Sales Program <<  " << "\n" << endl;
		 	cout << "\t\t"<< "  Welcome Master Admin, " << FirstName << " " << LastName << "\n"  << endl;
		 	break;
		 }
		 else if(Pass == PassInput2 && UserN == "shem")
		 {
		 	FirstName = "Shem";
		 	LastName = "Bosing";
		 	system("cls");
		 	cout << "\t\t" <<"  >> Simple Point-of-Sales Program <<  " << "\n" << endl;
		 	cout << "\t\t"<< "  Welcome Master Employee, " << FirstName << " " << LastName << "\n" << endl;
			break;	
		 }
		 else if (Pass == PassInput3 && UserN == "erwin")
		 {
		 	FirstName = "Erwin";
		 	LastName = "Genabe";
		 	system("cls");
		 	cout << "\t\t" <<"  >> Simple Point-of-Sales Program <<  " << "\n" << endl;
		 	cout << "\t\t"<< "  Welcome Employee, " << FirstName << " " << LastName << "\n" << endl;
			break;	
		 }
		else if (Pass == PassInput4 && UserN == "javid")
		 {
		 	FirstName = "Javid";
		 	LastName = "Irannejad";
		 	system("cls");
		 	cout << "\t\t" <<"  >> Simple Point-of-Sales Program <<  " << "\n" << endl;
		 	cout << "\t\t"<< "  Welcome Employee, " << FirstName << " " << LastName << "\n" << endl;
			break;	
		 }
		 else
		 {
		 	system("cls");
		 	cout << '\n' << "\t\t\t"<< " Invalid User try again. " << endl;
		 	Pass = "";
		 	UserN = "";
		 	continue;
		 } 
	}
	
	
	// Main Program Dashboard :)
	while(true)
	{
	 cout << "\n\t\t" << "What do you want to do " << FirstName << "?" << endl;
	 cout << "\t\t" << "[1] Transact" << endl;
	 cout << "\t\t" << "[2] Check Sales Report" << endl;
	 cout << "\t\t" << "[3] Exit Program" << endl;
	 cout << "\t\t" << "Option: ";
	 cin >> ActOption;
	 
	     // Logout Option
		 if (ActOption == "3")
		 {
		 cout << "\n"<< "\t\t" << "Are you sure? Y/N" << endl;
		 cout << "\t\t" << "Option: ";
		 cin >> LeaveOption;
		 transform(LeaveOption.begin(),LeaveOption.end(),LeaveOption.begin(), ::tolower);
			 if (LeaveOption == "y")
			 	{
			 	cout << "\n\t\t" << "Thank you for using Point-of-Sales System " << FirstName << " " << LastName << endl;
			 	break;
			 	}
			else if (LeaveOption == "n")
				{
				system("cls");
				cout << "\n\t\t" << "Request Acknowledged!" << endl;
				continue;
				}
		 }
		 // Check Sales Option (Admin Only)
		 else if (ActOption == "2")
		 {
		 	if (FirstName == "Van" && LastName == "Francisco" || FirstName == "Shem" && LastName == "Bosing")
		 	{
			cout << "\n\t\t" << "The current sales are " << TotalSales << endl;
			}
			else
			{
		    cout << "\n\t\t" << "Employee is not allowed to access the Sales Report" << endl;
			}
		 }
		 // Transact Option
		 else if (ActOption == "1")
		{
			    for(int i = 0;i<10;i++)
			    {
			 	cout << "\n\t\t" << "Items for sale:" << endl;
			 	cout << "\n\t\t" << "[A] Hershey's - 150" << endl;
			 	cout << "\n\t\t" << "[B] Toblerone - 160" << endl;
			 	cout << "\n\t\t" << "[C] Snickers - 60" << endl;
			 	cout << "\n\t\t" << "[D] Cadberry - 150" << endl;
			 	cout << "\n\t\t" << "[E] Goya - 20" << endl;
			 	cout << "\n\t\t" << "[F] Doritos - 120'" << endl;
				cout << "\t\t" << "Your Option: "; 
			 	cin >> ItemChoose;
			 	transform(ItemChoose.begin(),ItemChoose.end(),ItemChoose.begin(), ::tolower);
			 	
			 	
			 	
			 	// if user picks item A
			 		if (ItemChoose == "a")
				 	{
				 		//Sets the Item name an Item Price to the Desired Price and Item Name
				 		ItemName = "Hershey's";
				 		ItemPrice = 150;
				 		// Stores the item name and Item Price to the Array
				 		ItemsOnCart[i] = ItemName;
				 		PricesOnCart[i] = ItemPrice;
				 		// User is asked how many they want to order
						while (true)
						{
						cout << "\t\t" << "Quantity: ";
						cin >> Quantity;
						QuantityOnCart[i] = Quantity;
						// if user enters letters instead of numbers
							if (cin.fail())
							{
								cout << "\t\t" << "User can only enter numbers" << endl;	
								cin.clear(); // clear input buffer to restore cin to a usable state
	        					cin.ignore(INT_MAX, '\n'); // ignore last input
							}
						// if not the loop breaks
							else
							{
								break;
							}
						}
						// User is asked if they want to add another Item
						cout << "\t\t" << "Add Another Item? Y/N: ";
						cin >> addDecis;
						transform(addDecis.begin(),addDecis.end(),addDecis.begin(), ::tolower);
						if (addDecis == "n")
						{
							// if no
							break;
						}
						else if (addDecis == "y")
						{
							// if yes
							continue;
						}
					}
				
					
					
					
				// if user picks item B
			 		else if (ItemChoose == "b")
				 	{
				 		ItemName = "Toblerone";
				 		ItemPrice = 160;
				 		ItemsOnCart[i] = ItemName;
				 		PricesOnCart[i] = ItemPrice;
						while (true)
						{
						cout << "\t\t" << "Quantity: ";
						cin >> Quantity;
						QuantityOnCart[i] = Quantity;
							if (cin.fail())
							{
								cout << "\t\t" << "User can only enter numbers" << endl;	
								cin.clear(); // clear input buffer to restore cin to a usable state
	        					cin.ignore(INT_MAX, '\n'); // ignore last input
							}
							else
							{
								break;
							}
						}
						cout << "\t\t" << "Add Another Item? Y/N: ";
						cin >> addDecis;
						transform(addDecis.begin(),addDecis.end(),addDecis.begin(), ::tolower);
						if (addDecis == "n")
						{
							break;
						}
						else if (addDecis == "y")
						{
							continue;
						}
					}
					
					
					
					
				// if user picks item C
			 		else if (ItemChoose == "c")
				 	{
				 		ItemName = "Snickers";
				 		ItemPrice = 60;
				 		ItemsOnCart[i] = ItemName;
				 		PricesOnCart[i] = ItemPrice;
						while (true)
						{
						cout << "\t\t" << "Quantity: ";
						cin >> Quantity;
						QuantityOnCart[i] = Quantity;
							if (cin.fail())
							{
								cout << "\t\t" << "User can only enter numbers" << endl;	
								cin.clear(); // clear input buffer to restore cin to a usable state
	        					cin.ignore(INT_MAX, '\n'); // ignore last input
							}
							else
							{
								break;
							}
						}
						cout << "\t\t" << "Add Another Item? Y/N: ";
						cin >> addDecis;
						transform(addDecis.begin(),addDecis.end(),addDecis.begin(), ::tolower);
						if (addDecis == "n")
						{
							break;
						}
						else if (addDecis == "y")
						{
							continue;
						}
					}
					
					
					
				// if user picks item D
			 		else if (ItemChoose == "d")
				 	{
				 		ItemName = "Cadberry";
				 		ItemPrice = 150;
				 		ItemsOnCart[i] = ItemName;
				 		PricesOnCart[i] = ItemPrice;
						while (true)
						{
						cout << "\t\t" << "Quantity: ";
						cin >> Quantity;
						QuantityOnCart[i] = Quantity;
							if (cin.fail())
							{
								cout << "\t\t" << "User can only enter numbers" << endl;	
								cin.clear(); // clear input buffer to restore cin to a usable state
	        					cin.ignore(INT_MAX, '\n'); // ignore last input
							}
							else
							{
								break;
							}
						}
						cout << "\t\t" << "Add Another Item? Y/N: ";
						cin >> addDecis;
						transform(addDecis.begin(),addDecis.end(),addDecis.begin(), ::tolower);
						if (addDecis == "n")
						{
							break;
						}
						else if (addDecis == "y")
						{
							continue;
						}
					}
					
					
					
				// if user picks item E
			 		else if (ItemChoose == "e")
				 	{
				 		ItemName = "Goya";
				 		ItemPrice = 20;
				 		ItemsOnCart[i] = ItemName;
				 		PricesOnCart[i] = ItemPrice;
						while (true)
						{
						cout << "\t\t" << "Quantity: ";
						cin >> Quantity;
						QuantityOnCart[i] = Quantity;
							if (cin.fail())
							{
								cout << "\t\t" << "User can only enter numbers" << endl;	
								cin.clear(); // clear input buffer to restore cin to a usable state
	        					cin.ignore(INT_MAX, '\n'); // ignore last input
							}
							else
							{
								break;
							}
						}
						cout << "\t\t" << "Add Another Item? Y/N: ";
						cin >> addDecis;
						transform(addDecis.begin(),addDecis.end(),addDecis.begin(), ::tolower);
						if (addDecis == "n")
						{
							break;
						}
						else if (addDecis == "y")
						{
							continue;
						}
					}
					
					
					
					// if user picks item F
			 		else if (ItemChoose == "f")
				 	{
				 		ItemName = "Doritos";
				 		ItemPrice = 120;
				 		ItemsOnCart[i] = ItemName;
				 		PricesOnCart[i] = ItemPrice;
						while (true)
						{
						cout << "\t\t" << "Quantity: ";
						cin >> Quantity;
						QuantityOnCart[i] = Quantity;
							if (cin.fail())
							{
								cout << "\t\t" << "User can only enter numbers" << endl;	
								cin.clear(); // clear input buffer to restore cin to a usable state
	        					cin.ignore(INT_MAX, '\n'); // ignore last input
							}
							else
							{
								break;
							}
						}
						cout << "\t\t" << "Add Another Item? Y/N: ";
						cin >> addDecis;
						transform(addDecis.begin(),addDecis.end(),addDecis.begin(), ::tolower);
						if (addDecis == "n")
						{
							break;
						}
						else if (addDecis == "y")
						{
							continue;
						}
					}
					else
					{
					cout << "\t\t" << "Invalid Input" << endl;
					continue;
					}
				}
				
				
				//  if they are finished in ordering their desired items, the program will show what they have ordered includind its total
				system("cls");
				// Multiply both the Base Item Price and Quantity to find every final price of the item per quantity.
				for (int i = 0;i<10;i++)
				{
					FinalPrices[i] = PricesOnCart[i] * QuantityOnCart[i];
				}
				
				// Displays the all the ordered items including Item Name,Quantity,Final Item Price(Base Price multiplied by quantity)
				cout << "\t\t"<< "The Customer has ordered the following items: " << endl;
				for(int i = 0;i<10;i++)
				{
					cout << "\t\t" << ItemsOnCart[i] << " - " << "Qty: " << QuantityOnCart[i] << " - "<< FinalPrices[i] << " Php" << endl; 
				}
				for (int i = 0;i<10;i++)
					{
					Total += FinalPrices[i];
					}
				cout << "\n\t\t" << "Total: " << Total;
			    
			    
			    // Customer is asked if they are ready for item checkout
				while(true)
			{
				cout << "\n\t\t" << "Ready for Checkout? Y/N : ";
				cin >> FinalDecis;
				// User entry makes it the letter lowercase
				transform(FinalDecis.begin(),FinalDecis.end(),FinalDecis.begin(), ::tolower);
				if (FinalDecis == "y")
				{
					// Customer will be asked if the person is a Senior Citizen
					cout <<"\t\t"<< "Senior Citizen Discount? Y/N : ";
					cin >> DiscountDecis; 
					if (DiscountDecis == "y")
					{
						Discount = Total * .20;
						DiscountAcquired = Total - Discount;
						cout << "\t\t"<< "20% Discount received, price is now: " << DiscountAcquired << endl;
						while (true)
						{
							cout <<"\t\t"<< "Receive Money: ";
							cin >> MoneyInput;
							if (MoneyInput >= DiscountAcquired)
							{
							 Change = MoneyInput - DiscountAcquired;
							 cout << "\t\t" << "Your total change is " << Change << "\n";
							 TotalSales += DiscountAcquired;
							 break;
							}
							else if (cin.fail())
							{
									cin.clear(); // clear input buffer to restore cin to a usable state
        							cin.ignore(INT_MAX, '\n'); // ignore last input
        					}
								
							else 
							{
								cout << "\t\t" << "Money is not enough" << endl << "\n";
								continue;
							}
						}
						break;
						
					}
					else if(DiscountDecis == "n")
					{
						cout << "\t\t" << "PWD Discount? Y/N: ";
						cin >> PWDDiscount;
						if (PWDDiscount == "y")
						{
							Discount = Total * .12;
							DiscountAcquired = Total - Discount;
							cout << "\t\t"<< "12% Discount received, price is now: " << DiscountAcquired << endl;
							while (true)
							{
								cout << "\t\t" << "Receive Money: ";
								cin >> MoneyInput;
								if (MoneyInput >= DiscountAcquired)
								{
								 Change = MoneyInput - DiscountAcquired;
								 cout << "\t\t" << "Your total change is " << Change;
								 TotalSales += DiscountAcquired;
								 break;
								}
								else if (cin.fail())
								{
									cin.clear(); // clear input buffer to restore cin to a usable state
        							cin.ignore(INT_MAX, '\n'); // ignore last input
									cout << "\t\t" << "User can only put numbers" << endl;
								}
								else 
								{
									cout << "\t\t" << "Money is not enough" << endl;
									continue;
								}
							}
							break;
						}
						else if (PWDDiscount == "n")
						{
							Discount = Total * 0.0;
							DiscountAcquired = Total - Discount;
							while (true)
							{
								cout << "\t\t" << "Receive Money: ";
								cin >> MoneyInput;
								if (MoneyInput >= DiscountAcquired)
								{
								 Change = MoneyInput - DiscountAcquired;
								 cout << "\t\t" << "Your total change is " << Change;
								 TotalSales += DiscountAcquired;
								 break;
								}
								else if (cin.fail())
								{
									cin.clear(); // clear input buffer to restore cin to a usable state
        							cin.ignore(INT_MAX, '\n'); // ignore last input
							    }
								else 
								{
									cout << "\t\t" << "Money is not enough" << endl;
									continue;
								}
							}
							break;
						}
						else
						{
							cout << "\t\t" << "Invalid Input" << endl;
							continue;
						}
					}

				}
				else if (FinalDecis == "n")
					{
						cout << "\t\t" << "Transaction Cancelled!" << endl;
						break;
					}
				else
					{
					cout << "\t\t" << "Invalid Input" << endl;
					continue;	
					}
			}
		 }
	 }
}

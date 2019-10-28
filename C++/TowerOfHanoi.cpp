#include<iostream>
using namespace std;

void TowerOfHanoi(int n,char source_rod,char spare_rod,char destination_rod)
{
	if(n==1)
	{
		cout<<"Move Disk "<<n<<" from "<<source_rod<<" to "<<destination_rod<<endl;
		return;
	}
	
	TowerOfHanoi(n-1,source_rod,destination_rod,spare_rod);
	cout<<"Move Disk "<<n<<" from "<<source_rod<<" to "<<destination_rod<<endl;
	TowerOfHanoi(n-1,spare_rod,source_rod,destination_rod);
}
int main()
{
	int n;
	cout << "Enter number of Disks: ";
	cin >> n;
	// A = source rod, B = Spare Rod, C = Destination rod;
	TowerOfHanoi(n,'A','B','C');
}

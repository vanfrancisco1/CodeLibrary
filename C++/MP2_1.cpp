#include<iostream>
using namespace std;
int main()
{
	double Prel = 0.2,mid = 0.15,Semi = 0.25,Final = 0.25,AddPer = 0.15,
	PrelG,MidG,SemiG,FinalG,ProcessPrel,ProcessMid,ProcessSemi,ProcessFinal,ProcessAdd,FinalProcess;
	cout << "Input Prelim Grade" << endl;
	cin >> PrelG;
    cout << "Input Midterm Grade" << endl;
    cin >> MidG;
    cout << "Input Semifinal Grade" << endl;
    cin >> SemiG;
    cout << "Input Final Grade" << endl;
    cin >> FinalG;
    
    ProcessPrel = PrelG * Prel;
    ProcessMid =  MidG * mid;
    ProcessSemi = SemiG * Semi;
    ProcessFinal = FinalG * Final;
    
    ProcessAdd = ProcessFinal + ProcessSemi + ProcessMid + ProcessPrel * AddPer;
    FinalProcess = ProcessAdd / 4;
    cout << FinalProcess;
    
	
}

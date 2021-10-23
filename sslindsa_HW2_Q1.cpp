/***********************************************
** Author : Sebastian Lindsay
** Program : hw2, q1
** Date Created : 10/14/2021
** Date Last Modified : 10/22/2021
** Usage
**
** Problem:
Create and display a checkbook that doubles once check array has been filled.
************************************************/
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;


struct Check {

    int CheckNum;
    string CheckMemo;
    float CheckAmount;


};

class Checkbook{
public:
    Checkbook():balance(0), numOfChecks(0), checkBookSize(4){};
    Checkbook(float balance): numOfChecks(0), checkBookSize(2){};
    Checkbook(const Checkbook &obj);
    ~Checkbook(){};
    const void set(float balance, int numOfChecks, int checkBookSize, float lastDeposit);
    const void getBalance();
    const void getNumOfChecks();
    const void getCheckBookSize();
    const void getLastDeposit();
    const void deposit(float balance);
    bool writeCheck( Check CheckAmount );
    const void displayChecks();


private:
    float balance;
    int numOfChecks;
    int checkBookSize;
    Check * chkPtr;
    float lastDeposit;
    //Check checks[checkBookSize];
    Check checks[2];  //supposed to be a dynamic array
};

int main(){

Checkbook CheckBook1();

for (int i=0; i<2; i++)
    CheckBook1.writeCheck();



    Checkbook1.displayChecks();



    return 0;
}

void Checkbook::deposit(float balance){


}

bool Checkbook::writeCheck(Check CheckAmount) //function needs to be overloaded to compare CheckAmount to balance
{
    if (CheckAmount <= balance)
    {
        return true;
    }
    else{
        return false;
    }



}
void Checkbook::displayChecks(){ //iterate through check array starting from the most recent check
    int n;
cout << "Here are your checks: " << endl;
for (int n=numOfChecks-1; i>=0; n--) {


    cout << "Check #" << (n+1) << ": " << checks[n].checkMemo << endl;
    cout << checks [n].checkAmount << endl;

}





}

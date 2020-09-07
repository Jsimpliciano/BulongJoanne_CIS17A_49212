/* 
 * File:   main.cpp
 * Author: Joanne Bulong
 * Created on September 6,2020
 * Purpose:  Convert U.S dollar to Japanese Yen and to Euros
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions
float YenPerDollar=106.26, //1 US Dollar is 106.26 Yen
      EuroPerDollar=0.84;  //1 US Dollar is 0.84 Euros
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    float Dollar, //US Dollar
          Yen,    //Japan currency
          Euros;  //EU currency
    //Initialize Variables
          
    //Process or map Inputs to Outputs
    cout<<"Enter the amount in US dollars."<<endl;
    cin>>Dollar;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"\n";
   
    //Display Outputs
    cout<<Dollar<<" dollar(s) in Yen is "<<Dollar*YenPerDollar<<endl;
    cout<<Dollar<<" dollar(s) in Euro is "<<Dollar*EuroPerDollar<<endl;
    
    //Exit stage right!
    return 0;
}
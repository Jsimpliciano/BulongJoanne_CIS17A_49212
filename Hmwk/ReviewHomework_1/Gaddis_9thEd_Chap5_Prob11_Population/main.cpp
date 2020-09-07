/* 
 * File:   main.cpp
 * Author: Joanne Bulong
 * Created on September 6,2020
 * Purpose:  Predicts the size of a population of organisms
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    int orgnsm, //Starting amount of organisms
        days;   //Total number of days they will multiply
    float avgpop,   //Average population of the organism
          totpop;
    //Initialize Variables
          
    //Process or map Inputs to Outputs
        //While loop for starting amount. Number cannot be less than 2
        cout<<"Enter the starting amount of organisms."<<endl;
        cin>>orgnsm;
        while (orgnsm<2){
            cout<<"Starting number cannot be less than 2. "
                    "Please try again."<<endl;
            cin>>orgnsm;
        }
        //While loop for average daily population increase. Has to be positive
        cout<<"Enter the average daily population increase"
                " (as a percentage)."<<endl;
        cin>>avgpop;
        while (avgpop<0){
            cout<<"Average daily population must be positive."<<endl;
            cin>>avgpop;
        }
        //While loop for the number of days
        cout<<"Enter the number of days they will multiply."<<endl;
        cin>>days;
        while (days<1){
            cout<<"The number of days must be 1 or higher."<<endl;
            cin>>days;
        }
  
    //Display Outputs
    cout<<"Day:"<<setw(15)<<"Organisms"<<endl;
        for(int i=1; i<=days;i++){
            orgnsm=orgnsm*(1+avgpop/100.0);
            cout<<setw(3)<<i<<setw(10)<<orgnsm<<endl;
        }
    //Exit stage right!
    return 0;
}
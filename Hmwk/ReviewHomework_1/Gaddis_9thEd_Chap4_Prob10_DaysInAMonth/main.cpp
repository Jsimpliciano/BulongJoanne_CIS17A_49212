/* 
 * File:   main.cpp
 * Author: Joanne Bulong
 * Created on September 6,2020
 * Purpose:  Used to determine the days in a month
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    int month,
        year;
    //Initialize Variables
          
    //Process or map Inputs to Outputs
    cout<<"Enter a month (1-12):"<<endl;
    cin>>month;
    if (month>12 || month<1){
        cout<<"Invalid Input. Try again."<<endl;
        return 0;
    }
    cout<<"Enter a year:"<<endl;
    cin>>year;
    
    //Switch case for months
    switch(month){
        case 1: cout<<"31 days."<<endl;
        break;
        case 2:
            //Leap year if year is divisible by 100 and 400
            if(year%100!=0){
            if(year%4==0)
                cout<<"29 days."<<endl;
            else cout<<"28 days."<<endl;
            }
            break;
        case 3: cout<<"31 days."<<endl;
        break;
        case 4: cout<<"30 days."<<endl;
        break;
        case 5: cout<<"31 days."<<endl;
        break;
        case 6: cout<<"30 days."<<endl;
        break;
        case 7: cout<<"31 days."<<endl;
        break;
        case 8: cout<<"31 days."<<endl;
        break;
        case 9: cout<<"30 days."<<endl;
        break;
        case 10: cout<<"31 days."<<endl;
        break;
        case 11: cout<<"30 days."<<endl;
        break;
        case 12: cout<<"31 days."<<endl;
        break;
    }
    //Display Outputs
    
    //Exit stage right!
    return 0;
}
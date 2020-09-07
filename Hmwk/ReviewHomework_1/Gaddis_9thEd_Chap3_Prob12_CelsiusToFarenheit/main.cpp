/* 
 * File:   main.cpp
 * Author: Joanne Bulong
 * Created on September 6,2020
 * Purpose:  Convert Celsius to Fahrenheit 
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
    float tempC, //Temperature in Celsius
          tempF; //Temperature in Fahrenheit 
    
    //Initialize Variables
   
    //Process or map Inputs to Outputs
    cout<<"Temperature conversion: Celsius to Fahrenheit."<<endl;
    cout<<"Enter temperature in Celsius."<<endl;
    cin>>tempC;
    tempF=(9.0/5.0*tempC)+32.0;
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<tempC<<" Degrees Celsius = "<<tempF<<" Degrees Fahrenheit."<<endl;
    //Display Outputs

    //Exit stage right!
    return 0;
}
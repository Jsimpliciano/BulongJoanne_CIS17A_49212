/* 
 * File:   main.cpp
 * Author: Joanne Bulong
 * Created on September 6,2020
 * Purpose:  Displays Fahrenheit temperature and their Celsius equivalents
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
float tempC(int);
//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
 
    //Initialize Variables
          
    //Process or map Inputs to Outputs
 
    //Display Outputs
    for(int i=0;i<=20;i++){
        cout<<i<<" degrees Fahrenheit is equivalent to "<<tempC(i)<<
                " degrees Celsius"<<endl;
    }
    //Exit stage right!
    return 0;
}
float tempC(int tempF){
    return 5.0/9.0*(tempF-32.0);
}
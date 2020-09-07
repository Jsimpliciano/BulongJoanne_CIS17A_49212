/* 
 * File:   main.cpp
 * Author: Joanne Bulong
 * Created on September 6,2020
 * Purpose:  Sorting a string array
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes
void strngsrt(string[],int);
bool binary(const string[],string,int);
//Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number seed
    
    //Declare Variable Data Types and Constants
    const int NUM_NAMES=20;
    string names[NUM_NAMES]={"Collins,Bill", "Smith,Bart", "Allen,Jim",
                             "Griffin,Jim", "Stamey,Marty", "Rose,Geri",
                             "Allison,Jeff", "Looney,Joe", "Wolfe,Bill",
                             "James,Jean","Weaver,Jim","Pore,Bob",
                             "Rutherford,Greg","Javens,Renee",
                             "Harrison,Rose","Setzer,Cathy",
                             "Pike,Gordon","Holland,Beth"};
    
    //Initialize Variables
    string findname;
    //Process or map Inputs to Outputs
    strngsrt(names,NUM_NAMES);
    cout<<"Enter the name to search"<<endl;
    cin>>findname;
    //Display Outputs
    if (binary(names,findname,NUM_NAMES))
        cout<<findname<<" found."<<endl;
    else cout<<findname<<" not found"<<endl;
    //Exit stage right!
    return 0;
}


void strngsrt(string names[],int size){
int beg,i;
string Name;
for (beg=0;beg<size-1;beg++){
    Name=names[beg];
    i=beg;
    for(int i=beg+1;i<size;i++){
        if(names[i]<Name){
            Name=names[i];
            Name=i;
        }
    }
    }
}

bool binary(const string names[],string search,int size){
    int first=0,
        mid,
        last=size-1;
    
    while(first<=last){
        mid=(first+last)/2;
        if(names[mid]==search){
            return true;
        }
        else if(names[mid]>search){
            last=mid-1;
        }
        else if(names[mid]<search){
            first=mid+1;
        }
    }
    return false;
}
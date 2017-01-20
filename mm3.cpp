//
//  main.cpp
//  mm3.cpp
//
//  Created by Ana Zeneli on 2/25/16.
//  Copyright © 2016 Ana Zeneli. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double stability_mm (double b);
void get_data (double a, double b);


int main()
{
    double a,b;//a=r b=x
    get_data(a,b);
    cout<<"The Stability Value:"<<stability_mm(b)<<endl;
    cout<<fixed<<setprecision(8)<<endl;

}

double stability_mm (double b)
{
    double a;
    a= -1000*log(b);
    cout<<a<<endl;
    return (b*(exp(-a/1000)))*((-a/1000)+1);
    
}

void get_data (double a, double b)
{
    cout<<"Enter the value of b:"<<endl;
    cin>>b;
}
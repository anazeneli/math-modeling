//
//  main.cpp
//  mm1.cpp
//
//  Created by Ana Zeneli on 2/25/16.
//  Copyright © 2016 Ana Zeneli. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

double formula(double b);

int main()
{
    double b;
    cout<<"enter b"<<endl;
    cin>>b;
    cout<<"Stability value is="<<formula(b)<<endl;

    return 0;
}

double formula(double b)
{
    double a;
    a= 1000*log(b);
    return b*exp(-a/1000)*((-a/1000)+1);

}
//  Binary Calculator EC4
//
//  Created by Mordechai Bronfin on 11/21/18.
//  Copyright © 2018 Mordechai Bronfin - Wayne State University CSC 3100. All rights reserved.
//

#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
#include <string.h>
#include <istream>
#include <cmath>
#include <locale>
#include <cctype>
#include <vector>
#include <exception>
#include <stdexcept>
#include <typeinfo>


using namespace std;


void menu();
void decimal_binary(int npt);
int binary_decimal(int npt);
void binary_addition();
void binary_subtraction();
void binary_multiplication();
void binary_division();
int npt1,npt2;


int main()
{
    int choice;
    
    cout<<endl<<"*********Binary Number Calculator*********"<<endl<<endl;
    
    while(1)
    {
        menu();
        cin>>choice;
        
        switch(choice)
        {
            case 1:
            {
                cout<<endl<<endl<<"...Subtraction..."<<endl<<endl<<"Input Two Binary Numbers"<<endl<<endl<<"First Number: ";
                cin>>npt1;
                cout<<endl<<endl<<"Second Number: ";
                cin>>npt2;
                cout<<endl<<endl<<npt1<<" - "<<npt2<<" = ";
                
                binary_addition();
                
                cout<<endl;
                
            }
                break;
                
            case 2:
            {
                cout<<endl<<endl<<"...Addition..."<<endl<<endl<<"Input Two Binary Numbers"<<endl<<endl<<"First Number: ";
                cin>>npt1;
                cout<<endl<<endl<<"Second Number: ";
                cin>>npt2;
                cout<<endl<<endl<<npt1<<" + "<<npt2<<" = ";
                
                binary_subtraction();
                
                cout<<endl;
            }
                break;
                
            case 3:
            {
            cout<<endl<<endl<<"...Multiplication..."<<endl<<endl<<"Input Two Binary Numbers"<<endl<<endl<<"First Number: ";
                cin>>npt1;
                cout<<endl<<endl<<"Second Number: ";
                cin>>npt2;
                cout<<endl<<endl<<npt1<<" * "<<npt2<<" = ";
                binary_multiplication();
                cout<<endl;
            }
                break;
                
            case 4:
            {
                cout<<endl<<endl<<"...Division..."<<endl<<endl<<"Input Two Binary Numbers"<<endl<<endl<<"First Number: ";
                cin>>npt1;
                cout<<endl<<endl<<"Second Number: ";
                cin>>npt2;
                cout<<endl<<endl<<npt1<<" - "<<npt2<<" = ";
                binary_division();
                
                cout<<endl;
            }
                break;
                
            case 5:
            {
                cout<<endl<<"Exiting Program..."<<endl<<endl;
                exit(0);
            }
                
            default:
                
                cout<<endl<<"...Invalid Selection..."<<endl;
                
        }
        
    }
    
    return 0;
}

void menu()
{
    cout<<endl<<"Select from the Following Options"<<endl<<endl<<"1 - Addition"<<endl<<endl<<"2 - Subtraction"<<endl<<endl<<"3 - Multiplication"<<endl<<endl<<"4 - Division"<<endl<<endl<<"5 - Exit Program"<<endl<<endl<<"Selection: ";
}


int binary_decimal(int npt)
{
    int decimal = 0,x = npt,y=1,z=x;
    
    while(z)
    {
        int ld=z%10;
        z=z/10;
        
        decimal+=ld*y;
        
        y=y*2;
    }
    
    return decimal;
}

void decimal_binary(int npt)
{
    int bin_number[10000];
    
    int i = 0;
    while(npt>0)
    {
        bin_number[i]=npt%2;
        npt=npt/2;
        i++;
    }
    
    for (int j = i - 1; j >= 0; j--)
        
        cout<<bin_number[j];
    
}

void binary_addition()
{
    int n1=binary_decimal(npt1), n2=binary_decimal(npt2), n3=n1+n2;
    
    decimal_binary(n3);
}

void binary_subtraction()
{
    int n1=binary_decimal(npt1), n2=binary_decimal(npt2), n3=n1-n2;
    
    decimal_binary(n3);

}

void binary_multiplication()
{
    int n1=binary_decimal(npt1), n2=binary_decimal(npt2), n3=n1*n2;
    
    decimal_binary(n3);
    
}

void binary_division()
{
    int n1=binary_decimal(npt1), n2=binary_decimal(npt2), n3=n1/n2;
    
    decimal_binary(n3);
    
}




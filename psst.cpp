#include "psst.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <cstring>

using namespace std;

psst::psst()
{
    //ctor
}

psst::~psst()
{
    //dtor
}
void psst::load()
{
    int i=0;
    string arr[100];
    string line;
    fstream myfile("top_passwords.txt");
    while (myfile.good())
    {
        getline(myfile, line);
        arr[i]=line;
        i++;
    }
}
void psst::sort()
{
    int j,i;
    string arr[100];
    string key;

    for (i=0; i<100; i++)
    {
        key = arr[i];
        j = i-1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }

        arr[j+1] = key;
    }
}
void psst::print()
{
    int i;
    fstream myfile;
    string arr[100];
    for (i=0; i<100; i++)
    {
        cout<<arr[i]<<endl;
    }

    myfile.close ();
}

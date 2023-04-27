#include <iostream>
#include <TROOT.h>
#include<stdio.h>
#include<stdlib.h>
#include "Read.h"

using namespace std;

Int_t main(int argc,char *argv[])
{
  
    Temperature temp;
    temp.ReadDat(argv[1],argv[2]);
    temp.TempAna(argv[3],argv[2]);

    return 0;
}

 

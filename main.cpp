#include "psst.h"
#include <iostream>


using namespace std;

int main()
{
    psst pass;
    pass.load();
    pass.sort();
    pass.print();

    return 0;
}

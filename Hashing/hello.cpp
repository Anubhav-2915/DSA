#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    string baseIP = "211.17.180.";
    int originalPrefix = 24;
    int subnetsRequired = 32;
    int subnetBits = log2(subnetsRequired);
    int newPrefix = originalPrefix + subnetBits;
    int mask[4] = {255, 255, 255, 0};
    int remainingBits = newPrefix - 24;
    for (int i = 0; i < remainingBits; i++)
    {
        mask[3] |= (1 << (7 - i));
    }
    int hostBits = 32 - newPrefix;
    int addressesPerSubnet = pow(2, hostBits);
    int step = addressesPerSubnet;
    cout << "Subnet Mask: ";
    for (int i = 0; i < 4; i++)
    {
        cout << mask[i];
        if (i != 3)
            cout << ".";
    }
    cout << endl;
    cout << "Addresses per subnet: " << addressesPerSubnet << endl;
    int subnet1_start = 0;
    intsubnet1_end = subnet1_start + step - 1;
    cout << "Subnet 1:" << endl;
    cout << "First Address: " << baseIP << subnet1_start << endl;
    cout << "Last Address: " << baseIP << subnet1_end << endl;
    intsubnet32_start = (subnetsRequired - 1) * step;
    int subnet32_end = subnet32_start + step - 1;
    cout << "Subnet 32:" << endl;
    cout << "First Address: " << baseIP << subnet32_start << endl;
    cout << "Last Address: " << baseIP << subnet32_end << endl;
    return 0;
}
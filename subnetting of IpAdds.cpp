#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int ip_address, subnet_mask, subnet_bits, host_bits;

    cout << "Enter the IP address: ";
    cin >> ip_address;

    cout << "Enter the subnet mask: ";
    cin >> subnet_mask;

    subnet_bits = 32 - (int) log2(~subnet_mask);
    host_bits = 32 - subnet_bits;

    cout << "Number of subnet bits: " << subnet_bits << endl;
    cout << "Number of host bits: " << host_bits << endl;

    return 0;
}

#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    int insert;
    cin >> insert;
    std::string binary = std::bitset<8>(insert).to_string(); //to binary
    std::cout << binary << "\n";

    unsigned long decimal = std::bitset<8>(binary).to_ulong();
    std::cout << decimal << "\n";
    return 0;
}
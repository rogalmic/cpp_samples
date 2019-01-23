#include <iostream>
#include <fstream>
#include <limits>
#include <vector>
#include <algorithm>
using namespace std;

void sort_test()
{
    vector<int> vect({445, 10, 15, 20, 20, 23, 42, 45}); 

    std::cout << "Before: ";

    for_each(vect.begin(), vect.end(), [](auto& v) {std::cout << v << ' ';});
    
    std::cout << endl;

    sort(vect.begin(), vect.end()); 

    std::cout << "After: ";

    for_each(vect.begin(), vect.end(), [](auto& v) {std::cout << v << ' ';});

    std::cout << endl;
}

int main(int argc, char *const argv[], char *const envp[])
{
    sort_test();
}

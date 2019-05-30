#include <iostream>
#include <fstream>
#include <limits>
#include <vector>
#include <algorithm>
#include <thread>
using namespace std;

void sort_test();
void thread_test();

int main(int argc, char *const argv[], char *const envp[])
{
    sort_test();
    thread_test();
}

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

void thread_test()
{
    const int num_threads = 10;

    std::thread t[num_threads];

    for (int i = 0; i < num_threads; ++i)
    {
        t[i] = std::thread([](int tid) {
            std::cout << "Launched by thread " << tid << std::endl;
        }, i);
    }

    std::cout << "Launched" << std::endl;

    for (int i = 0; i < num_threads; ++i)
    {
        t[i].join();
    }
}

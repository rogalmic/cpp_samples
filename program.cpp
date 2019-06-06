#include <iostream>
#include <fstream>
#include <limits>
#include <vector>
#include <algorithm>
#include <thread>
#include <mutex>
#include <chrono>

void sort_test();
void thread_test();

int main(int argc, char *const argv[], char *const envp[])
{
    sort_test();
    thread_test();
}

void sort_test()
{
    std::vector<int> vect({445, 10, 15, 20, 20, 23, 42, 45}); 

    std::cout << "Before: ";

    for_each(vect.begin(), vect.end(), [](auto& v) {std::cout << v << ' ';});
    
    std::cout << std::endl;

    sort(vect.begin(), vect.end()); 

    std::cout << "After: ";

    for_each(vect.begin(), vect.end(), [](auto& v) {std::cout << v << ' ';});

    std::cout << std::endl;
}

void thread_test()
{
    const int num_threads = 10;

    std::thread t[num_threads];
    std::mutex mutex;    

    for (int i = 0; i < num_threads; ++i)
    {
        t[i] = std::thread([&](int tid) {
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
            std::lock_guard<std::mutex> guard(mutex);
            std::cout << "Launched by thread " << tid << std::endl;
        }, i);
    }

    std::cout << "Launched" << std::endl;

    for (int i = 0; i < num_threads; ++i)
    {
        t[i].join();
    }

    std::cout << "Joined" << std::endl;
}

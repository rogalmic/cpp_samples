#include <iostream>
#include <limits>
#include "addressbook_record.hpp"
#include "addressbook.hpp"
using namespace std;

int main(int argc, char *const argv[], char *const envp[])
{
    addressbook book;
    auto shared = make_shared<addressbook_record>();
    book.records.push_back(shared);

    char choice;

    while (true)
    {
        cout << "Give me choice: ";
        cin >> choice;
        
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (choice != '\0')
        {
            cout << endl << "Choice is " << choice << endl;
        }
    }

    for (int i = 0;; i++)
    {
        if (envp[i] == NULL)
        {
            break;
        }

        cout << envp[i] << endl;
    }

    cout << "Give me: ";
    int val;
    cin >> val;
    cout << "Given: " << val;
    cin.get();
    cin.get();
    // cout << hex;
    // cout << 123;
}
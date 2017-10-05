#pragma once
#include <iostream>
#include <ctime>
using namespace std;

class addressbook_record {
public:
   string first_name;
   string last_name;
   string address;
   string phone_number;
   time_t birthday;   
};
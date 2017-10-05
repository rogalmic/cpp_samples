#pragma once
#include <iostream>
#include <list>
#include <memory>
#include "addressbook_record.hpp"
using namespace std;

class addressbook {
public:
   list<shared_ptr<addressbook_record>> records;
  
};
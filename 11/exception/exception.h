#ifndef EMPTY_STACK_EXCEPTION_H_
#define EMPTY_STACK_EXCEPTION_H_

#include <stdexcept>
#include <string>

using namespace std;

class empty_stack_exception : public range_error {
 public:
  empty_stack_exception(string info) : range_error{info} {};
};

#endif
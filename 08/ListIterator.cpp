#include "ListIterator.h"

using namespace fhdo_pk2;

ListIterator::ListIterator(LinkedList::nodeptr head) : current{head} {};

bool ListIterator::hasNext() {
  if (current != nullptr) return true;
  return false;
}

const char* ListIterator::next() {
  const char* data = current->data;
  current = current->next;
  return data;
}
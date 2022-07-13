#ifndef LISTITERCPP
#define LISTITERCPP

#include "ListIterator.h"

using namespace fhdo_pk2;

template <typename T>
ListIterator<T>::ListIterator(node<T>* head) : current{head} {};

template <typename T>
bool ListIterator<T>::hasNext() {
  if (current != nullptr) return true;
  return false;
}

template <typename T>
const T* ListIterator<T>::next() {
  const T* thing = current->thing;
  current = current->next;
  return thing;
}

#endif
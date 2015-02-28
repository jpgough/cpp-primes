#include "prime.h"

bool Prime::isPrime(int number) {
  if(number == 2) {
    return true;
  } else if(number <= 1 || number % 2 == 0) {
    return false;
  } else {
    for(int i=3; i < number; ++i) {
      if(number % i == 0) {
        return false;
      }
    }
    return true;
  }
}

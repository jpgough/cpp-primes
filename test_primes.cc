#include "gtest/gtest.h"
#include "prime.h"

Prime prime;

TEST(PrimeTest, one_is_false) {
  ASSERT_FALSE(prime.isPrime(1));
}

TEST(PrimeTest, two_is_prime) {
  ASSERT_TRUE(prime.isPrime(2));
}

TEST(PrimeTest, four_is_not_prime) {
  ASSERT_FALSE(prime.isPrime(4));
}

TEST(PrimeTest, five_is_prime) {
  ASSERT_TRUE(prime.isPrime(5));
}

TEST(PrimeTest, nine_is_not_prime) {
  ASSERT_FALSE(prime.isPrime(9));
}

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "AList.h"
#include <cstdlib>
#include <doctest.h>

#define SIZE 10

TEST_CASE("AList") {
  ds::AList<int> L;

  // randomly add SIZE ints to the array
  int nums[SIZE];
  srand(time(0)); // setting the seed for rand()
  for (int i = 0; i < SIZE; i++) {
    nums[i] = rand() % 20 + 1; // generating random numbers by rand()
    L.addLast(nums[i]);
  }

  SUBCASE("copy constructor") {
    ds::AList<int> *K = new ds::AList<int>(L);
    CHECK(L.size() == K->size());
    CHECK(K->getLast() == nums[SIZE - 1]);
    delete K; // this should not also delete L
  }

  SUBCASE("addFirst and getFirst") {
    L.addFirst(123);
    L.addFirst(234);
    CHECK(L.getFirst() == 234);
    CHECK(L.get(2) == nums[0]);
  }

  SUBCASE("removeFirst") {
    int x = L.removeFirst();
    CHECK(x == nums[0]);
    CHECK(L.getLast() == nums[SIZE - 1]);
  }
}
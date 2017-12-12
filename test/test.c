#include "../../../my_libs/unity/src/unity.h"
#include "../src/calc_input.h"

// If wrong input return true
void test_wrong_input() {
  float num1 = 1, num2 = 0;
  TEST_ASSERT_TRUE(n) 
}

// If right input return true
void test_right_input() {
  float num1 = 10, num2 = 10;
  TEST_ASSERT_FALSE(condition) 
}


int main() {
  UNITY_BEGIN();
  RUN_TEST(test_wrong_input);
  RUN_TEST(test_right_input);
  return UNITY_END();
}

  

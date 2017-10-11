#include <iostream>
#include <gtest/gtest.h>
#include <stack>
#include <string>

using namespace std;

string infix2postfix(string infix) {
  // TODO insert your code here
  return infix;
}

int main() {
  EXPECT_STREQ(infix2postfix("2+3").c_str(), "23+");
  EXPECT_STREQ(infix2postfix("a*b").c_str(), "ab*");
  EXPECT_STREQ(infix2postfix("2+3*5").c_str(), "235*+");
  EXPECT_STREQ(infix2postfix("A+B*C+D").c_str(), "ABC*+D+");
  EXPECT_STREQ(infix2postfix("(A+B)*C-(D-E)*(F+G)").c_str(), "AB+C*DE-FG+*-");
  cout << infix2postfix("(A+B)*C-(D-E)*(F+G)").c_str() << endl;
}


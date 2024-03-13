//============================================================================
// LAB 3:       CSC-155 C++ Computer Science 1
//			    Dept. of Computer of science
//              Oakton Community College
//
// Purpose      Solution to Programming Exercise 5-6 (p.341)
//			    C++ Programming 8e, by D.S.. Malik,
//			    Cengage Learning 2018
//
// Author: Mike Mordec
// Date: 10/1/2022
//
// File Name: pe5_6.cpp
//
//============================================================================

#include <iostream>
using namespace std;

int main() {

  int i, n;
  bool is_prime = true;

  cout << "Enter a positive integer greater than 1: ";
  cin >> n;

  // 0 and 1 are not prime numbers
  if (n == 0 || n == 1) {
    is_prime = false;
  }

  // loop to check if n is prime
  for (i = 2; i <= n/2; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }

  cout << "The number you entered is: " <<  n << endl;
  if(is_prime)
  {
	  cout << "It is a prime number" << endl;
  }
  else
  {
	  cout << "It is not a prime number" << endl;
  }

}

// Copyright (c) 2020 Tong Gong All rights reserved
//
// Created by Tong Gong
// Created on November 2020
// This is a program that asks the user for 2 numbers
// and then adds the 2 number together.
// cpplint ./helloWorld.cpp 是style check 的指令


#include <iostream>
#include <cmath>

int main() {
  // This function calculate the cost of pizza.
  float number1;
  float number2;
  float answer;

  // input
  std::cout << "Enter the first number" << std::endl;
  std::cin >> number1;
  std::cout << "Enter the second number" << std::endl;
  std::cin >> number2;

  // process
  answer = number1 + number2;

  // output
  std::cout << "" << std::endl;
  std::cout << (number1) << "+" << (number2) << "=" << (answer) << std::endl;
}

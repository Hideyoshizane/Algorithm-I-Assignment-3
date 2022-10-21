#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

//Functions

  //Start function
  void StartVariable(int& lines, int& columns,vector<vector<unsigned long long>>& matrix);

  //Main function
  int FindIndex(vector<vector<unsigned long long>>& matrix, int line, int value);
  void MaxPath(vector<vector<unsigned long long>>& matrix, vector<int>& path, int lines, int columns);

  //Print function
  void PrintPath(vector<int>& path);
#endif // FUNCTIONS_H
#pragma once

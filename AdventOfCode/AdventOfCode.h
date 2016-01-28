#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <set>
#include "md5.h"

using namespace std;

int DetermineFloor(string input);
int DetermineFirstBasementFloorPosition(string input);
int TotalWrappingPaperArea(string filename);
int WrappingPaperArea(int l, int w, int h);
int TotalRibbonLength(string filename);
int RibbonLength(int l, int w, int h);
vector<string> &split(const std::string &s, char delim, vector<string> &elems);
int minProduct(int a, int b, int c);
int minSum(int a, int b, int c);
int VisitedHouseCount(string filename);
int VisitedHouseCounts(string filename);
string SetNewCoordinates(int &x, int &y, const char c);
int GenerateHash(string input, int zeroes);
int CountNiceStrings(string filename);
int CountNiceStrings(const string filename);
bool IsNiceString(const string s);
bool IsBadDuo(const char c1, const char c2);
bool IsVowel(const char c);
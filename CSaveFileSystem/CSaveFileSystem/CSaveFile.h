#pragma once
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;
class CSaveFile
{
	string FileName;
public:
	//Default constructor
	CSaveFile(string filename = "file");
	//SET and GET functions
	string GetFileName();
	void SetFileName(string filename);
	//Other functions
	//WRITE
	//READ
};
#include "CSaveFile.h"

CSaveFile::CSaveFile(string filename)
{
	this->FileName = filename;
}

string CSaveFile::GetFileName()
{
	return this->FileName;
}

void CSaveFile::SetFileName(string filename)
{
	this->FileName = filename;
}

#ifndef AUDIODETECTION_HPP
#define AUDIODETECTION_HPP

#include "wavstructure.h"

#include <string>
#include <fstream>

using std::string;
using std::fstream;

class AudioDetection
{
public:
    AudioDetection();
    ~AudioDetection();
    int getFileSize(FILE *inFile); 
    int getNumberOfBeaps(FILE *inFile);

protected:

private:

};
#endif
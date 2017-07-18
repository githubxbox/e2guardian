// StoryBoard class 

// For all support, instructions and copyright go to:
// http://e2guardian.org/
// Released under the GPL v2, with the OpenSSL exception described in the README file.

#ifndef __HPP_SB
#define __HPP_SB

// INLCUDES

#include <vector>
#include <deque>
#include <map>
#include <string>
#include "String.hpp"
#include "RegExp.hpp"
#include "SBFunction.hpp"
#include "ListMeta.hpp"

// #include "NaughtyFilter.hpp"

//#ifndef __HPP_SB

class NaughtyFilter;

// DECLARATIONS

class StoryBoard
{
 private:
    unsigned int entry1 = 0;
    unsigned int entry2 = 0;

  public:
    int items;

    int fnt_cnt;
    ListMeta* LMeta;

    std::vector<SBFunction> funct_vec;

    StoryBoard();
    ~StoryBoard();

    void reset();

   bool readFile(const char *filename, ListMeta & LMeta, bool is_top = true);
   unsigned int getFunctID(String &fname);

    bool runFunct(String &fname, NaughtyFilter &cm);
    bool runFunct(unsigned int fID, NaughtyFilter &cm);
    bool runFunctEntry1(NaughtyFilter &cm);
    bool runFunctEntry2(NaughtyFilter &cm);
    bool setEntry1(String fname);
    bool setEntry2(String fname);

};

//#endif
#define __HPP_SB
#endif
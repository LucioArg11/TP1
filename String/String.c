#include "String.h"

int tolower(int ch)
{
    if(ch>=65 && ch<=90)
        return ch+32;
    return 0;
}

int toupper(int ch)
{
    if(ch>=97 && ch<=122)
        return ch-32;
    return 0;
}

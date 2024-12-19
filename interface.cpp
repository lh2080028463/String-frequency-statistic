#include"interface.h"


bool suit(QChar a)
{
    if(a<(QChar)0||a>(QChar)255)return true;
    if(a>='a'&&a<='z')return true;
    if(a>='A'&&a<='Z')return true;
    return false;
}

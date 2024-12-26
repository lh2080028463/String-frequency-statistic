#include"interface.h"


bool suit(QChar a)
{
    if(a>='0'&&a<='9')return true;
    if(a>='a'&&a<='z')return true;
    if(a>='A'&&a<='Z')return true;
    if(a=='\'')return  true;
    if(a.unicode()>=0x4E00&&a.unicode()<=0x9FA5)return true;
    return false;
}

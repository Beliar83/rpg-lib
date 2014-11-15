//---------------------------------------------------------------------------
#include "AttributesClass.h"
using namespace std;
namespace RPGCls
{
namespace AttributesCls
{

//---------------------------------------------------------------------------
int  Attributes::GetMaxTP()
{
 return fKon * (10/3);
}
//---------------------------------------------------------------------------
int  Attributes::GetTP()
{
 return fTP;
}
//---------------------------------------------------------------------------

void  Attributes::SetTP(int value)
{
 fTP = value;
}
//---------------------------------------------------------------------------
int Attributes::GetKon()
{
 return fKon;
}
//---------------------------------------------------------------------------
void Attributes::SetKon(int value)
{
 fKon=value;
}
//---------------------------------------------------------------------------
int Attributes::GetStr()
{
 return fStr;
}
//void---------------------------------------------------------------------------
void Attributes::SetStr(int value)
{
 fStr=value;
}
//---------------------------------------------------------------------------
int Attributes::GetDex()
{
 return fDex;
}
//---------------------------------------------------------------------------
void Attributes::SetDex(int value)
{
 fDex=value;
}
//---------------------------------------------------------------------------
int Attributes::GetInt()
{
 return fInt;
}
//---------------------------------------------------------------------------
void Attributes::SetInt(int value)
{
 fInt=value;
}
//---------------------------------------------------------------------------
int Attributes::GetMaxMP()
{
 return fInt * (3/2);
}
//---------------------------------------------------------------------------
int Attributes::GetMP()
{
 return fMP;
}
//---------------------------------------------------------------------------
void Attributes::SetMP(int value)
{
 fMP=value;
}
//---------------------------------------------------------------------------
Attributes::Attributes()
{
 fKon=0;
 fStr=0;
 fDex=0;
 fInt=0;

 fTP=0;
 fMP=0;
}
}//Attributes
}//RPGCls
//---------------------------------------------------------------------------
#pragma package(smart_init)




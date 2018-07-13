#include <iostream>
#include "NamedParamter.hpp"    // キーワード引数


//----------------------------------------
// Named Paramter
//----------------------------------------
namespace Arg
{
	NP_MAKE_NAMED_PARAMETER();
	NP_MAKE_NAMED_PARAMETER();
}


//--------------------------------------------------------------------------------
// Main
//--------------------------------------------------------------------------------
int main()
{
  int aData=100, *aPointer=&aData;

  std::cout << "Hello, World!\n";
  std::cout << "aData=" << aData << " : aPointer=" << aPointer << "\n";
  std::cout << " &aPointer=" << &aPointer << "\n";
  return 0;
}

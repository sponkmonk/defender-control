#pragma once
#include <iostream>
#include <Windows.h>

#define _WIN32_DCOM
#include <comdef.h>
#include <Wbemidl.h>
#pragma comment(lib, "wbemuuid.lib")

namespace wmic
{
  // function to test getting executing a command
  //
  bool test_exec(BOOL toggle);

  class helper
  {
    int last_error;
    HRESULT hres;
    IWbemServices* service_ptr;
    IWbemLocator* loc_ptr;


  public:
    helper(std::string wnamespace, std::string wclass);
    ~helper();
  };
}



// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_management_PersistentMBean__
#define __javax_management_PersistentMBean__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace javax
  {
    namespace management
    {
        class PersistentMBean;
    }
  }
}

class javax::management::PersistentMBean : public ::java::lang::Object
{

public:
  virtual void load() = 0;
  virtual void store() = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __javax_management_PersistentMBean__


// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_security_prng_EntropySource__
#define __gnu_java_security_prng_EntropySource__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace security
      {
        namespace prng
        {
            class EntropySource;
        }
      }
    }
  }
}

class gnu::java::security::prng::EntropySource : public ::java::lang::Object
{

public:
  virtual jdouble quality() = 0;
  virtual JArray< jbyte > * nextBytes() = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __gnu_java_security_prng_EntropySource__

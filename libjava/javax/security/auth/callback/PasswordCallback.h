
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_security_auth_callback_PasswordCallback__
#define __javax_security_auth_callback_PasswordCallback__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace security
    {
      namespace auth
      {
        namespace callback
        {
            class PasswordCallback;
        }
      }
    }
  }
}

class javax::security::auth::callback::PasswordCallback : public ::java::lang::Object
{

public:
  PasswordCallback(::java::lang::String *, jboolean);
  virtual ::java::lang::String * getPrompt();
  virtual jboolean isEchoOn();
  virtual void setPassword(JArray< jchar > *);
  virtual JArray< jchar > * getPassword();
  virtual void clearPassword();
private:
  void setPrompt(::java::lang::String *);
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::lang::Object)))) prompt;
  jboolean echoOn;
  JArray< jchar > * inputPassword;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_security_auth_callback_PasswordCallback__


// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_rmi_CORBA_StubDelegateImpl__
#define __gnu_javax_rmi_CORBA_StubDelegateImpl__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace rmi
      {
        namespace CORBA
        {
            class StubDelegateImpl;
        }
      }
    }
  }
  namespace javax
  {
    namespace rmi
    {
      namespace CORBA
      {
          class Stub;
          class Tie;
      }
    }
  }
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class ORB;
      }
      namespace PortableServer
      {
          class POA;
      }
    }
  }
}

class gnu::javax::rmi::CORBA::StubDelegateImpl : public ::java::lang::Object
{

public:
  StubDelegateImpl();
  virtual void connect(::javax::rmi::CORBA::Stub *, ::org::omg::CORBA::ORB *);
  static void connect(::javax::rmi::CORBA::Stub *, ::org::omg::CORBA::ORB *, ::org::omg::PortableServer::POA *);
  static ::javax::rmi::CORBA::Tie * getTieFromStub(::java::lang::Object *);
  virtual jboolean equals(::javax::rmi::CORBA::Stub *, ::java::lang::Object *);
  virtual jint hashCode(::javax::rmi::CORBA::Stub *);
  virtual ::java::lang::String * toString(::javax::rmi::CORBA::Stub *);
  virtual void readObject(::javax::rmi::CORBA::Stub *, ::java::io::ObjectInputStream *);
  virtual void readObject(::javax::rmi::CORBA::Stub *, ::java::io::ObjectInputStream *, ::org::omg::CORBA::ORB *);
  virtual void writeObject(::javax::rmi::CORBA::Stub *, ::java::io::ObjectOutputStream *);
  virtual void writeObject(::javax::rmi::CORBA::Stub *, ::java::io::ObjectOutputStream *, ::org::omg::CORBA::ORB *);
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_rmi_CORBA_StubDelegateImpl__

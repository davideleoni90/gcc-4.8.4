
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_awt_peer_qt_QtRepaintThread$RepaintComponent__
#define __gnu_java_awt_peer_qt_QtRepaintThread$RepaintComponent__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace awt
      {
        namespace peer
        {
          namespace qt
          {
              class QtComponentPeer;
              class QtRepaintThread$RepaintComponent;
          }
        }
      }
    }
  }
}

class gnu::java::awt::peer::qt::QtRepaintThread$RepaintComponent : public ::java::lang::Object
{

public:
  QtRepaintThread$RepaintComponent(::gnu::java::awt::peer::qt::QtComponentPeer *);
  QtRepaintThread$RepaintComponent(::gnu::java::awt::peer::qt::QtComponentPeer *, jint, jint, jint, jint);
  ::gnu::java::awt::peer::qt::QtComponentPeer * __attribute__((aligned(__alignof__( ::java::lang::Object)))) curr;
  ::gnu::java::awt::peer::qt::QtRepaintThread$RepaintComponent * next;
  jboolean paintAll;
  jint x;
  jint y;
  jint w;
  jint h;
  static ::java::lang::Class class$;
};

#endif // __gnu_java_awt_peer_qt_QtRepaintThread$RepaintComponent__


// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_nio_channels_DatagramChannel__
#define __java_nio_channels_DatagramChannel__

#pragma interface

#include <java/nio/channels/spi/AbstractSelectableChannel.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace net
    {
        class DatagramSocket;
        class SocketAddress;
    }
    namespace nio
    {
        class ByteBuffer;
      namespace channels
      {
          class DatagramChannel;
        namespace spi
        {
            class SelectorProvider;
        }
      }
    }
  }
}

class java::nio::channels::DatagramChannel : public ::java::nio::channels::spi::AbstractSelectableChannel
{

public: // actually protected
  DatagramChannel(::java::nio::channels::spi::SelectorProvider *);
public:
  static ::java::nio::channels::DatagramChannel * open();
  virtual jlong read(JArray< ::java::nio::ByteBuffer * > *);
  virtual jlong write(JArray< ::java::nio::ByteBuffer * > *);
  virtual ::java::nio::channels::DatagramChannel * connect(::java::net::SocketAddress *) = 0;
  virtual ::java::nio::channels::DatagramChannel * disconnect() = 0;
  virtual jboolean isConnected() = 0;
  virtual jint read(::java::nio::ByteBuffer *) = 0;
  virtual jlong read(JArray< ::java::nio::ByteBuffer * > *, jint, jint) = 0;
  virtual ::java::net::SocketAddress * receive(::java::nio::ByteBuffer *) = 0;
  virtual jint send(::java::nio::ByteBuffer *, ::java::net::SocketAddress *) = 0;
  virtual ::java::net::DatagramSocket * socket() = 0;
  virtual jint write(::java::nio::ByteBuffer *) = 0;
  virtual jlong write(JArray< ::java::nio::ByteBuffer * > *, jint, jint) = 0;
  virtual jint validOps();
  static ::java::lang::Class class$;
};

#endif // __java_nio_channels_DatagramChannel__


// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_imageio_metadata_IIOMetadataFormatImpl$NodeObject__
#define __javax_imageio_metadata_IIOMetadataFormatImpl$NodeObject__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace javax
  {
    namespace imageio
    {
      namespace metadata
      {
          class IIOMetadataFormatImpl;
          class IIOMetadataFormatImpl$NodeObject;
      }
    }
  }
  namespace org
  {
    namespace w3c
    {
      namespace dom
      {
          class Element;
      }
    }
  }
}

class javax::imageio::metadata::IIOMetadataFormatImpl$NodeObject : public ::java::lang::Object
{

public:
  IIOMetadataFormatImpl$NodeObject(::javax::imageio::metadata::IIOMetadataFormatImpl *, ::org::w3c::dom::Element *, ::java::lang::Class *, jboolean, ::java::lang::Object *);
  virtual jint getValueType();
  virtual ::java::lang::Class * getClassType();
  virtual ::org::w3c::dom::Element * getOwnerElement();
  virtual ::java::lang::Object * getDefaultValue();
  virtual jboolean isRequired();
public: // actually protected
  ::org::w3c::dom::Element * __attribute__((aligned(__alignof__( ::java::lang::Object)))) owner;
  ::java::lang::Class * classType;
  jboolean required;
  ::java::lang::Object * defaultValue;
  jint valueType;
public: // actually package-private
  ::javax::imageio::metadata::IIOMetadataFormatImpl * this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_imageio_metadata_IIOMetadataFormatImpl$NodeObject__


// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_font_TextLayout__
#define __java_awt_font_TextLayout__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Font;
        class Graphics2D;
        class Shape;
      namespace font
      {
          class FontRenderContext;
          class LineMetrics;
          class TextHitInfo;
          class TextLayout;
          class TextLayout$CaretPolicy;
          class TextLayout$Run;
      }
      namespace geom
      {
          class AffineTransform;
          class Rectangle2D;
      }
    }
    namespace text
    {
        class AttributedCharacterIterator;
        class Bidi;
    }
  }
}

class java::awt::font::TextLayout : public ::java::lang::Object
{

public:
  TextLayout(::java::lang::String *, ::java::awt::Font *, ::java::awt::font::FontRenderContext *);
  TextLayout(::java::lang::String *, ::java::util::Map *, ::java::awt::font::FontRenderContext *);
  TextLayout(::java::text::AttributedCharacterIterator *, ::java::awt::font::FontRenderContext *);
public: // actually package-private
  TextLayout(::java::awt::font::TextLayout *, jint, jint);
private:
  void setCharIndices();
  void setupMappings();
  static ::java::lang::String * getText(::java::text::AttributedCharacterIterator *);
  static ::java::awt::Font * getFont(::java::text::AttributedCharacterIterator *);
  void getStringProperties();
  void determineWhiteSpace();
public: // actually protected
  ::java::lang::Object * clone();
public:
  void draw(::java::awt::Graphics2D *, jfloat, jfloat);
  jboolean equals(::java::lang::Object *);
  jboolean equals(::java::awt::font::TextLayout *);
  jfloat getAdvance();
  jfloat getAscent();
  jbyte getBaseline();
  JArray< jfloat > * getBaselineOffsets();
  ::java::awt::Shape * getBlackBoxBounds(jint, jint);
  ::java::awt::geom::Rectangle2D * getBounds();
  JArray< jfloat > * getCaretInfo(::java::awt::font::TextHitInfo *);
  JArray< jfloat > * getCaretInfo(::java::awt::font::TextHitInfo *, ::java::awt::geom::Rectangle2D *);
  ::java::awt::Shape * getCaretShape(::java::awt::font::TextHitInfo *);
  ::java::awt::Shape * getCaretShape(::java::awt::font::TextHitInfo *, ::java::awt::geom::Rectangle2D *);
  JArray< ::java::awt::Shape * > * getCaretShapes(jint);
  JArray< ::java::awt::Shape * > * getCaretShapes(jint, ::java::awt::geom::Rectangle2D *);
  JArray< ::java::awt::Shape * > * getCaretShapes(jint, ::java::awt::geom::Rectangle2D *, ::java::awt::font::TextLayout$CaretPolicy *);
  jint getCharacterCount();
  jbyte getCharacterLevel(jint);
  jfloat getDescent();
  ::java::awt::font::TextLayout * getJustifiedLayout(jfloat);
  jfloat getLeading();
  ::java::awt::Shape * getLogicalHighlightShape(jint, jint);
  ::java::awt::Shape * getLogicalHighlightShape(jint, jint, ::java::awt::geom::Rectangle2D *);
  JArray< jint > * getLogicalRangesForVisualSelection(::java::awt::font::TextHitInfo *, ::java::awt::font::TextHitInfo *);
  ::java::awt::font::TextHitInfo * getNextLeftHit(jint);
  ::java::awt::font::TextHitInfo * getNextLeftHit(jint, ::java::awt::font::TextLayout$CaretPolicy *);
  ::java::awt::font::TextHitInfo * getNextLeftHit(::java::awt::font::TextHitInfo *);
  ::java::awt::font::TextHitInfo * getNextRightHit(jint);
  ::java::awt::font::TextHitInfo * getNextRightHit(jint, ::java::awt::font::TextLayout$CaretPolicy *);
  ::java::awt::font::TextHitInfo * getNextRightHit(::java::awt::font::TextHitInfo *);
  ::java::awt::Shape * getOutline(::java::awt::geom::AffineTransform *);
  jfloat getVisibleAdvance();
  ::java::awt::Shape * getVisualHighlightShape(::java::awt::font::TextHitInfo *, ::java::awt::font::TextHitInfo *);
  ::java::awt::Shape * getVisualHighlightShape(::java::awt::font::TextHitInfo *, ::java::awt::font::TextHitInfo *, ::java::awt::geom::Rectangle2D *);
private:
  ::java::awt::Shape * left(::java::awt::geom::Rectangle2D *);
  ::java::awt::Shape * right(::java::awt::geom::Rectangle2D *);
public:
  ::java::awt::font::TextHitInfo * getVisualOtherHit(::java::awt::font::TextHitInfo *);
public: // actually protected
  void handleJustify(jfloat);
public:
  ::java::awt::font::TextHitInfo * hitTestChar(jfloat, jfloat);
  ::java::awt::font::TextHitInfo * hitTestChar(jfloat, jfloat, ::java::awt::geom::Rectangle2D *);
  jboolean isLeftToRight();
  jboolean isVertical();
  jint hashCode();
  ::java::lang::String * toString();
private:
  ::java::awt::geom::Rectangle2D * getNaturalBounds();
  void checkHitInfo(::java::awt::font::TextHitInfo *);
  jint hitToCaret(::java::awt::font::TextHitInfo *);
  ::java::awt::font::TextHitInfo * caretToHit(jint);
  jboolean isCharacterLTR(jint);
  ::java::awt::font::TextLayout$Run * findRunAtIndex(jint);
  void layoutRuns();
  JArray< ::java::awt::font::TextLayout$Run * > * __attribute__((aligned(__alignof__( ::java::lang::Object)))) runs;
  ::java::awt::font::FontRenderContext * frc;
  JArray< jchar > * string;
  jint offset;
  jint length;
  ::java::awt::geom::Rectangle2D * boundsCache;
  ::java::awt::font::LineMetrics * lm;
  jfloat totalAdvance;
  ::java::awt::geom::Rectangle2D * naturalBounds;
  JArray< JArray< jint > * > * charIndices;
  jboolean leftToRight;
  jboolean hasWhitespace;
  ::java::text::Bidi * bidi;
  JArray< jint > * logicalToVisual;
  JArray< jint > * visualToLogical;
  jint hash;
public:
  static ::java::awt::font::TextLayout$CaretPolicy * DEFAULT_CARET_POLICY;
  static ::java::lang::Class class$;
};

#endif // __java_awt_font_TextLayout__

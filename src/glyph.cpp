#include "glyph.h"

#include <utility>

TextGlyph::TextGlyph(QString text)
    : text_(std::move(text))
{
}

QString TextGlyph::render() const
{
    return text_;
}
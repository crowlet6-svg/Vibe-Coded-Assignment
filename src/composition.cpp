#include "composition.h"

void Composition::add(std::unique_ptr<Glyph> glyph)
{
    children_.push_back(std::move(glyph));
}

QString Composition::render() const
{
    QString output;
    for (const auto& child : children_) {
        output += child->render();
    }
    return output;
}
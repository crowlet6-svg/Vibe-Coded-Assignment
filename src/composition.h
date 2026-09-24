#pragma once

#include "glyph.h"

#include <memory>
#include <vector>

class Composition final : public Glyph
{
public:
    void add(std::unique_ptr<Glyph> glyph);
    QString render() const override;

private:
    std::vector<std::unique_ptr<Glyph>> children_;
};
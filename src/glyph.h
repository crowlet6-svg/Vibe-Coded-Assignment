#pragma once

#include <QString>

class Glyph
{
public:
    virtual ~Glyph() = default;

    virtual QString render() const = 0;
};

class TextGlyph final : public Glyph
{
public:
    explicit TextGlyph(QString text);

    QString render() const override;

private:
    QString text_;
};
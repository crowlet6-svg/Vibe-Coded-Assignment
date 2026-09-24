#include "mainwindow.h"

#include "composition.h"

#include <QTextEdit>

#include <memory>

MainWindow::MainWindow()
    : editor_(new QTextEdit(this))
{
    Composition composition;
    composition.add(std::make_unique<TextGlyph>(QStringLiteral("Hello from Qt 6!\n\n")));
    composition.add(std::make_unique<TextGlyph>(
        QStringLiteral("This editor is backed by a small Glyph/Composition model.\n")));
    composition.add(std::make_unique<TextGlyph>(
        QStringLiteral("Edit this text to begin extending the case study.\n")));

    editor_->setPlainText(composition.render());
    editor_->setWindowTitle(QStringLiteral("Glyph Composition Editor"));
    editor_->setMinimumSize(640, 400);
    setCentralWidget(editor_);
    setWindowTitle(QStringLiteral("Glyph Composition Editor"));
    resize(800, 520);
}
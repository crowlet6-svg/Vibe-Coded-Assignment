#pragma once

#include <QMainWindow>

class QTextEdit;

class MainWindow final : public QMainWindow
{
public:
    MainWindow();

private:
    QTextEdit* editor_;
};
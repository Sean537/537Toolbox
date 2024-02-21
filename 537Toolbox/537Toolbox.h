#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_537Toolbox.h"

class FTSToolbox : public QMainWindow
{
    Q_OBJECT

public:
    FTSToolbox(QWidget *parent = nullptr);
    ~FTSToolbox();

private:
    Ui::FTSToolboxClass ui;
};

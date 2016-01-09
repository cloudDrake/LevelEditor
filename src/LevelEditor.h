//
// Created by rhys on 05/01/16.
//
#ifndef LEVELEDITOR_H
#define LEVELEDITOR_H
#include <QWidget>
#include <string>
#include <QGraphicsScene>
#include <QPushButton>
#include <QGridLayout>
#include <QToolBar>
#include <QToolButton>

#include "ui/ui_LevelEditor.h"

namespace Ui
{
  class LevelEditor;
}

class LevelEditor : public QMainWindow
{
    Q_OBJECT
public:
    LevelEditor(QString title, int width, int height, QWidget *parent =0);
    void setupMenu();
    QToolBar * m_stampBar;
private:
    Ui::LevelEditor *m_ui;
};
#endif //LEVELEDITOR_H

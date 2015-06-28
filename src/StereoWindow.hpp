#ifndef STEREOWINDOW_H
#define STEREOWINDOW_H

#include "ui_StereoWindow.h"

class StereoWindow : public QWidget
{
  Q_OBJECT

public:
  StereoWindow(QWidget *parent = 0);
  ~StereoWindow();

private:
  Ui::StereoWindow ui;
};

#endif

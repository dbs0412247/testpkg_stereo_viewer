#include <QtGui>

#include "StereoWindow.hpp"

StereoWindow::StereoWindow(QWidget *parent)
  : QWidget(parent)
{
  ui.setupUi(this);
}

StereoWindow::~StereoWindow()
{
}

/*
void StereoWindow::on_inputSpinBox1_valueChanged(int value)
{
  ui.outputWidget->setText(QString::number(value + ui.inputSpinBox2->value()));
}

void StereoWindow::on_inputSpinBox2_valueChanged(int value)
{
  ui.outputWidget->setText(QString::number(value + ui.inputSpinBox1->value()));
}
*/

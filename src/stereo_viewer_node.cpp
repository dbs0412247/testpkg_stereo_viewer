#include <QApplication>
#include "StereoWindow.hpp"

// TODO: look into how to run app.exec and ROS spin in seperate threads
int main(int argc, char *argv[])
{
  QApplication app(argc, argv);
  StereoWindow window;
  window.show();
  return app.exec();
}

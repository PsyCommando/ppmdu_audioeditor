#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void Initialize();

    void OpenProject(const QString & path);
    void SaveProject(const QString & path);
    void CloseProject();

    void DisplayWelcomeScreen();
    void DisplayProjectScreen();
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_HPP

#include "mainwindow.hpp"
#include "ui_mainwindow.h"
#include <src/formats/project/project_manager.hpp>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}



MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Initialize()
{
    DisplayWelcomeScreen();
}

void MainWindow::OpenProject(const QString &path)
{
    ProjectManager & manager = ProjectManager::Instance();
    if(manager.IsProjectLoaded())
    {
        //Warn project opened
    }
    manager.LoadProject(path);
    DisplayProjectScreen();

    //#TODO: Open project windows
    //#TODO: Update project menu
}

void MainWindow::SaveProject(const QString &path)
{
    ProjectManager & manager = ProjectManager::Instance();
    EditorProject * proj = manager.getProject();
    if(proj->getRootPath().isEmpty())
    {
        //Notice path is empty
    }
    proj->Save();

}

void MainWindow::CloseProject()
{
    ProjectManager & manager = ProjectManager::Instance();
    //#TODO: check for open project saving
    manager.CloseProject();
}

void MainWindow::DisplayWelcomeScreen()
{
    ui->stkMain->setCurrentWidget(ui->tabWelcome);
}

void MainWindow::DisplayProjectScreen()
{
    ui->stkMain->setCurrentWidget(ui->tabProject);
}


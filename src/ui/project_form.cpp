#include "project_form.hpp"
#include "ui_project_form.h"

ProjectForm::ProjectForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ProjectForm)
{
    ui->setupUi(this);
}

ProjectForm::~ProjectForm()
{
    delete ui;
}

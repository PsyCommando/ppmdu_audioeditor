#ifndef PROJECT_FORM_HPP
#define PROJECT_FORM_HPP

#include <QWidget>

namespace Ui {
class ProjectForm;
}

class ProjectForm : public QWidget
{
    Q_OBJECT

public:
    explicit ProjectForm(QWidget *parent = nullptr);
    ~ProjectForm();

private:
    Ui::ProjectForm *ui;
};

#endif // PROJECT_FORM_HPP

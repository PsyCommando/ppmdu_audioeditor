#include "editor_project.hpp"
#include <exception>
#include <QDir>
#include <QDebug>

const QString EditorProject::DIR_SAMPLES    = "samples";
const QString EditorProject::DIR_MIDIS      = "midis";
const QString EditorProject::DIR_SONGS      = "songs";
const QString EditorProject::DIR_EFFECTS    = "effects";

EditorProject::EditorProject(QString path)
    :m_rootPath(path)
{
}

void EditorProject::Save()
{
    CreateDirStructure();
    WriteProjectXML();
}

void EditorProject::Load()
{
    ReadProjectXML();
}

void EditorProject::setRootPath(const QString &path)
{
    m_rootPath = path;
}

const QString &EditorProject::getRootPath() const
{
    return m_rootPath;
}

void EditorProject::WriteProjectXML()
{

}

void EditorProject::ReadProjectXML()
{

}

void EditorProject::CreateDirStructure()
{
    QDir dir(m_rootPath);

    if(!dir.mkdir(DIR_SAMPLES))
        throw std::runtime_error("Couldn't create directory");
    if(!dir.mkdir(DIR_MIDIS))
        throw std::runtime_error("Couldn't create directory");
    if(!dir.mkdir(DIR_SONGS))
        throw std::runtime_error("Couldn't create directory");
    if(!dir.mkdir(DIR_EFFECTS))
        throw std::runtime_error("Couldn't create directory");
}

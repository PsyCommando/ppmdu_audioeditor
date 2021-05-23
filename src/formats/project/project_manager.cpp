#include "project_manager.hpp"

ProjectManager &ProjectManager::Instance()
{
    static ProjectManager s_instance;
    return s_instance;
}

ProjectManager::ProjectManager()
{

}

ProjectManager::~ProjectManager()
{

}

void ProjectManager::NewProject()
{
    if(!m_pProject)
    {
        m_pProject.reset(new EditorProject());
    }
    else
    {
        //do something
    }
}

void ProjectManager::LoadProject(const QString &path)
{
    if(!m_pProject)
    {
        m_pProject.reset(new EditorProject(path));
        m_pProject->Load();
    }
    else
    {
        //Do something because there's already a project loaded
    }
}

void ProjectManager::CloseProject()
{
    m_pProject.reset();
}

#ifndef PROJECTMANAGER_HPP
#define PROJECTMANAGER_HPP
/*
 * Singleton handling storing and accessing the current project
*/
#include <src/formats/project/editor_project.hpp>
#include <memory>

class ProjectManager
{
public:
    static ProjectManager & Instance();

    ~ProjectManager();

    void NewProject();
    void LoadProject(const QString & path);
    void CloseProject();
    bool IsProjectLoaded()const {return static_cast<bool>(m_pProject);}

    EditorProject *         getProject()        {return m_pProject.get();}
    const EditorProject *   getProject()const   {return const_cast<ProjectManager*>(this)->getProject();}

private:
    ProjectManager();

private:
    std::unique_ptr<EditorProject> m_pProject;
};

#endif // PROJECTMANAGER_HPP

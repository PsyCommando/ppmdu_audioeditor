#ifndef EDITORPROJECT_HPP
#define EDITORPROJECT_HPP
/*
 * Audio editor project saving and loading
*/
#include <QString>

/*
 * EditorProject
*/
class EditorProject
{
public:
    static const QString DIR_SAMPLES;   //Name of the directory where samples are placed
    static const QString DIR_MIDIS;     //Name of the directory where midis are placed
    static const QString DIR_SONGS;
    static const QString DIR_EFFECTS;

    EditorProject(QString path = QString());

    void Save();
    void Load();

    void setRootPath(const QString & path);
    const QString & getRootPath()const;

    void setOutputPath(const QString & path)    {m_outputPath = path;}
    const QString& getOutputPath()const         {return m_outputPath;}

private:
    void WriteProjectXML();
    void ReadProjectXML();

    void CreateDirStructure();

private:
    QString m_rootPath;     //Path where the project files are stored
    QString m_outputPath;   //Path where the compiled files are placed
};

#endif // EDITORPROJECT_HPP

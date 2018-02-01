#ifndef FMAINWINDOW_H
#define FMAINWINDOW_H

#include <QMainWindow>

class QLabel;
class QComboBox;
class VDirectoryTree;
class QSplitter;
class QListWidget;
class QTabWidget;

class FMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    FMainWindow(QWidget *parent = 0);
    ~FMainWindow();

private:
    void setupUI();

    QLabel *notebookLabel;
    QComboBox *notebookComboBox;
    VDirectoryTree *directoryTree;
    QListWidget *fileListWidget;
    QTabWidget *editorTabWidget;
    QSplitter *mainSplitter;
};

#endif // FMAINWINDOW_H

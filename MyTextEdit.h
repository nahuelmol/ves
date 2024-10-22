#ifndef MYTEXTEDIT_H
#define MYTEXTEDIT_H

#include <QTextEdit>
#include <QDebug>

class MyTextEdit : public QTextEdit
{

    Q_OBJECT

public:
    explicit MyTextEdit(QWidget *parent = nullptr);

signals:
    void enterPressed(); 

protected:
    void keyPressEvent(QKeyEvent * e) override;
};

#endif //MYTEXTEDIT_H

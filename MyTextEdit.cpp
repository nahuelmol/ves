
#include "MyTextEdit.h"
#include <QDebug>
#include <QKeyEvent>

MyTextEdit::MyTextEdit(QWidget *parent) : QTextEdit(parent)
{

}

void MyTextEdit::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Enter || event->key() == Qt::Key_Return) {
        emit enterPressed();  // Emitimos la señal cuando se presiona Enter o Return
    } else {
        QTextEdit::keyPressEvent(event);  // Comportamiento predeterminado
    }
}

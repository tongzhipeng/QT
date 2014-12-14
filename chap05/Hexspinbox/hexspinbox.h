#ifndef HEXSPINBOX_H
#define HEXSPINBOX_H

#include <QWidget>
#include <QSpinBox>
class HexSpinBox : public QSpinBox
{
    Q_OBJECT

public:
    HexSpinBox(QWidget *parent = 0);
    ~HexSpinBox();

protected:
    QValidator::State validata(QString& text, int& pos) const;
    int valueFromText(const QString &text) const;
    QString textFromValue(int value) const;

private:
    QRegExpValidator* validator;
};

#endif // HEXSPINBOX_H

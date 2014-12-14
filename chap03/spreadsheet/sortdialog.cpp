#include <QtGui>
#include "sortdialog.h"

SortDialog::SortDialog(QWidget* parent)
    : QDialog(parent)
{
    setupUi(this);
    secondaryGroupBox->hide();
    tertiaryGroupBox->hide();
    layout()->setSizeConstraint(QLayout::SetFixedSize);

    setColumnRange('A', 'Z');

    connect(moreButton, SIGNAL(toggled(bool)), this, SLOT(SetMoreButtonText(bool)));
}

void SortDialog::setColumnRange(QChar first, QChar last)
{
    primaryColumnCombo->clear();
    secondaryColumnCombo->clear();
    tertiaryColumnCombo->clear();

    secondaryColumnCombo->addItem(tr("None"));
    tertiaryColumnCombo->addItem(tr("None"));
    primaryColumnCombo->setMinimumSize(secondaryColumnCombo->sizeHint());

    QChar ch = first;
    while (ch <= last)
    {
        primaryColumnCombo->addItem(QString(ch));
        secondaryColumnCombo->addItem(QString(ch));
        tertiaryColumnCombo->addItem(QString(ch));
        ch = ch.unicode() + 1;
    }
}

void SortDialog::SetMoreButtonText(bool bToggle)
{
    if (bToggle)
    {
        moreButton->setText(tr("Less<<"));
    }
    else
    {
        moreButton->setText(tr("More>>"));
    }
}

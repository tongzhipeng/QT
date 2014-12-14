RESOURCES = spreadsheet.qrc

QT += widgets

OTHER_FILES += \
    spreadsheet.pro.bak \
    spreadsheet.pro.user

FORMS += \
    gotocelldialog.ui \
    sortdialog.ui

HEADERS += \
    finddialog.h \
    gotocelldialog.h \
    mainwindow.h \
    sortdialog.h \
    spreadsheet.h \
    cell.h

SOURCES += \
    finddialog.cpp \
    gotocelldialog.cpp \
    mainwindow.cpp \
    sortdialog.cpp \
    main.cpp \
    spreadsheet.cpp \
    cell.cpp
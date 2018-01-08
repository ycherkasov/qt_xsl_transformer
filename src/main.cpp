//#include <translate_util/translate_dialog.h>

#include <QApplication>

#if 1
#include <iostream>
#include <QString>
#include <QXmlQuery>

void transform()
{
    QString xmlPath(QStringLiteral("C:\Users\atatat\Projects\transformation\translate.xml"));
    QString xslPath(QStringLiteral("C:\Users\atatat\Projects\transformation\to_html_table.xsl"));

    QString out;
    QXmlQuery query(QXmlQuery::XSLT20);
    query.setFocus(QUrl(xmlPath));
    query.setQuery(QUrl(xslPath));
    bool res = query.evaluateTo(&out);

    std::string s = out.toStdString();
}
#endif

int main(int argc, char** argv)
{
    QApplication::setApplicationName("PanicButton Translation Files");
    QApplication::setOrganizationName("CyberYozh");
    QApplication app(argc, argv);

    transform();
    return 0;

    //TranslateDialog wnd;
    //wnd.show();
    //return app.exec();
}

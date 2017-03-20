#include <QCoreApplication>
#include <QtXml/QtXml>
#include <QFile>

/*int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QDomDocument doc;
    QFile file(":/xml file/my.xml");
    if (! file.open(QIODevice::ReadOnly)) return 1;
    if (! doc.setContent(&file))
    {
        qDebug() <<"failure";
        file.close();
        return 2;
    }
    file.close();
    QDomNode firstNode = doc.firstChild();
    qDebug() <<qPrintable(firstNode.nodeName()) << qPrintable(firstNode.nodeValue());
    QDomElement docElem = doc.documentElement();
    QDomNode n = doc.documentElement();
    while(! n.isNull()){
        if (n.isElement()){
            QDomElement e = n.toElement();
            qDebug() <<qPrintable(e.tagName()) <<qPrintable(e.attribute("id"));
            QDomNodeList list = e.childNodes();
            for (int i = 0;i<list.count(); i++){
                QDomNode node = list.at(i);
                if (node.isElement())
                    qDebug() <<" "<<qPrintable(node.toElement().tagName())
                          <<qPrintable(node.toElement().text());
            }
            QDomElement node = list.at(list.count()-1).toElement();
            QDomElement new_book = doc.createElement(QString("book"));
            QDomAttr id = doc.createAttribute(QString("id"));
            id.setValue("3");
            new_book.setAttributeNode(id);
            QDomElement title = doc.createElement(QString("title"));
            QDomElement author = doc.createElement(QString("author"));
            QDomText text;
            text = doc.createTextNode(QString("Qt"));
            title.appendChild(text);
            text = doc.createTextNode(QString("shiming"));
            author.appendChild(text);
            new_book.appendChild(title);
            new_book.appendChild(author);
            n.appendChild(new_book);
        }
        n = n.nextSibling();
    }
    QFile file2("C:/Users/hank/Documents/qt/xml/my.xml");
    if (!file2.open(QIODevice::WriteOnly|QIODevice::Truncate)) return 3;
    QTextStream out(&file2);
    doc.save(out, 2);
    file.close();
    return a.exec();
}*/

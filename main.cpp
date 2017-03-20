#include <book_mgmt.h>

int main(int argc, char *argv[]){
    QCoreApplication a(argc,argv);
    std::vector<Book> list;
    list =*getXml();
    qDebug() << list.size();
    list[2].display();
    return a.exec();
}


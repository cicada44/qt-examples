#include <QApplication>
#include <QMainWindow>
#include <QTableWidget>
#include <QTableWidgetItem>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    QMainWindow window;
    window.setWindowTitle("Пример QTableWidget");
    window.setGeometry(100, 100, 400, 200);

    // Создаем QTableWidget с 3 строками и 2 столбцами
    auto* table = new QTableWidget(3, 2);
    // table->setColumnCount(1);

    // Вставляем элементы в QTableWidget по координатам (строка,
    // столбец)
    auto* item1 = new QTableWidgetItem("itern1");
    table->setItem(0, 0, item1);
    // tableWidget.setItem(1, 1, item2);

    window.setCentralWidget(table);
    window.show();

    return app.exec();
}

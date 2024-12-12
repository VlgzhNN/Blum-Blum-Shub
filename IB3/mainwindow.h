#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <cstdlib>    // Для rand() и srand()
#include <ctime>      // Для time()
#include <random>
#include <QMainWindow>
#include <QChartView>
#include <QBarSet>
#include <QBarSeries>
#include <QChart>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <vector>
#include <cmath>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_generateButton_clicked(); // Обработчик кнопки генерации

private:
    // Методы
    int random_number(int a, int b);
    bool isPrime(unsigned int n);                   // Проверка простого числа
    unsigned int generatePrimeP();                   // Генерация простого числа
    unsigned int generatePrimeQ();
    std::vector<int> generateSequence(unsigned int N, unsigned int M, unsigned int seed); // Генерация последовательности
    void saveToFile(const std::vector<int>& sequence, const QString& filename);           // Сохранение последовательности
    void buildHistogram(const std::vector<int>& sequence, QChartView* chartView, unsigned int n);         // Построение гистограммы
    double calculateChiSquare(const std::vector< int>& sequence, unsigned int n);

    std::vector<int> convertToDecimal(const std::vector<int>& sequence);
private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H

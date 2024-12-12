#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    srand(time(nullptr));
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Сохранение последовательности в файл
void MainWindow::saveToFile(const std::vector<int>& sequence, const QString& filename) {


    QFile file(filename); // Открываем файл по указанному пути
    if (!file.open(QIODevice::WriteOnly))
    { // Проверка на успешное открытие файла
        qDebug() << "Ошибка открытия файла для записи:" << file.errorString();
        return;
    }

    QTextStream stream(&file); // Поток для записи
    for (int bit : sequence)
    {
        stream << bit <<"  "; // Записываем каждый бит в файл
    }
    file.close(); // Закрываем файл
}




// Функция для нахождения НОД
unsigned long long gcd(unsigned long long a, unsigned long long b) {
    while (b != 0) {
        unsigned long long t = b;
        b = a % b;
        a = t;
    }
    return a;
}

// Модульное возведение в степень (a^b % mod)
unsigned long long mod(unsigned long long a, unsigned long long b, unsigned long long mod) {
    unsigned long long result = 1;
    a = a % mod;
    while (b > 0) {
        if (b % 2 == 1)
            result = (result * a) % mod;
        b = b >> 1; // b делим на 2
        a = (a * a) % mod;
    }
    return result;
}

//1.2 часть  Проверка простоты числа (тест Ферма)
bool MainWindow::isPrime(unsigned int n)
{
    if (n <=1 ) return false; // Число меньше 2 не простое

    // Если n <= 3, то число простое (исключая 1)
    if (n <= 3) return true;

    // Проверка на чётность
    if (n % 2 == 0) return false;

    // Выполнение теста Ферма с параметром k (количество итераций)
    int k = 5; // Количество итераций
    for (int i = 0; i < k; i++) {
        unsigned int a = 2 + rand() % (n - 3); // Случайное число от 2 до n-1

        // Проверка по формуле Ферма: a^(n-1) ≡ 1 (mod n)
        // Если находим хотя бы одно а, для которого это не выполняется, то число не простое
        if (gcd(a, n) != 1)
        {
            return false; // Если a и n не взаимно просты, то число n не простое
        }

        if (mod(a, n - 1, n) != 1) { // Модификация для использования unsigned long long
            return false; // Если условие не выполняется, то число не простое
        }
    }

    // Если прошло все итерации, то число простое
    return true;
}

//1.1 часть Генерация простого числа p
unsigned int MainWindow::generatePrimeP()
{
    unsigned int p;
    do {
        p = rand() % (1 << 16); // Генерация случайного числа от 0 до 2^16
        p |= 1; // nechetnoe
    } while (p % 4 != 3 || !isPrime(p)); // Условие: p ≡ 4 (mod 3) и проверка простоты
    return p; // Возвращаем простое число
}

// 2 часть Генерация простого числа q с условием q ≡ 3 (mod 4)
unsigned int MainWindow::generatePrimeQ()
{
    unsigned int q;
    do
    {
        q = rand() % (1 << 16); // Генерация случайного числа в диапазоне от 0 до 2^16
    } while ( q % 4 != 3 || !isPrime(q)); // Условие: q ≡ 3 (mod 4) и простота числа
    return q;
}

//6 часть в алгоритме  Генерация последовательности по алгоритму Блюма-Блюма-Шуба
std::vector<int> MainWindow::generateSequence(unsigned int N, unsigned int M, unsigned int seed)
{
    std::vector<int> sequence; // Вектор для хранения последовательности
    unsigned long long x = seed; // Начальное значение (затравка)
    for (int i = 0; i < N; i++)
    {
        x = (x * x) % M; // Алгоритм Блюма-Блюма-Шуба: x_{n+1} = (x_n^2) % M
        sequence.push_back(x); //
    }
    return sequence; // Возвращаем последовательность
}

// Функция для вычисления количества интервалов по правилу Стёрджеса
unsigned int calculateIntervals(unsigned int N)
{
    return std::floor(1 + std::log2(N));
}


// Функция для построения гистограммы
void MainWindow::buildHistogram(const std::vector<int>& sequence, QChartView* chartView, unsigned int n)
{
    std::vector<int> decimalValues = sequence;

    int min_value = *std::min_element(decimalValues.begin(), decimalValues.end());
    int max_value = *std::max_element(decimalValues.begin(), decimalValues.end());

    int interval_width = static_cast<double>(max_value - min_value) / n;;

    std::vector<int> counts(n, 0);
    for (int value : decimalValues) {
        int index = static_cast<int>(std::floor((value - min_value) / interval_width));
        if (index < 0) index = 0;
        if (index >= n) index = n - 1;
        counts[index]++;
    }

    QBarSeries* series = new QBarSeries();
    QBarSet* set = new QBarSet("Числовые интервалы");
    for (int count : counts) {
        *set << count;
    }
    series->append(set);

    QChart* chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Гистограмма распределения");
    chart->setAnimationOptions(QChart::SeriesAnimations);

    QBarCategoryAxis* axisX = new QBarCategoryAxis();
    for (unsigned int i = 0; i < n; ++i) {
        int interval_start = min_value + i * interval_width;
        int interval_end = interval_start + interval_width - 1;
        if (i == n - 1) interval_end = max_value;
        axisX->append(QString("%1-%2").arg(interval_start).arg(interval_end));
    }
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    QValueAxis* axisY = new QValueAxis();
    axisY->setTitleText("Частота");
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    chartView->setChart(chart);
}


// Функция для вычисления критерия Пирсона
double MainWindow::calculateChiSquare(const std::vector<int>& sequence, unsigned int n)
{
    // Преобразуем последовательность бит в десятичные числа
    std::vector<int> decimalValues = sequence;

    int min_value = *std::min_element(decimalValues.begin(), decimalValues.end());
    int max_value = *std::max_element(decimalValues.begin(), decimalValues.end());


    // Вычисляем ширину интервалов
    int interval_width =  static_cast<double>(max_value - min_value) / n;
    unsigned int N = decimalValues.size();

    std::vector<int> counts(n, 0);

    // Подсчет попаданий
    for (int value : decimalValues)
    {
        int index = static_cast<int>(std::floor((value - min_value) / interval_width));
        if (index >= n) index = n - 1;
        counts[index]++;
    }

    double expected_count = N * ( 1  / static_cast<double>(n) ); // N*Pi


    double kriteriy_pirsona = 0.0;
    for (int count : counts)
    {
        kriteriy_pirsona += std::pow(count - expected_count, 2) / expected_count; // summ iz metodichki
    }

    // Отладочная информация
    qDebug() << "Минимум:" << min_value << ", Максимум:" << max_value;
    qDebug() << "Кол-во чисел в каждом интервале:" << counts;
    qDebug() << "Ширина интервала:" << interval_width;
    return kriteriy_pirsona;
}

int MainWindow::random_number(int a, int b)
{
    // Инициализация генератора случайных чисел (только один раз в программе)
    static bool seeded = false;
    if (!seeded) {
        srand(time(0)); // Инициализация с помощью текущего времени
        seeded = true;
    }

    return a + rand() % (b - a + 1);
}

void MainWindow::on_generateButton_clicked()
{
    srand(time(0));
    // Чтение длины последовательности из QLineEdit и преобразование в целое число
    unsigned int N = ui->lengthInput->text().toUInt();

    // Генерация p, q и их произведения M
    unsigned int p = generatePrimeP(); // Генерируем простое число p
    unsigned int q = generatePrimeQ(); // Генерируем простое число q
    // 3 часть в алгоритме
    unsigned long long M = p * q; // Вычисляем модуль M

    // Выводим модуль M в QLabel
    ui->modulusOutput->setText(QString::number(M));

    //4 часть х0 Генерация затравки (начального значения) для последучайных чисел, инициализированный текущим временем
    unsigned long long A = random_number(2, M-1);  // Генератор чисел в диапазоне от 2 до M-1

    unsigned long long seed = A ; // Затравка от 2

//5 часть генерация псевдослуч последти по рекур формуле
    std::vector<int> sequence = generateSequence(N, M, seed); // Генерация самой последовательности
//6 часть
    // Сохранение последовательности в файл
    saveToFile(sequence, "C:/Users/User/Desktop/ИБ3.txt");

  unsigned int n = calculateIntervals(sequence.size()); // Количество интервалов

    // Построение и отображение гистограммы
    buildHistogram(sequence, ui->chartView, n);

    // Критерий Пирсона: количество интервалов для десятичных чисел

    double kriteriy_pirsona = calculateChiSquare(sequence, n);

    // Выводим значение критерия Пирсона на экран
    qDebug() << "Критерий Пирсона: " << kriteriy_pirsona;
    ui->pirson->setText(QString::number(kriteriy_pirsona));
    // Проверка гипотезы
    double critical_value = 10.1170; // Для 20 степеней свободы и уровня значимости 0.95 (для 1 000 000)
    if (kriteriy_pirsona < critical_value)
    {
        qDebug() << "Гипотеза о равномерном распределении принимается.";
    } else {
        qDebug() << "Гипотеза о равномерном распределении отвергается.";
    }
}

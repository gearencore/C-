#include <iostream> // подключение бибилиотеки ввода и вывода
using namespace std;
int main() // функция в которую пишем код
{
    
    setlocale(LC_ALL, "Russian.UTF-8");
    
    //=========================================
     float a;
     cout << "Введите первое число: ";
     cin >> a;
     float b;
     cout << "Введите второе число: ";
     cin >> b;
     float x = a + b;
     float d = a * b;
     float f = a / b;
     float j = a - b;
    
     cout << x << "\n";
     cout << d << "\n";
     cout << f << "\n";
     cout << j;
     short sh = 32767; // малые числа от -32тыс. до 32тыс.
     cout << sh;
     long l = 200000000000000; // большие числа
     char letter = 't'; // Стринг для 1й буквы
     string txt = "text";
     float i = 1.6;
     bool h = TRUE;
     if (h) {
         cout << "\n h = Правда";
     }
    
    //=========================================
     string str;
     cin >> str;
     str = str + "!";
     cout << str;
    
    //=========================================
     int one;
     cout << "Введите первое число: ";
     cin >> one;
     int two;
     cout << "Введите второе число: ";
     cin >> two;
     int three;
     cout << "Введите третье число: ";
     cin >> three;
    
     float Count = (one + two + three)/3;
     cout << "Средние арефметической: "<< Count;
    
    //=========================================
    
    string second;
    cout<<"Введите 6 символов: ";
    cin>>second;
    if (second.length() != 6)
    {
        cout << "Помоему ты не понял условие, перечитай";
    }
    else
    {
        cout << second[1]<<"\n";
        cout << second[3]<<"\n";
        cout << second[5];
    }
    //=========================================
    while (true)
    {
        string second;
        cout<<"Введите первую строку: ";
        cin>>second;
        string third;
        cout<<"Введите вторую строку: ";
        cin>>third;
        if (second.length() > third.length())
        {
            cout << "Первая строка больше - "<< second;
        }
        else if (second.length() < third.length())
        {
            cout << "Вторая строка больше - "<< third;
        }
        else if (second.length() == third.length())
        {
            cout << "Я знаю, я знаю кто победил, победила - ДРУЖБА!";
        }
    }
    //========================================
    float m;
    cout << "Введите массу: ";
    cin >> m;
    float g = 9.8;
    
    cout << "Сила равна: " << m * g;
    //==========================================
    float s;
    cout<<"\n""Введите расстояние: ";
    cin >> s;
    float t;
    cout<<"Введите время: ";
    cin >> t;
    float c = s/t;
    
    cout<< "Скорость равна: " << c;
    
    if (c > 300000)
    {
        cout<<"Ну не может оно двигатся свыше скорости cвета";
    }
    //==========================================
    
    float l1;
    cout<<"\n""Введите длину первой стороны прямоугольника: ";
    cin >> l1;
    float l2;
    cout<<"Введите длину второй стороны прямоугольника: ";
    cin >> l2;
    
    cout<<"Периметр прямоугольника равен: "<< (l1+l2)*2;
    cout<<"\n""Площадь прямоугольника равна: "<< l1*l2;
}

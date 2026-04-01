#include <iostream>
#include <string>
using namespace std;

bool IsKPeriodic(const string& str, int k)
{
    //Проверка корректности входных данных
    if (k <= 0)
    {
        return false;
    }

    //Вычисляем длину строки вручную
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }

    //Если строка пуста
    if (len == 0)
    {
        return false;
    }

    //Если длина строки не кратна k, строка не может быть кратной
    if (len % k != 0)
    {
        return false;
    }

    //Проверяем каждый блок длины k
    for (int i = k; i < len; i += k)
    {
        //Сравниваем блоки посимвольно
        for (int j = 0; j < k; j++)
        {
            if (str[j] != str[i + j])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    return 0;
}
/**
 * Реализуйте структуру данных типа “множество строк” на основе динамической хеш-таблицы с открытой адресацией.
 * Хранимые строки непустые и состоят из строчных латинских букв.
 * Хеш-функция строки должна быть реализована с помощью вычисления значения многочлена методом Горнера.
 * Начальный размер таблицы должен быть равным 8-ми. Перехеширование выполняйте при добавлении элементов в случае,
 * когда коэффициент заполнения таблицы достигает 3/4.
 * Структура данных должна поддерживать операции добавления строки в множество,
 * удаления строки из множества и проверки принадлежности данной строки множеству.
 *
 * 1_1. Для разрешения коллизий используйте квадратичное пробирование.
 * i-ая проба g(k, i)=g(k, i-1) + i (mod m). m - степень двойки.
 *
 * Формат входных данных
 * Каждая строка входных данных задает одну операцию над множеством.
 * Запись операции состоит из типа операции и следующей за ним через пробел строки, над которой проводится операция.
 * Тип операции – один из трех символов:
 * + означает добавление данной строки в множество;
 * - означает удаление строки из множества;
 * ? означает проверку принадлежности данной строки множеству.
 * При добавлении элемента в множество НЕ ГАРАНТИРУЕТСЯ, что он отсутствует в этом множестве.
 * При удалении элемента из множества НЕ ГАРАНТИРУЕТСЯ, что он присутствует в этом множестве.
 *
 * Формат выходных данных
 * Программа должна вывести для каждой операции одну из двух строк OK или FAIL,
 * в зависимости от того, встречается ли данное слово в нашем множестве.
 */
#include <fstream>
#include <iostream>
#include <assert.h>
#include "StringSet.h"
using namespace std;

int main() {
  StringSet set;

  ifstream in("input.txt");

  char command = '\0';
  string value = "";
  while (in >> command >> value) {
    bool commandSucceeded = false;
    switch (command) {
      case ('+') :
        commandSucceeded = set.add(value);
        break;
      case ('-') :
        commandSucceeded = set.remove(value);
        break;
      case ('?') :
        commandSucceeded = set.contains(value);
        break;
      default :
        assert(false);
    }

    cout << (commandSucceeded ? "OK" : "FAIL") << endl;
  }

  in.close();

  return 0;
}
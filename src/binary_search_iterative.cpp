#include "assignment/binary_search_iterative.hpp"

namespace assignment {

  std::optional<int> BinarySearchIterative::Search(const std::vector<int>& data, int search_element) const {

    // Tips:
    // 1. Заведите две переменные: (а) индекс левой границы и (б) индекс правой границы.
    // 2. Поиск ведется пока индекс левой границы не превысил индекс правой.
    // 3. Каждую итерацию вычисляйте индекс середины внутри области, задаваемой индексами левой и правой границы.
    // 4. Рассмотрите 3 случая:
    //    1) Целевой элемент равен элементу посередине.
    //    2) Целевой элемент меньше элемента посередине (область поиска сокращается).
    //    3) Целевой элемент больше элемента посередине (область поиска сокращается).

    int a = 0;
    int b = static_cast<int>(data.size()-1);
    while (a<=b and data[a] <= search_element and data[b] >= search_element) {
        int temp = (a+b)/2;
        if (data[a] == search_element) {
          return a;
        }
        if (data[b] == search_element) {
          return b;
        }
        if (data[temp] == search_element) {
          return temp;
        }
        if (data[temp] > search_element) {
          b = temp;
        }
        else {
            a = temp;
          }
        }
    return std::nullopt;
  }

}  // namespace assignment
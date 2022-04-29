#include "assignment/linear_search_two_pointers.hpp"

namespace assignment {

  std::optional<int> LinearSearchTwoPointers::Search(const std::vector<int>& data, int search_element) const {

    // Tips:
    // 1. Задайте две переменные: (1) индекс первого элемента и (2) индекс последнего элемента.
    // 2. Проверяйте наличие целевого элемента по индексам.
    // 3. Обновляйте индексы пока левый не станет больше правого.
    int front = 0;
    int back = static_cast<int>(data.size()-1);
    while (front <= back) {
      if (data[front] == search_element) {
        return front;
      }
      if (data[back] == search_element) {
        return back;
      }
      front++;
      back--;
    }
    return std::nullopt;
  }

}  // namespace assignment
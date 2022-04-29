#include "assignment/find_sum.hpp"  // find_elements

namespace assignment {

  std::optional<std::pair<int, int>> find_sum(const std::vector<int>& data, int sum) {

    // Tips: для создания пары (pair) используйте функцию std::make_pair
    int front = 0;
    int back = static_cast<int>(data.size() - 1);
    while (data[front] + data[back] != sum and front < back) {
      if (data[front] + data[back] < sum) {
        front += 1;
      } else {
        back -= 1;
      }
    }
    if (data[front] + data[back] == sum) {
      return std::make_pair(front, back);
    }
    return std::nullopt;
  }

}  // namespace assignment
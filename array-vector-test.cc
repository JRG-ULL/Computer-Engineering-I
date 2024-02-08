#include <iostream>
#include <array>
#include <vector>

int main() {
  //std::array<double, 4> four_vector {2., 3., 4., -10.};
  //std::cout << "This 4-vector has time component " << four_vector[3] << std::endl;

  //four_vector[3] = 7.5;
  //std::cout << "This 4-vector now has time component " << four_vector[3] << std::endl;

  //std::vector<double> n_vector {2., 3., 4., -10.};
  //std::cout << "This n-vector has time component " << n_vector[3] << std::endl;

  //n_vector[3] = 7.5;
  //std::cout << "This n-vector now has time component " << n_vector[3] << std::endl;

  //n_vector[0]++;
  //std::cout << "The first element of the vector is " << n_vector.front() <<
  //" and the last is " << n_vector.back() << std::endl;
  //std::cout << "The vector size is " << n_vector.size() << std::endl;

  std::vector<double> n_vector {};
  n_vector.push_back(1.5);
  n_vector.push_back(2.7);

  std::cout << "Vector elements are " << n_vector[0] << " and " << n_vector[1] <<
  " and the size is " << n_vector.size() << std::endl;

  n_vector.push_back(3.9);
  std::cout << "Vector now has " << n_vector.size() << " elements and the last value is " << n_vector[n_vector.size()-1] << std::endl;

  return 0;
}
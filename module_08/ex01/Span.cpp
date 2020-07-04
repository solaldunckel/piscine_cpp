#include "Span.hpp"

/*
** Constructors & Deconstructors
*/

Span::Span() {
  max_size_ = 0;
}

Span::Span(unsigned int num) {
  max_size_ = num;
}

Span::~Span() {
  container_.clear();
}

Span::Span(const Span &copy) {
  *this = copy;
}

/*
** Operators Overload
*/

Span  &Span::operator=(const Span &copy) {
  max_size_ = copy.max_size_;
  container_ = copy.container_;
  return (*this);
}

/*
** Functions
*/

void Span::addNumber(int num) {
  if (container_.size() == max_size_)
    throw std::runtime_error("container full");
  container_.push_back(num);
}

int Span::shortestSpan() {
  if (container_.empty() || container_.size() == 1)
    throw std::runtime_error("container empty or contains only one element");
  std::vector<int> copy = container_;
  std::sort(copy.begin(), copy.end());
  return copy[1] - copy[0];
}

int Span::longestSpan() {
  if (container_.empty() || container_.size() == 1)
    throw std::runtime_error("container empty or contains only one element");
  std::vector<int> copy = container_;
  std::sort(copy.begin(), copy.end());
  return copy.back() - copy.front();
}

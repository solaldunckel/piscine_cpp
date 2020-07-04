#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

class Span {
 public:
  // Constructors & Deconstructors
  Span();
  Span(unsigned int num);
  Span(const Span &copy);
  ~Span();

  // Operators
  Span &operator=(const Span &copy);

  // Functions
  void addNumber(int num);
  int shortestSpan();
  int longestSpan();

 private:
  std::vector<int> container_;
  unsigned int max_size_;
};

#endif

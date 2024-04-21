#include <iostream>
#include <cassert>

struct rational_t {
  public:
    rational_t(const int num = 0, const int den = 1);
    ~rational_t();

    int rational_t::get_num() const {
      return num_;
    }
  
    int rational_t::get_den() const {
      return den_;
    }

    rational_t rational_t::add(const rational_t& r) {
      return (get_num() * r.get_den() + get_den() * r.get_num(), get_den() * r.get_den());
    }
  
    rational_t rational_t::substract(const rational_t& r) {
      return (get_num() * r.get_den() - get_den() * r.get_num(), get_den() * r.get_den());
      // return add(r.opposite());
    }

    rational_t
    
    void write(void);
  
  private:
    int num_;
    int den_;
}

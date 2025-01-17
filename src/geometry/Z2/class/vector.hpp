#pragma once

#include <vector>

namespace luz::Z2 {

  template< typename Z >
  class Vector {

    Z x_, y_;

   public:
    Vector(): x_(0), y_(0) {}
    Vector(Z x, Z y): x_(x), y_(y) {}

    Z x() const {
      return x_;
    }

    Z y() const {
      return y_;
    }

    bool operator==(const Vector &v) const {
      return x_ == v.x_ and y_ == v.y_;
    }

    bool operator!=(const Vector &v) const {
      return x_ != v.x_ or  y_ != v.y_;
    }

    Vector &operator+=(const Vector &v) {
      x_ += v.x_; y_ += v.y_;
      return *this;
    }
    Vector &operator-=(const Vector &v) {
      x_ -= v.x_; y_ -= v.y_;
      return *this;
    }

    Vector operator+(const Vector &v) const {
      return Vector(*this) += v;
    }
    Vector operator-(const Vector &v) const {
      return Vector(*this) -= v;
    }

    Vector operator+() const {
      return *this;
    }
    Vector operator-() const {
      return Vector() - *this;
    }

  };

  template< typename Z >
  using Vectors = std::vector< Vector<Z> >;

} // namespace luz::Z2

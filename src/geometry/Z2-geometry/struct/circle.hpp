#pragma once

#include "src/geometry/Z2-geometry/struct/point.hpp"

namespace luz {

namespace Z2 {

  template< typename Z >
  class Circle {

    Point< Z > center_;
    Z r_;

   public:
    Circle() {}
    Circle(Point< Z > &center, Z r): center_(center), r_(r) {}

    Point< Z > center() const {
      return center_;
    }

    Z r() const {
      return r_;
    }
  };

} // namespace Z2

} // namespace luz
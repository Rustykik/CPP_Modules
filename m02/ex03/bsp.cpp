#include "bsp.hpp"

float sign (Point p1, Point p2, Point p3) {
    return (p1.getX().toFloat() - p3.getX().toFloat()) * (p2.getY().toFloat() - p3.getY().toFloat()) - (p2.getX().toFloat() - p3.getX().toFloat()) * (p1.getY().toFloat() - p3.getY().toFloat());
}

bool bsp (const Point a, const Point b, const Point c, const Point point) {
    float d1, d2, d3;
    bool has_neg, has_pos;

    d1 = sign(point, a, b);
    d2 = sign(point, b, c);
    d3 = sign(point, c, a);

    has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

    return !(has_neg && has_pos);
}

// float get_vec_mult(Point const &p1, Point const &p2, Point const &point) {
//     return ((p2.getX().toFloat() - p1.getX().toFloat()) * (point.getY().toFloat() - p1.getY().toFloat()) -
//             (p2.getY().toFloat() - p1.getY().toFloat()) * (point.getX().toFloat() - p1.getX().toFloat()));
// }

// bool bsp(Point const a, Point const b, Point const c, Point const point) {

//     float m1 = get_vec_mult(a, b, point);
//     float m2 = get_vec_mult(b, c, point);
//     float m3 = get_vec_mult(c, a, point);

//     if ((m1 == 0 && m2 == 0) || (m2 == 0 && m3 == 0) || (m1 == 0 && m3 == 0)) {
//         return (false);
//     }
//     if ((((m1 == 0) && (m2 > 0) && ( m3 > 0)) ||  ((m1 == 0) && (m2 < 0) && ( m3 < 0))) ||
//     (((m2 == 0) && (m1 > 0) && ( m3 > 0)) ||  ((m2 == 0) && (m1 < 0) && ( m3 < 0))) ||
//     (((m3 == 0) && (m1 > 0) && ( m2 > 0)) ||  ((m3 == 0) && (m1 < 0) && ( m2 < 0)))) {
//         return (false);
//     }
//     if ((m1 > 0 && m2 > 0 && m3 > 0) || (m1 < 0 && m2 < 0 && m3 < 0)) {
//         return (true);
//     }
//     return (false);

// }
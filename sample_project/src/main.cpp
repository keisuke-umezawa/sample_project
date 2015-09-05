#include <cmath>

#include <boost/numeric/ublas/vector.hpp>
#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/matrix_proxy.hpp>

namespace ublas = boost::numeric::ublas;

int main(int argc, char** argv) {

    ublas::vector<double> vec1(3, 0.0);
    ublas::vector<double> vec2(3, 0.0);
    ublas::matrix<double> mat1(3, 3, 0.0);
    ublas::matrix<double> mat2(3, 3, 0.0);
    ublas::matrix<double> mat3(3, 3, 0.0);

    //ublas::prod(mat1, ublas::prod(mat2, mat3));
    

    return 0;
}
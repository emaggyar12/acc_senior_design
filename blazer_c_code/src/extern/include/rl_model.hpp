
extern "C"{
#include "Blazer_MiL_Model.h"
#include "rtwtypes.h"
#include "ext_work.h"
}
#include "model_interface.hpp"
#include "pybind11/pybind11.h"
#include "pybind11/numpy.h"
#include "pybind11/stl.h"
#include <stdexcept>
#include <stdio.h>
#include <math.h>
#include <random>
#include <deque>


namespace EcoCAR{
    class BlazerModelRL : public BlazerModel {
        public: 
            using BlazerModel::BlazerModel;
            ~BlazerModelRL();
            std::vector<double> iter(pybind11::array_t<double, pybind11::array::c_style | pybind11::array::forcecast> state);
            std::vector<double> reset(
                    std::string drive_cycle, 
                    double SOC, 
                    double setSpeed,
                    double timeGap
            );
            long long int num_steps() const;
        protected:
            void step();
            void specific_reset();
            double tFinal() const;
    };
}

extern "C"{
#include "Blazer_MiL_Model_PID.h"
#include "ext_work.h"
#include "rtwtypes.h"
}
#include "model_interface.hpp"
#include "pybind11/pybind11.h"
#include "pybind11/numpy.h"
#include "pybind11/stl.h"


namespace EcoCAR{
    class BlazerModelPID : public BlazerModel {
        public: 
            BlazerModelPID(bool v2x, bool autocontrol, bool ignore, double alt, int ni) 
                : BlazerModel(v2x, autocontrol, alt, ni), ignore_veh(ignore){};
            ~BlazerModelPID();
            std::vector<double> iter(pybind11::array_t<double, pybind11::array::c_style | pybind11::array::forcecast> state);
            std::vector<double> reset(
                    std::string drive_cycle, 
                    double SOC, 
                    double setSpeed,
                    double timeGap
            );
            long long int num_steps() const;
            void set_speed(double speed);
        protected:
            void step();
            void specific_reset();
            bool ignore_veh;
            double tFinal() const;
    };
}

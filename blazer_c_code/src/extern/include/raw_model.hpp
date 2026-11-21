extern "C"{
#include "Blazer_MiL_Model.h"
#include "rtwtypes.h"
#include "ext_work.h"
}
#include "model_interface.hpp"

namespace EcoCAR{
    class BlazerModelRAW : public BlazerModel {
        public:
            using BlazerModel::BlazerModel;
            ~BlazerModelRAW();
            std::vector<double> iter(std::vector<double> state);
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
    };
}

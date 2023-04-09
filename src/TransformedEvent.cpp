#include "../include/TransformedEvent.h"
#include <cmath>
//https://e.ventures
//the@e.ventures
//MIT License

namespace LorentzTransformation {

    TransformedEvent::TransformedEvent(const Event& event, double v)
            : Event(event.getX(), 0.0, 0.0, 0.0)
    {
        // Calculate the Lorentz Transformation
        double gamma = 1.0 / std::sqrt(1.0 - v * v);
        double beta = v / std::sqrt(1.0 - v * v);
        double x = event.getX();
        double t = event.getT();
        double x_transformed = gamma * (x - v * t);
        double t_transformed = gamma * (t - beta * x);
        m_x = x_transformed;
        m_t = t_transformed;
    }

    TransformedEvent::~TransformedEvent()
    {
    }

} // namespace LorentzTransformation

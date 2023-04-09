#include "../include/ObserverEvent.h"
#include <cmath>

namespace LorentzTransformation {

    ObserverEvent::ObserverEvent(double x, double y, double z, double t, double v)
            : Event(x, y, z, t), m_v(v)
    {
    }

    ObserverEvent::~ObserverEvent()
    {
    }

} // namespace LorentzTransformation

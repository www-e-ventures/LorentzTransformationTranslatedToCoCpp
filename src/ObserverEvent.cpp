#include "../include/ObserverEvent.h"
#include <cmath>
//https://e.ventures
//the@e.ventures
//MIT License

namespace LorentzTransformation {

    ObserverEvent::ObserverEvent(double x, double y, double z, double t, double v)
            : Event(x, y, z, t), m_v(v)
    {
    }

    ObserverEvent::~ObserverEvent()
    {
    }

} // namespace LorentzTransformation

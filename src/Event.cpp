#include "../include/Event.h"
//https://e.ventures
//the@e.ventures
//MIT License

namespace LorentzTransformation {

    Event::Event(double x, double y, double z, double t)
            : m_x(x), m_y(y), m_z(z), m_t(t)
    {
    }

    Event::~Event()
    {
    }

    double Event::getX() const
    {
        return m_x;
    }

    double Event::getY() const
    {
        return m_y;
    }

    double Event::getZ() const
    {
        return m_z;
    }

    double Event::getT() const
    {
        return m_t;
    }

} // namespace LorentzTransformation

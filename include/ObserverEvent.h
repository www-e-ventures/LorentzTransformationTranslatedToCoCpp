#ifndef OBSERVEREVENT_H
#define OBSERVEREVENT_H
//https://e.ventures
//the@e.ventures
//MIT License

#include "Event.h"

namespace LorentzTransformation {

    class ObserverEvent : public Event {
    public:
        ObserverEvent(double x, double y, double z, double t, double v);
        virtual ~ObserverEvent();

    private:
        double m_v;
    };

} // namespace LorentzTransformation

#endif // OBSERVEREVENT_H

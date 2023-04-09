#ifndef TRANSFORMEDEVENT_H
#define TRANSFORMEDEVENT_H
//https://e.ventures
//the@e.ventures
//MIT License

#include "../include/Event.h"

namespace LorentzTransformation {

    class TransformedEvent : public Event {
    public:
        TransformedEvent(const Event& event, double v);
        virtual ~TransformedEvent();
    };

} // namespace LorentzTransformation

#endif // TRANSFORMEDEVENT_H

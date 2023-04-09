#include <iostream>
#include <vector>
#include "include/Event.h"
#include "include/ObserverEvent.h"
#include "include/TransformedEvent.h"

using namespace LorentzTransformation;

TransformedEvent transform(const Event& event, double v)
{
    return TransformedEvent(event, v);
}

std::vector<TransformedEvent> transformAll(const std::vector<Event>& events, double v)
{
    std::vector<TransformedEvent> transformed_events;
    for (const auto& event : events) {
        transformed_events.push_back(transform(event, v));
    }
    return transformed_events;
}

int main()
{
    // Create some events
    Event event1(0.0, 0.0, 0.0, 0.0);
    Event event2(1.0, 0.0, 0.0, 1.0);
    Event event3(0.0, 1.0, 0.0, 1.0);

    // Create an observer at rest
    ObserverEvent observer1(event1.getX(), event1.getY(), event1.getZ(), event1.getT(), 0.0);

    // Transform the events as viewed by the observer
    double v = 0.5;
    std::vector<Event> events = { event1, event2, event3 };
    std::vector<TransformedEvent> transformed_events = transformAll(events, v);

    // Print out the coordinates of the original and transformed events
    std::cout << "Observer 1: (" << observer1.getX() << ", " << observer1.getY() << ", " << observer1.getZ() << ", " << observer1.getT() << ")" << std::endl;
    for (int i = 0; i < events.size(); ++i) {
        std::cout << "Event " << i + 1 << ": (" << events[i].getX() << ", " << events[i].getY() << ", " << events[i].getZ() << ", " << events[i].getT() << ") -> ";
        std::cout << "Transformed: (" << transformed_events[i].getX() << ", " << transformed_events[i].getY() << ", " << transformed_events[i].getZ() << ", " << transformed_events[i].getT() << ")" << std::endl;
    }

    return 0;
}

#ifndef EVENT_H
#define EVENT_H
//https://e.ventures
//the@e.ventures
//MIT License

namespace LorentzTransformation {

    class Event {
    public:
        Event(double x, double y, double z, double t);
        virtual ~Event();

        double getX() const;
        double getY() const;
        double getZ() const;
        double getT() const;

    protected:
        double m_x;
        double m_y;
        double m_z;
        double m_t;
    };

} // namespace LorentzTransformation

#endif // EVENT_H

// This file has been generated by Py++.

#include "boost/python.hpp"
#include "generators/include/python_CEGUI.h"
#include "EventSet.pypp.hpp"

namespace bp = boost::python;

struct EventSet_wrapper : CEGUI::EventSet, bp::wrapper< CEGUI::EventSet > {

    EventSet_wrapper()
    : CEGUI::EventSet()
    , bp::wrapper< CEGUI::EventSet >() {
        // null constructor

    }

    EventSet_wrapper(::CEGUI::EventSet & arg0)
    : CEGUI::EventSet(boost::ref(arg0))
    , bp::wrapper< CEGUI::EventSet >() {
        // constructor

    }

    virtual void fireEvent(::CEGUI::String const & name, ::CEGUI::EventArgs & args, ::CEGUI::String const & eventNamespace = "") {
        if (bp::override func_fireEvent = this->get_override("fireEvent"))
            func_fireEvent(boost::ref(name), boost::ref(args), boost::ref(eventNamespace));
        else {
            this->CEGUI::EventSet::fireEvent(boost::ref(name), boost::ref(args), boost::ref(eventNamespace));
        }
    }

    void default_fireEvent(::CEGUI::String const & name, ::CEGUI::EventArgs & args, ::CEGUI::String const & eventNamespace = "") {
        CEGUI::EventSet::fireEvent(boost::ref(name), boost::ref(args), boost::ref(eventNamespace));
    }

    void fireEvent_impl(::CEGUI::String const & name, ::CEGUI::EventArgs & args) {
        CEGUI::EventSet::fireEvent_impl(boost::ref(name), boost::ref(args));
    }

    ::CEGUI::ScriptModule * getScriptModule() const {
        return CEGUI::EventSet::getScriptModule();
    }

    virtual ::CEGUI::RefCounted< CEGUI::BoundSlot > subscribeScriptedEvent(::CEGUI::String const & name, ::CEGUI::String const & subscriber_name) {
        if (bp::override func_subscribeScriptedEvent = this->get_override("subscribeScriptedEvent"))
            return func_subscribeScriptedEvent(boost::ref(name), boost::ref(subscriber_name));
        else {
            return this->CEGUI::EventSet::subscribeScriptedEvent(boost::ref(name), boost::ref(subscriber_name));
        }
    }

    ::CEGUI::RefCounted< CEGUI::BoundSlot > default_subscribeScriptedEvent(::CEGUI::String const & name, ::CEGUI::String const & subscriber_name) {
        return CEGUI::EventSet::subscribeScriptedEvent(boost::ref(name), boost::ref(subscriber_name));
    }

    virtual ::CEGUI::RefCounted< CEGUI::BoundSlot > subscribeScriptedEvent(::CEGUI::String const & name, unsigned int group, ::CEGUI::String const & subscriber_name) {
        if (bp::override func_subscribeScriptedEvent = this->get_override("subscribeScriptedEvent"))
            return func_subscribeScriptedEvent(boost::ref(name), group, boost::ref(subscriber_name));
        else {
            return this->CEGUI::EventSet::subscribeScriptedEvent(boost::ref(name), group, boost::ref(subscriber_name));
        }
    }

    ::CEGUI::RefCounted< CEGUI::BoundSlot > default_subscribeScriptedEvent(::CEGUI::String const & name, unsigned int group, ::CEGUI::String const & subscriber_name) {
        return CEGUI::EventSet::subscribeScriptedEvent(boost::ref(name), group, boost::ref(subscriber_name));
    }

};

class PythonEventSubscription {
public:

    PythonEventSubscription(PyObject* callable) :
    d_callable(boost::python::incref(callable)) {
    }

    PythonEventSubscription(const PythonEventSubscription& other) :
    d_callable(boost::python::incref(other.d_callable)) {
    }

    ~PythonEventSubscription() {
        boost::python::decref(d_callable);
    }

    bool operator()(const CEGUI::EventArgs& args) const {
        // FIXME: We have to cast, otherwise only base class gets to python!

        // I don't understand why this is happening, I think boost::python should use typeid(args).name() and deduce that it's a
        // derived class, not CEGUI::EventArgs base class
        // However this is not happening so I have to go through all EventArgs classes and try casting one after another
        if (dynamic_cast<const CEGUI::AnimationEventArgs*> (&args)) {
            return boost::python::call<bool>(d_callable, static_cast<const CEGUI::AnimationEventArgs&> (args));
        }

        if (dynamic_cast<const CEGUI::RenderQueueEventArgs*> (&args)) {
            return boost::python::call<bool>(d_callable, static_cast<const CEGUI::RenderQueueEventArgs&> (args));
        }

        if (dynamic_cast<const CEGUI::MouseCursorEventArgs*> (&args)) {
            return boost::python::call<bool>(d_callable, static_cast<const CEGUI::MouseCursorEventArgs&> (args));
        }

        if (dynamic_cast<const CEGUI::NamedElementEventArgs*> (&args)) {
            return boost::python::call<bool>(d_callable, static_cast<const CEGUI::NamedElementEventArgs&> (args));
        }

        if (dynamic_cast<const CEGUI::ResourceEventArgs*> (&args)) {
            return boost::python::call<bool>(d_callable, static_cast<const CEGUI::ResourceEventArgs&> (args));
        }

        if (dynamic_cast<const CEGUI::RenderTargetEventArgs*> (&args)) {
            return boost::python::call<bool>(d_callable, static_cast<const CEGUI::RenderTargetEventArgs&> (args));
        }

        if (dynamic_cast<const CEGUI::ActivationEventArgs*> (&args)) {
            return boost::python::call<bool>(d_callable, static_cast<const CEGUI::ActivationEventArgs&> (args));
        }

        if (dynamic_cast<const CEGUI::RegexMatchStateEventArgs*> (&args)) {
            return boost::python::call<bool>(d_callable, static_cast<const CEGUI::RegexMatchStateEventArgs&> (args));
        }

        if (dynamic_cast<const CEGUI::TreeEventArgs*> (&args)) {
            return boost::python::call<bool>(d_callable, static_cast<const CEGUI::TreeEventArgs&> (args));
        }

        if (dynamic_cast<const CEGUI::DragDropEventArgs*> (&args)) {
            return boost::python::call<bool>(d_callable, static_cast<const CEGUI::DragDropEventArgs&> (args));
        }

        if (dynamic_cast<const CEGUI::HeaderSequenceEventArgs*> (&args)) {
            return boost::python::call<bool>(d_callable, static_cast<const CEGUI::HeaderSequenceEventArgs&> (args));
        }

        if (dynamic_cast<const CEGUI::KeyEventArgs*> (&args)) {
            return boost::python::call<bool>(d_callable, static_cast<const CEGUI::KeyEventArgs&> (args));
        }

        if (dynamic_cast<const CEGUI::UpdateEventArgs*> (&args)) {
            return boost::python::call<bool>(d_callable, static_cast<const CEGUI::UpdateEventArgs&> (args));
        }

        if (dynamic_cast<const CEGUI::MouseEventArgs*> (&args)) {
            return boost::python::call<bool>(d_callable, static_cast<const CEGUI::MouseEventArgs&> (args));
        }

        if (dynamic_cast<const CEGUI::WindowEventArgs*> (&args)) {
            return boost::python::call<bool>(d_callable, static_cast<const CEGUI::WindowEventArgs&> (args));
        }

        if (dynamic_cast<const CEGUI::FontEventArgs*> (&args)) {
            return boost::python::call<bool>(d_callable, static_cast<const CEGUI::FontEventArgs&> (args));
        }

        if (dynamic_cast<const CEGUI::ElementEventArgs*> (&args)) {
            return boost::python::call<bool>(d_callable, static_cast<const CEGUI::ElementEventArgs&> (args));
        }

        if (dynamic_cast<const CEGUI::DisplayEventArgs*> (&args)) {
            return boost::python::call<bool>(d_callable, static_cast<const CEGUI::DisplayEventArgs&> (args));
        }

        if (dynamic_cast<const CEGUI::LinkedEventArgs*> (&args)) {
            return boost::python::call<bool>(d_callable, static_cast<const CEGUI::LinkedEventArgs&> (args));
        }

        if (dynamic_cast<const CEGUI::GUIContextRenderTargetEventArgs*> (&args)) {
            return boost::python::call<bool>(d_callable, static_cast<const CEGUI::GUIContextRenderTargetEventArgs&> (args));
        }

        if (dynamic_cast<const CEGUI::GUIContextEventArgs*> (&args)) {
            return boost::python::call<bool>(d_callable, static_cast<const CEGUI::GUIContextEventArgs&> (args));
        }

        if (dynamic_cast<const CEGUI::EventArgs*> (&args)) {
            return boost::python::call<bool>(d_callable, static_cast<const CEGUI::EventArgs&> (args));
        }


    }

    PyObject* d_callable;
};

class PythonEventConnection {
public:

    PythonEventConnection() :
    d_connection() {
    }

    PythonEventConnection(const CEGUI::Event::Connection& connection) :
    d_connection(connection) {
    }

    PythonEventConnection(const PythonEventConnection& v) :
    d_connection(v.d_connection) {
    }

    bool connected() {
        return d_connection.isValid() ? d_connection->connected() : false;
    }

    void disconnect() {
        // TODO: Throw on invalid disconnects?
        if (d_connection.isValid()) {
            d_connection->disconnect();
        }
    }

private:
    CEGUI::Event::Connection d_connection;
};

PythonEventConnection EventSet_subscribeEvent(CEGUI::EventSet* self, const CEGUI::String& name, PyObject* callable) {
    return PythonEventConnection(self->subscribeEvent(name, PythonEventSubscription(callable)));
}

void register_EventSet_class() {

    { //::CEGUI::EventSet
        typedef bp::class_< EventSet_wrapper, boost::noncopyable > EventSet_exposer_t;
        EventSet_exposer_t EventSet_exposer = EventSet_exposer_t("EventSet", "*!\n\
        \n\
            Class that collects together a set of Event objects.\n\
        \n\
            The EventSet is a means for code to attach a handler function to some\n\
            named event, and later, for that event to be fired and the subscribed\n\
            handler(s) called.\n\
            \n\
            As of 0.5, the EventSet no longer needs to be filled with available events.\n\
            Events are now added to the set as they are first used; that is, the first\n\
            time a handler is subscribed to an event for a given EventSet, an Event\n\
            object is created and added to the EventSet.\n\
            \n\
            Instead of throwing an exception when firing an event that does not actually\n\
            exist in the set, we now do nothing (if the Event does not exist, then it\n\
            has no handlers subscribed, and therefore doing nothing is the correct\n\
            course action).\n\
        *\n", bp::init< >("*!\n\
        \n\
            Constructor for EventSet objects\n\
        *\n"));
        bp::scope EventSet_scope(EventSet_exposer);
        EventSet_exposer.def(bp::init< CEGUI::EventSet & >((bp::arg("arg0")), "Do not allow copying, assignment, or any other usage than simple creation.\n"));
        { //::CEGUI::EventSet::addEvent

            typedef void ( ::CEGUI::EventSet::*addEvent_function_type)(::CEGUI::String const &);

            EventSet_exposer.def(
                    "addEvent"
                    , addEvent_function_type(&::CEGUI::EventSet::addEvent)
                    , (bp::arg("name"))
                    , "*!\n\
                \n\
                    Creates a new Event object with the given name and adds it to the\n\
                    EventSet.\n\
            \n\
                @param name\n\
                    String object containing the name to give the new Event.  The name must\n\
                    be unique for the EventSet.\n\
            \n\
                @exception AlreadyExistsException\n\
                    Thrown if an Event already exists named  name.\n\
                *\n");

        }
        { //::CEGUI::EventSet::addEvent

            typedef void ( ::CEGUI::EventSet::*addEvent_function_type)(::CEGUI::Event &);

            EventSet_exposer.def(
                    "addEvent"
                    , addEvent_function_type(&::CEGUI::EventSet::addEvent)
                    , (bp::arg("event"))
                    , "*!\n\
                \n\
                    Adds the given Event object to the EventSet.  Ownership of the object\n\
                    passes to EventSet and it will be deleted when it is removed from the\n\
                    EventSet - whether explicitly via removeEvent or when the EventSet\n\
                    is destroyed.\n\
            \n\
                @param event\n\
                    Reference to an Event or Event based object that is to be added to the\n\
                    EventSaet\n\
            \n\
                @exception AlreadyExistsException\n\
                    Thrown if the EventSet already contains an Event with the same name\n\
                    as  event.  Note that  event will be destroyed under this scenario.\n\
                *\n");

        }
        { //::CEGUI::EventSet::fireEvent

            typedef void ( ::CEGUI::EventSet::*fireEvent_function_type)(::CEGUI::String const &, ::CEGUI::EventArgs &, ::CEGUI::String const &);
            typedef void ( EventSet_wrapper::*default_fireEvent_function_type)(::CEGUI::String const &, ::CEGUI::EventArgs &, ::CEGUI::String const &);

            EventSet_exposer.def(
                    "fireEvent"
                    , fireEvent_function_type(&::CEGUI::EventSet::fireEvent)
                    , default_fireEvent_function_type(&EventSet_wrapper::default_fireEvent)
                    , (bp::arg("name"), bp::arg("args"), bp::arg("eventNamespace") = ""));

        }
        { //::CEGUI::EventSet::fireEvent_impl

            typedef void ( EventSet_wrapper::*fireEvent_impl_function_type)(::CEGUI::String const &, ::CEGUI::EventArgs &);

            EventSet_exposer.def(
                    "fireEvent_impl"
                    , fireEvent_impl_function_type(&EventSet_wrapper::fireEvent_impl)
                    , (bp::arg("name"), bp::arg("args"))
                    , "! Implementation event firing member\n");

        }
        { //::CEGUI::EventSet::getEventIterator

            typedef ::CEGUI::ConstMapIterator< std::map<CEGUI::String, CEGUI::Event*, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::Event*> > > > (::CEGUI::EventSet::*getEventIterator_function_type)() const;

            EventSet_exposer.def(
                    "getEventIterator"
                    , getEventIterator_function_type(&::CEGUI::EventSet::getEventIterator)
                    , "*!\n\
            \n\
                Return a EventSet.EventIterator object to iterate over the events currently\n\
                added to the EventSet.\n\
            *\n");

        }
        { //::CEGUI::EventSet::getEventObject

            typedef ::CEGUI::Event * (::CEGUI::EventSet::*getEventObject_function_type)(::CEGUI::String const &, bool);

            EventSet_exposer.def(
                    "getEventObject"
                    , getEventObject_function_type(&::CEGUI::EventSet::getEventObject)
                    , (bp::arg("name"), bp::arg("autoAdd") = (bool)(false))
                    , bp::return_value_policy< bp::reference_existing_object >()
                    , "*!\n\
                \n\
                    Return a pointer to the Event object with the given name, optionally\n\
                    adding such an Event object to the EventSet if it does not already\n\
                    exist.\n\
            \n\
                @param name\n\
                    String object holding the name of the Event to return.\n\
            \n\
                @param autoAdd\n\
                    - true if an Event object named  name should be added to the set\n\
                      if such an Event does not currently exist.\n\
                    - false if no object should automatically be added to the set.  In this\n\
                      case, if the Event does not already exist 0 will be returned.\n\
            \n\
                @return\n\
                    Pointer to the Event object in this EventSet with the specifed name.\n\
                    Or 0 if such an Event does not exist and  autoAdd was false.\n\
                *\n");

        }
        { //::CEGUI::EventSet::getScriptModule

            typedef ::CEGUI::ScriptModule * (EventSet_wrapper::*getScriptModule_function_type)() const;

            EventSet_exposer.def(
                    "getScriptModule"
                    , getScriptModule_function_type(&EventSet_wrapper::getScriptModule)
                    , bp::return_value_policy< bp::reference_existing_object >()
                    , "! Implementation event firing member\n\
            ! Helper to return the script module pointer or throw.\n");

        }
        { //::CEGUI::EventSet::isEventPresent

            typedef bool ( ::CEGUI::EventSet::*isEventPresent_function_type)(::CEGUI::String const &);

            EventSet_exposer.def(
                    "isEventPresent"
                    , isEventPresent_function_type(&::CEGUI::EventSet::isEventPresent)
                    , (bp::arg("name"))
                    , "*!\n\
                \n\
                    Checks to see if an Event with the given name is present in this\n\
                    EventSet.\n\
            \n\
                @return\n\
                    - true if an Event named  name is defined for this EventSet.\n\
                    - false if no Event named  name is defined for this EventSet.\n\
                *\n");

        }
        { //::CEGUI::EventSet::isMuted

            typedef bool ( ::CEGUI::EventSet::*isMuted_function_type)() const;

            EventSet_exposer.def(
                    "isMuted"
                    , isMuted_function_type(&::CEGUI::EventSet::isMuted)
                    , "*!\n\
                \n\
                    Return whether the EventSet is muted or not.\n\
            \n\
                @return\n\
                    - true if the EventSet is muted.  All requests to fire events will be\n\
                      ignored.\n\
                    - false if the EventSet is not muted.  Requests to fire events are\n\
                      processed as normal.\n\
                *\n");

        }
        { //::CEGUI::EventSet::removeAllEvents

            typedef void ( ::CEGUI::EventSet::*removeAllEvents_function_type)();

            EventSet_exposer.def(
                    "removeAllEvents"
                    , removeAllEvents_function_type(&::CEGUI::EventSet::removeAllEvents)
                    , "*!\n\
            \n\
                Remove all Event objects from the EventSet.  Add connections will be\n\
                disconnected, and all Event objects destroyed.\n\
            *\n");

        }
        { //::CEGUI::EventSet::removeEvent

            typedef void ( ::CEGUI::EventSet::*removeEvent_function_type)(::CEGUI::String const &);

            EventSet_exposer.def(
                    "removeEvent"
                    , removeEvent_function_type(&::CEGUI::EventSet::removeEvent)
                    , (bp::arg("name"))
                    , "*!\n\
                \n\
                    Removes the Event with the given name.  All connections to the event\n\
                    are disconnected, and the underlying Event object is destroyed.\n\
            \n\
                @param name\n\
                    String object containing the name of the Event to remove.  If no such\n\
                    Event exists, nothing happens.\n\
                *\n");

        }
        { //::CEGUI::EventSet::removeEvent

            typedef void ( ::CEGUI::EventSet::*removeEvent_function_type)(::CEGUI::Event &);

            EventSet_exposer.def(
                    "removeEvent"
                    , removeEvent_function_type(&::CEGUI::EventSet::removeEvent)
                    , (bp::arg("event"))
                    , "*!\n\
                \n\
                    Removes the given event from the EventSet.  All connections to the event\n\
                    are disconnected, and the event object is destroyed.\n\
            \n\
                @param event\n\
                    Reference to the Event or Event based object to be removed from the\n\
                    EventSet.\n\
                *\n");

        }
        { //::CEGUI::EventSet::setMutedState

            typedef void ( ::CEGUI::EventSet::*setMutedState_function_type)(bool);

            EventSet_exposer.def(
                    "setMutedState"
                    , setMutedState_function_type(&::CEGUI::EventSet::setMutedState)
                    , (bp::arg("setting"))
                    , "*!\n\
                \n\
                    Set the mute state for this EventSet.\n\
            \n\
                @param setting\n\
                    - true if the EventSet is to be muted (no further event firing requests\n\
                      will be honoured until EventSet is unmuted).\n\
                    - false if the EventSet is not to be muted and all events should fired\n\
                      as requested.\n\
                *\n");

        }
        { //::CEGUI::EventSet::subscribeScriptedEvent

            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > (::CEGUI::EventSet::*subscribeScriptedEvent_function_type)(::CEGUI::String const &, ::CEGUI::String const &);
            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > (EventSet_wrapper::*default_subscribeScriptedEvent_function_type)(::CEGUI::String const &, ::CEGUI::String const &);

            EventSet_exposer.def(
                    "subscribeScriptedEvent"
                    , subscribeScriptedEvent_function_type(&::CEGUI::EventSet::subscribeScriptedEvent)
                    , default_subscribeScriptedEvent_function_type(&EventSet_wrapper::default_subscribeScriptedEvent)
                    , (bp::arg("name"), bp::arg("subscriber_name")));

        }
        { //::CEGUI::EventSet::subscribeScriptedEvent

            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > (::CEGUI::EventSet::*subscribeScriptedEvent_function_type)(::CEGUI::String const &, unsigned int, ::CEGUI::String const &);
            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > (EventSet_wrapper::*default_subscribeScriptedEvent_function_type)(::CEGUI::String const &, unsigned int, ::CEGUI::String const &);

            EventSet_exposer.def(
                    "subscribeScriptedEvent"
                    , subscribeScriptedEvent_function_type(&::CEGUI::EventSet::subscribeScriptedEvent)
                    , default_subscribeScriptedEvent_function_type(&EventSet_wrapper::default_subscribeScriptedEvent)
                    , (bp::arg("name"), bp::arg("group"), bp::arg("subscriber_name")));

        }
        EventSet_exposer.def("subscribeEvent", &EventSet_subscribeEvent);

        { // PythonEventConnection

            typedef bp::class_< PythonEventConnection > PythonEventConnection_exposer_t;
            PythonEventConnection_exposer_t PythonEventConnection_exposer = PythonEventConnection_exposer_t("PythonEventConnection");
            bp::scope PythonEventConnection_scope(PythonEventConnection_exposer);
            PythonEventConnection_exposer.def(bp::init<>());
            {

                typedef bool ( PythonEventConnection::*connected_function_type)();

                PythonEventConnection_exposer.def(
                        "connected"
                        , connected_function_type(&PythonEventConnection::connected));

            }
            {

                typedef void ( PythonEventConnection::*disconnect_function_type)();

                PythonEventConnection_exposer.def(
                        "disconnect"
                        , disconnect_function_type(&PythonEventConnection::disconnect));
            }
        };
    }

}

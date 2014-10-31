// This file has been generated by Py++.

#include "boost/python.hpp"
#include "generators/include/python_CEGUI.h"
#include "ScriptModule.pypp.hpp"

namespace bp = boost::python;

struct ScriptModule_wrapper : CEGUI::ScriptModule, bp::wrapper< CEGUI::ScriptModule > {

    ScriptModule_wrapper()
    : CEGUI::ScriptModule()
    , bp::wrapper< CEGUI::ScriptModule >() {
        // null constructor

    }

    virtual void createBindings() {
        if (bp::override func_createBindings = this->get_override("createBindings"))
            func_createBindings();
        else {
            this->CEGUI::ScriptModule::createBindings();
        }
    }

    void default_createBindings() {
        CEGUI::ScriptModule::createBindings();
    }

    virtual void destroyBindings() {
        if (bp::override func_destroyBindings = this->get_override("destroyBindings"))
            func_destroyBindings();
        else {
            this->CEGUI::ScriptModule::destroyBindings();
        }
    }

    void default_destroyBindings() {
        CEGUI::ScriptModule::destroyBindings();
    }

    virtual void executeScriptFile(::CEGUI::String const & filename, ::CEGUI::String const & resourceGroup = "") {
        bp::override func_executeScriptFile = this->get_override("executeScriptFile");
        func_executeScriptFile(boost::ref(filename), boost::ref(resourceGroup));
    }

    virtual int executeScriptGlobal(::CEGUI::String const & function_name) {
        bp::override func_executeScriptGlobal = this->get_override("executeScriptGlobal");
        return func_executeScriptGlobal(boost::ref(function_name));
    }

    virtual bool executeScriptedEventHandler(::CEGUI::String const & handler_name, ::CEGUI::EventArgs const & e) {
        bp::override func_executeScriptedEventHandler = this->get_override("executeScriptedEventHandler");
        return func_executeScriptedEventHandler(boost::ref(handler_name), boost::ref(e));
    }

    virtual void executeString(::CEGUI::String const & str) {
        bp::override func_executeString = this->get_override("executeString");
        func_executeString(boost::ref(str));
    }

    virtual ::CEGUI::RefCounted< CEGUI::BoundSlot > subscribeEvent(::CEGUI::EventSet * target, ::CEGUI::String const & name, ::CEGUI::String const & subscriber_name) {
        bp::override func_subscribeEvent = this->get_override("subscribeEvent");
        return func_subscribeEvent(boost::python::ptr(target), boost::ref(name), boost::ref(subscriber_name));
    }

    virtual ::CEGUI::RefCounted< CEGUI::BoundSlot > subscribeEvent(::CEGUI::EventSet * target, ::CEGUI::String const & name, unsigned int group, ::CEGUI::String const & subscriber_name) {
        bp::override func_subscribeEvent = this->get_override("subscribeEvent");
        return func_subscribeEvent(boost::python::ptr(target), boost::ref(name), group, boost::ref(subscriber_name));
    }

};

void register_ScriptModule_class() {

    { //::CEGUI::ScriptModule
        typedef bp::class_< ScriptModule_wrapper, boost::noncopyable > ScriptModule_exposer_t;
        ScriptModule_exposer_t ScriptModule_exposer = ScriptModule_exposer_t("ScriptModule", bp::init< >("*************************************************************************\n\
           Construction and Destruction\n\
        *************************************************************************\n\
        *!\n\
        \n\
           Constructor for ScriptModule base class\n\
        *\n"));
        bp::scope ScriptModule_scope(ScriptModule_exposer);
        { //::CEGUI::ScriptModule::createBindings

            typedef void ( ::CEGUI::ScriptModule::*createBindings_function_type)();
            typedef void ( ScriptModule_wrapper::*default_createBindings_function_type)();

            ScriptModule_exposer.def(
                    "createBindings"
                    , createBindings_function_type(&::CEGUI::ScriptModule::createBindings)
                    , default_createBindings_function_type(&ScriptModule_wrapper::default_createBindings));

        }
        { //::CEGUI::ScriptModule::destroyBindings

            typedef void ( ::CEGUI::ScriptModule::*destroyBindings_function_type)();
            typedef void ( ScriptModule_wrapper::*default_destroyBindings_function_type)();

            ScriptModule_exposer.def(
                    "destroyBindings"
                    , destroyBindings_function_type(&::CEGUI::ScriptModule::destroyBindings)
                    , default_destroyBindings_function_type(&ScriptModule_wrapper::default_destroyBindings));

        }
        { //::CEGUI::ScriptModule::executeScriptFile

            typedef void ( ::CEGUI::ScriptModule::*executeScriptFile_function_type)(::CEGUI::String const &, ::CEGUI::String const &);

            ScriptModule_exposer.def(
                    "executeScriptFile"
                    , bp::pure_virtual(executeScriptFile_function_type(&::CEGUI::ScriptModule::executeScriptFile))
                    , (bp::arg("filename"), bp::arg("resourceGroup") = "")
                    , "*************************************************************************\n\
                  Abstract interface\n\
               *************************************************************************\n\
               *!\n\
               \n\
                  Execute a script file.\n\
            \n\
               @param filename\n\
                  String object holding the filename of the script file that is to be executed\n\
                  \n\
               @param resourceGroup\n\
                  Resource group idendifier to be passed to the ResourceProvider when loading the script file.\n\
               *\n");

        }
        { //::CEGUI::ScriptModule::executeScriptGlobal

            typedef int ( ::CEGUI::ScriptModule::*executeScriptGlobal_function_type)(::CEGUI::String const &);

            ScriptModule_exposer.def(
                    "executeScriptGlobal"
                    , bp::pure_virtual(executeScriptGlobal_function_type(&::CEGUI::ScriptModule::executeScriptGlobal))
                    , (bp::arg("function_name"))
                    , "*!\n\
               \n\
                  Execute a scripted global function.  The function should not take any parameters and should\
                  return an integer.\n\
            \n\
               @param function_name\n\
                  String object holding the name of the function, in the global script environment, that\n\
                  is to be executed.\n\
            \n\
               @return\n\
                  The integer value returned from the script function.\n\
               *\n");

        }
        { //::CEGUI::ScriptModule::executeScriptedEventHandler

            typedef bool ( ::CEGUI::ScriptModule::*executeScriptedEventHandler_function_type)(::CEGUI::String const &, ::CEGUI::EventArgs const &);

            ScriptModule_exposer.def(
                    "executeScriptedEventHandler"
                    , bp::pure_virtual(executeScriptedEventHandler_function_type(&::CEGUI::ScriptModule::executeScriptedEventHandler))
                    , (bp::arg("handler_name"), bp::arg("e"))
                    , "*!\n\
               \n\
                  Execute a scripted global 'event handler' function.  The function should take some kind of\
                  EventArgs like parameter\n\
                  that the concrete implementation of this function can create from the passed EventArgs based\
                  object.  The function\n\
                  should not return anything.\n\
            \n\
               @param handler_name\n\
                  String object holding the name of the scripted handler function.\n\
            \n\
               @param e\n\
                  EventArgs based object that should be passed, by any appropriate means, to the scripted\
                  function.\n\
            \n\
               @return\n\
                  - true if the event was handled.\n\
                  - false if the event was not handled.\n\
               *\n");

        }
        { //::CEGUI::ScriptModule::executeString

            typedef void ( ::CEGUI::ScriptModule::*executeString_function_type)(::CEGUI::String const &);

            ScriptModule_exposer.def(
                    "executeString"
                    , bp::pure_virtual(executeString_function_type(&::CEGUI::ScriptModule::executeString))
                    , (bp::arg("str"))
                    , "*!\n\
                \n\
                    Execute script code contained in the given CEGUI.String object.\n\
            \n\
                @param str\n\
                    String object holding the valid script code that should be executed.\n\
            \n\
                @return\n\
                    Nothing.\n\
                *\n");

        }
        { //::CEGUI::ScriptModule::getDefaultResourceGroup

            typedef ::CEGUI::String const & (*getDefaultResourceGroup_function_type)();

            ScriptModule_exposer.def(
                    "getDefaultResourceGroup"
                    , getDefaultResourceGroup_function_type(&::CEGUI::ScriptModule::getDefaultResourceGroup)
                    , bp::return_value_policy< bp::copy_const_reference >()
                    , "*!\n\
                \n\
                    Returns the default resource group used when loading script files.\n\
            \n\
                @return\n\
                    String describing the default resource group identifier..\n\
                *\n");

        }
        { //::CEGUI::ScriptModule::getIdentifierString

            typedef ::CEGUI::String const & (::CEGUI::ScriptModule::*getIdentifierString_function_type)() const;

            ScriptModule_exposer.def(
                    "getIdentifierString"
                    , getIdentifierString_function_type(&::CEGUI::ScriptModule::getIdentifierString)
                    , bp::return_value_policy< bp::copy_const_reference >()
                    , "*!\n\
                \n\
                    Return identification string for the ScriptModule.  If the internal id string has not been\n\
                    set by the ScriptModule creator, a generic string of Unknown scripting module will be\
                    returned.\n\
            \n\
                @return\n\
                    String object holding a string that identifies the ScriptModule in use.\n\
                *\n");

        }
        { //::CEGUI::ScriptModule::setDefaultResourceGroup

            typedef void ( *setDefaultResourceGroup_function_type)(::CEGUI::String const &);

            ScriptModule_exposer.def(
                    "setDefaultResourceGroup"
                    , setDefaultResourceGroup_function_type(&::CEGUI::ScriptModule::setDefaultResourceGroup)
                    , (bp::arg("resourceGroup"))
                    , "*!\n\
                \n\
                    Sets the default resource group to be used when loading script files.\n\
            \n\
                @param resourceGroup\n\
                    String describing the default resource group identifier to be used.\n\
            \n\
                @return\n\
                    Nothing.\n\
                *\n");

        }
        { //::CEGUI::ScriptModule::subscribeEvent

            typedef ::CEGUI::RefCounted<CEGUI::BoundSlot> (::CEGUI::ScriptModule::*subscribeEvent_function_type)(::CEGUI::EventSet *, ::CEGUI::String const &, ::CEGUI::String const &);

            ScriptModule_exposer.def(
                    "subscribeEvent"
                    , bp::pure_virtual(subscribeEvent_function_type(&::CEGUI::ScriptModule::subscribeEvent))
                    , (bp::arg("target"), bp::arg("name"), bp::arg("subscriber_name"))
                    , "*!\n\
                \n\
                        Subscribes the named Event to a scripted funtion\n\
            \n\
                @param target\n\
                        The target EventSet for the subscription.\n\
            \n\
                @param name\n\
                        String object containing the name of the Event to subscribe to.\n\
            \n\
                @param subscriber_name\n\
                        String object containing the name of the script funtion that is to be subscribed to the\
                        Event.\n\
            \n\
                @return\n\
                        Connection object that can be used to check the status of the Event connection and to\
                        disconnect (unsubscribe) from the Event.\n\
            \n\
                @exception UnknownObjectException  Thrown if an Event named  name is not in the EventSet\n\
                *\n");

        }
        { //::CEGUI::ScriptModule::subscribeEvent

            typedef ::CEGUI::RefCounted<CEGUI::BoundSlot> (::CEGUI::ScriptModule::*subscribeEvent_function_type)(::CEGUI::EventSet *, ::CEGUI::String const &, unsigned int, ::CEGUI::String const &);

            ScriptModule_exposer.def(
                    "subscribeEvent"
                    , bp::pure_virtual(subscribeEvent_function_type(&::CEGUI::ScriptModule::subscribeEvent))
                    , (bp::arg("target"), bp::arg("name"), bp::arg("group"), bp::arg("subscriber_name"))
                    , "*!\n\
                \n\
                        Subscribes the specified group of the named Event to a scripted funtion.\n\
            \n\
                @param target\n\
                        The target EventSet for the subscription.\n\
            \n\
                @param name\n\
                        String object containing the name of the Event to subscribe to.\n\
            \n\
                @param group\n\
                        Group which is to be subscribed to.  Subscription groups are called in ascending\
                        order.\n\
            \n\
                @param subscriber_name\n\
                        String object containing the name of the script funtion that is to be subscribed to the\
                        Event.\n\
            \n\
                @return\n\
                        Connection object that can be used to check the status of the Event connection and to\
                        disconnect (unsubscribe) from the Event.\n\
            \n\
                @exception UnknownObjectException  Thrown if an Event named  name is not in the EventSet\n\
                *\n");

        }
        ScriptModule_exposer.staticmethod("getDefaultResourceGroup");
        ScriptModule_exposer.staticmethod("setDefaultResourceGroup");
    }

}

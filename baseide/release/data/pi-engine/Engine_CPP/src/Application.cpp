#include <hxcpp.h>

#ifndef INCLUDED_Application
#include <Application.h>
#endif
#ifndef INCLUDED_Layer
#include <Layer.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_Window
#include <Window.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Stack
#include <haxe/Stack.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif

Void Application_obj::__construct()
{
	return null();
}

Application_obj::~Application_obj() { }

Dynamic Application_obj::__CreateEmpty() { return  new Application_obj; }
hx::ObjectPtr< Application_obj > Application_obj::__new()
{  hx::ObjectPtr< Application_obj > result = new Application_obj();
	result->__construct();
	return result;}

Dynamic Application_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Application_obj > result = new Application_obj();
	result->__construct();
	return result;}

int Application_obj::shit;

::String Application_obj::title;

::String Application_obj::author;

::String Application_obj::description;

::String Application_obj::organization;

::String Application_obj::url;

::String Application_obj::version;

bool Application_obj::debugMode;

bool Application_obj::_gDebugMode( ){
	HX_STACK_PUSH("Application::_gDebugMode","Application.hx",23);
	HX_STACK_LINE(23)
	return ::Application_obj::debugMode;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Application_obj,_gDebugMode,return )

bool Application_obj::serverMode;

bool Application_obj::devMode;

bool Application_obj::isInitialized;

Void Application_obj::init( ){
{
		HX_STACK_PUSH("Application::init","Application.hx",34);
		HX_STACK_LINE(35)
		::Application_obj::debugMode = true;
		HX_STACK_LINE(36)
		try{
			HX_STACK_LINE(38)
			::Sys_obj::println(HX_CSTRING("Application.exec() called.\nInitializing pi|engine..."));
			HX_STACK_LINE(40)
			::Application_obj::_pi_query_system_info = ::cpp::Lib_obj::load(HX_CSTRING("pi-engine"),HX_CSTRING("pi_query_system_info"),(int)0)();
			HX_STACK_LINE(41)
			::Application_obj::_pi_init_control_thread = ::cpp::Lib_obj::load(HX_CSTRING("pi-engine"),HX_CSTRING("pi_init_control_thread"),(int)0)();
			HX_STACK_LINE(44)
			::Window_obj::_pi_window_create = ::cpp::Lib_obj::load(HX_CSTRING("pi-engine"),HX_CSTRING("pi_window_create"),(int)0);
			HX_STACK_LINE(45)
			::Window_obj::_pi_window_set_visible = ::cpp::Lib_obj::load(HX_CSTRING("pi-engine"),HX_CSTRING("pi_window_set_visible"),(int)2);
			HX_STACK_LINE(46)
			::Window_obj::_pi_window_set_title = ::cpp::Lib_obj::load(HX_CSTRING("pi-engine"),HX_CSTRING("pi_window_set_title"),(int)2);
			HX_STACK_LINE(49)
			::Window_obj::_windows = Array_obj< ::Window >::__new();
			HX_STACK_LINE(50)
			::Layer_obj::availableLayers = Array_obj< ::Layer >::__new();
			HX_STACK_LINE(51)
			::Layer_obj::activeLayers = Array_obj< ::Layer >::__new();
		}
		catch(Dynamic __e){
			{
				Dynamic e = __e;{
					HX_STACK_LINE(54)
					::haxe::Log_obj::trace(e,hx::SourceInfo(HX_CSTRING("Application.hx"),55,HX_CSTRING("Application"),HX_CSTRING("init")));
				}
			}
		}
		HX_STACK_LINE(57)
		::Application_obj::isInitialized = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Application_obj,init,(void))

Void Application_obj::exec( ){
{
		HX_STACK_PUSH("Application::exec","Application.hx",62);
		HX_STACK_LINE(62)
		try{
			HX_STACK_LINE(65)
			if ((!(::Application_obj::isInitialized))){
				HX_STACK_LINE(67)
				::Sys_obj::println((HX_CSTRING("Unable to execute the application when it is not initialized!") + HX_CSTRING("\nCall Init() first!")));
				HX_STACK_LINE(69)
				::Application_obj::pause();
				HX_STACK_LINE(70)
				::Application_obj::terminate((int)1);
			}
			HX_STACK_LINE(72)
			if (((::Window_obj::_windows->length == (int)0))){
				HX_STACK_LINE(74)
				::Sys_obj::println(HX_CSTRING("The application must have at least one window to be able to run!"));
				HX_STACK_LINE(75)
				::Application_obj::pause();
				HX_STACK_LINE(76)
				::Application_obj::terminate((int)1);
			}
			HX_STACK_LINE(80)
			::Sys_obj::println(HX_CSTRING("Starting the event loop..."));
			HX_STACK_LINE(83)
			int frame = (int)0;		HX_STACK_VAR(frame,"frame");
			HX_STACK_LINE(84)
			while(((::Window_obj::_windows->length > (int)0))){
				HX_STACK_LINE(89)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				Array< ::Layer > _g1 = ::Layer_obj::activeLayers;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(89)
				while(((_g < _g1->length))){
					HX_STACK_LINE(89)
					::Layer layer = _g1->__get(_g);		HX_STACK_VAR(layer,"layer");
					HX_STACK_LINE(89)
					++(_g);
				}
			}
			HX_STACK_LINE(98)
			::Sys_obj::println(HX_CSTRING("Event loop completed successfully! exec() will now return!"));
			HX_STACK_LINE(99)
			return null();
		}
		catch(Dynamic __e){
			if (__e.IsClass< ::String >() ){
				::String ex = __e;{
					HX_STACK_LINE(104)
					::Sys_obj::println((HX_CSTRING("Exception was thrown: \n") + ex));
					HX_STACK_LINE(105)
					::Sys_obj::println(::haxe::Stack_obj::toString(::haxe::Stack_obj::callStack()));
					HX_STACK_LINE(106)
					::Application_obj::pause();
					HX_STACK_LINE(107)
					::Application_obj::terminate((int)1);
				}
			}
			else {
				Dynamic ex = __e;{
					HX_STACK_LINE(111)
					::haxe::Log_obj::trace(ex,hx::SourceInfo(HX_CSTRING("Application.hx"),111,HX_CSTRING("Application"),HX_CSTRING("exec")));
					HX_STACK_LINE(112)
					::Sys_obj::println(::haxe::Stack_obj::toString(::haxe::Stack_obj::callStack()));
					HX_STACK_LINE(113)
					::Application_obj::pause();
					HX_STACK_LINE(114)
					::Application_obj::terminate((int)1);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Application_obj,exec,(void))

Array< ::String > Application_obj::args( ){
	HX_STACK_PUSH("Application::args","Application.hx",126);
	HX_STACK_LINE(126)
	return ::Sys_obj::args();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Application_obj,args,return )

Void Application_obj::terminate( hx::Null< int >  __o_exitCode){
int exitCode = __o_exitCode.Default(0);
	HX_STACK_PUSH("Application::terminate","Application.hx",134);
	HX_STACK_ARG(exitCode,"exitCode");
{
		HX_STACK_LINE(134)
		::Sys_obj::exit(exitCode);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Application_obj,terminate,(void))

Dynamic Application_obj::_pi_query_system_info;

Dynamic Application_obj::_pi_init_control_thread;

Void Application_obj::pause( ){
{
		HX_STACK_PUSH("Application::pause","Application.hx",146);
		HX_STACK_LINE(146)
		::Sys_obj::command(HX_CSTRING("pause"),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Application_obj,pause,(void))


Application_obj::Application_obj()
{
}

void Application_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Application);
	HX_MARK_END_CLASS();
}

void Application_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Application_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { return url; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"shit") ) { return shit; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"exec") ) { return exec_dyn(); }
		if (HX_FIELD_EQ(inName,"args") ) { return args_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { return title; }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"author") ) { return author; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { return version; }
		if (HX_FIELD_EQ(inName,"devMode") ) { return devMode; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"debugMode") ) { return inCallProp ? _gDebugMode() : debugMode; }
		if (HX_FIELD_EQ(inName,"terminate") ) { return terminate_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"serverMode") ) { return serverMode; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"description") ) { return description; }
		if (HX_FIELD_EQ(inName,"_gDebugMode") ) { return _gDebugMode_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"organization") ) { return organization; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"isInitialized") ) { return isInitialized; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_pi_query_system_info") ) { return _pi_query_system_info; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_pi_init_control_thread") ) { return _pi_init_control_thread; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Application_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"shit") ) { shit=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { title=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"author") ) { author=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"devMode") ) { devMode=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"debugMode") ) { debugMode=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"serverMode") ) { serverMode=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"description") ) { description=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"organization") ) { organization=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"isInitialized") ) { isInitialized=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_pi_query_system_info") ) { _pi_query_system_info=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_pi_init_control_thread") ) { _pi_init_control_thread=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Application_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("shit"),
	HX_CSTRING("title"),
	HX_CSTRING("author"),
	HX_CSTRING("description"),
	HX_CSTRING("organization"),
	HX_CSTRING("url"),
	HX_CSTRING("version"),
	HX_CSTRING("debugMode"),
	HX_CSTRING("_gDebugMode"),
	HX_CSTRING("serverMode"),
	HX_CSTRING("devMode"),
	HX_CSTRING("isInitialized"),
	HX_CSTRING("init"),
	HX_CSTRING("exec"),
	HX_CSTRING("args"),
	HX_CSTRING("terminate"),
	HX_CSTRING("_pi_query_system_info"),
	HX_CSTRING("_pi_init_control_thread"),
	HX_CSTRING("pause"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Application_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Application_obj::shit,"shit");
	HX_MARK_MEMBER_NAME(Application_obj::title,"title");
	HX_MARK_MEMBER_NAME(Application_obj::author,"author");
	HX_MARK_MEMBER_NAME(Application_obj::description,"description");
	HX_MARK_MEMBER_NAME(Application_obj::organization,"organization");
	HX_MARK_MEMBER_NAME(Application_obj::url,"url");
	HX_MARK_MEMBER_NAME(Application_obj::version,"version");
	HX_MARK_MEMBER_NAME(Application_obj::debugMode,"debugMode");
	HX_MARK_MEMBER_NAME(Application_obj::serverMode,"serverMode");
	HX_MARK_MEMBER_NAME(Application_obj::devMode,"devMode");
	HX_MARK_MEMBER_NAME(Application_obj::isInitialized,"isInitialized");
	HX_MARK_MEMBER_NAME(Application_obj::_pi_query_system_info,"_pi_query_system_info");
	HX_MARK_MEMBER_NAME(Application_obj::_pi_init_control_thread,"_pi_init_control_thread");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Application_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Application_obj::shit,"shit");
	HX_VISIT_MEMBER_NAME(Application_obj::title,"title");
	HX_VISIT_MEMBER_NAME(Application_obj::author,"author");
	HX_VISIT_MEMBER_NAME(Application_obj::description,"description");
	HX_VISIT_MEMBER_NAME(Application_obj::organization,"organization");
	HX_VISIT_MEMBER_NAME(Application_obj::url,"url");
	HX_VISIT_MEMBER_NAME(Application_obj::version,"version");
	HX_VISIT_MEMBER_NAME(Application_obj::debugMode,"debugMode");
	HX_VISIT_MEMBER_NAME(Application_obj::serverMode,"serverMode");
	HX_VISIT_MEMBER_NAME(Application_obj::devMode,"devMode");
	HX_VISIT_MEMBER_NAME(Application_obj::isInitialized,"isInitialized");
	HX_VISIT_MEMBER_NAME(Application_obj::_pi_query_system_info,"_pi_query_system_info");
	HX_VISIT_MEMBER_NAME(Application_obj::_pi_init_control_thread,"_pi_init_control_thread");
};

Class Application_obj::__mClass;

void Application_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("Application"), hx::TCanCast< Application_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Application_obj::__boot()
{
	isInitialized= false;
}


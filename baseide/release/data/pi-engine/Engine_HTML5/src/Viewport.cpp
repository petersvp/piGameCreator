#include <hxcpp.h>

#ifndef INCLUDED_Viewport
#include <Viewport.h>
#endif

Void Viewport_obj::__construct()
{
HX_STACK_PUSH("Viewport::new","Viewport.hx",4);
{
}
;
	return null();
}

Viewport_obj::~Viewport_obj() { }

Dynamic Viewport_obj::__CreateEmpty() { return  new Viewport_obj; }
hx::ObjectPtr< Viewport_obj > Viewport_obj::__new()
{  hx::ObjectPtr< Viewport_obj > result = new Viewport_obj();
	result->__construct();
	return result;}

Dynamic Viewport_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Viewport_obj > result = new Viewport_obj();
	result->__construct();
	return result;}


Viewport_obj::Viewport_obj()
{
}

void Viewport_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Viewport);
	HX_MARK_END_CLASS();
}

void Viewport_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Viewport_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Viewport_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Viewport_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Viewport_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Viewport_obj::__mClass,"__mClass");
};

Class Viewport_obj::__mClass;

void Viewport_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("Viewport"), hx::TCanCast< Viewport_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Viewport_obj::__boot()
{
}


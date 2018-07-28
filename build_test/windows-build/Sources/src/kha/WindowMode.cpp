// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_kha_WindowMode
#include <kha/WindowMode.h>
#endif
namespace kha{

::kha::WindowMode WindowMode_obj::BorderlessWindow;

::kha::WindowMode WindowMode_obj::Fullscreen;

::kha::WindowMode WindowMode_obj::Window;

bool WindowMode_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BorderlessWindow",35,ac,0e,77)) { outValue = WindowMode_obj::BorderlessWindow; return true; }
	if (inName==HX_("Fullscreen",5b,3e,65,f0)) { outValue = WindowMode_obj::Fullscreen; return true; }
	if (inName==HX_("Window",10,08,21,87)) { outValue = WindowMode_obj::Window; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(WindowMode_obj)

int WindowMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_("BorderlessWindow",35,ac,0e,77)) return 1;
	if (inName==HX_("Fullscreen",5b,3e,65,f0)) return 2;
	if (inName==HX_("Window",10,08,21,87)) return 0;
	return super::__FindIndex(inName);
}

int WindowMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("BorderlessWindow",35,ac,0e,77)) return 0;
	if (inName==HX_("Fullscreen",5b,3e,65,f0)) return 0;
	if (inName==HX_("Window",10,08,21,87)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val WindowMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BorderlessWindow",35,ac,0e,77)) return BorderlessWindow;
	if (inName==HX_("Fullscreen",5b,3e,65,f0)) return Fullscreen;
	if (inName==HX_("Window",10,08,21,87)) return Window;
	return super::__Field(inName,inCallProp);
}

static ::String WindowMode_obj_sStaticFields[] = {
	HX_("Window",10,08,21,87),
	HX_("BorderlessWindow",35,ac,0e,77),
	HX_("Fullscreen",5b,3e,65,f0),
	::String(null())
};

static void WindowMode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WindowMode_obj::BorderlessWindow,"BorderlessWindow");
	HX_MARK_MEMBER_NAME(WindowMode_obj::Fullscreen,"Fullscreen");
	HX_MARK_MEMBER_NAME(WindowMode_obj::Window,"Window");
};

#ifdef HXCPP_VISIT_ALLOCS
static void WindowMode_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WindowMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(WindowMode_obj::BorderlessWindow,"BorderlessWindow");
	HX_VISIT_MEMBER_NAME(WindowMode_obj::Fullscreen,"Fullscreen");
	HX_VISIT_MEMBER_NAME(WindowMode_obj::Window,"Window");
};
#endif

hx::Class WindowMode_obj::__mClass;

Dynamic __Create_WindowMode_obj() { return new WindowMode_obj; }

void WindowMode_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("kha.WindowMode","\x9d","\xf3","\x0c","\x90"), hx::TCanCast< WindowMode_obj >,WindowMode_obj_sStaticFields,0,
	&__Create_WindowMode_obj, &__Create,
	&super::__SGetClass(), &CreateWindowMode_obj, WindowMode_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , WindowMode_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &WindowMode_obj::__GetStatic;
}

void WindowMode_obj::__boot()
{
BorderlessWindow = hx::CreateEnum< WindowMode_obj >(HX_HCSTRING("BorderlessWindow","\x35","\xac","\x0e","\x77"),1,0);
Fullscreen = hx::CreateEnum< WindowMode_obj >(HX_HCSTRING("Fullscreen","\x5b","\x3e","\x65","\xf0"),2,0);
Window = hx::CreateEnum< WindowMode_obj >(HX_HCSTRING("Window","\x10","\x08","\x21","\x87"),0,0);
}


} // end namespace kha

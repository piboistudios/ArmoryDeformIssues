// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_kha_Position
#include <kha/Position.h>
#endif
namespace kha{

::kha::Position Position_obj::Center;

::kha::Position Position_obj::Fixed(int v)
{
	return hx::CreateEnum< Position_obj >(HX_("Fixed",54,69,cf,93),1,1)->_hx_init(0,v);
}

bool Position_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Center",f5,99,6f,3a)) { outValue = Position_obj::Center; return true; }
	if (inName==HX_("Fixed",54,69,cf,93)) { outValue = Position_obj::Fixed_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Position_obj)

int Position_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Center",f5,99,6f,3a)) return 0;
	if (inName==HX_("Fixed",54,69,cf,93)) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(Position_obj,Fixed,return)

int Position_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Center",f5,99,6f,3a)) return 0;
	if (inName==HX_("Fixed",54,69,cf,93)) return 1;
	return super::__FindArgCount(inName);
}

hx::Val Position_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Center",f5,99,6f,3a)) return Center;
	if (inName==HX_("Fixed",54,69,cf,93)) return Fixed_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String Position_obj_sStaticFields[] = {
	HX_("Center",f5,99,6f,3a),
	HX_("Fixed",54,69,cf,93),
	::String(null())
};

static void Position_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Position_obj::Center,"Center");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Position_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Position_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Position_obj::Center,"Center");
};
#endif

hx::Class Position_obj::__mClass;

Dynamic __Create_Position_obj() { return new Position_obj; }

void Position_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("kha.Position","\x53","\x0a","\xa3","\x3d"), hx::TCanCast< Position_obj >,Position_obj_sStaticFields,0,
	&__Create_Position_obj, &__Create,
	&super::__SGetClass(), &CreatePosition_obj, Position_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , Position_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Position_obj::__GetStatic;
}

void Position_obj::__boot()
{
Center = hx::CreateEnum< Position_obj >(HX_HCSTRING("Center","\xf5","\x99","\x6f","\x3a"),0,0);
}


} // end namespace kha

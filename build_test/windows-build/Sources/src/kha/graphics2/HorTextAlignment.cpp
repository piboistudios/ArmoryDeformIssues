// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics2_HorTextAlignment
#include <kha/graphics2/HorTextAlignment.h>
#endif
namespace kha{
namespace graphics2{

::kha::graphics2::HorTextAlignment HorTextAlignment_obj::TextCenter;

::kha::graphics2::HorTextAlignment HorTextAlignment_obj::TextLeft;

::kha::graphics2::HorTextAlignment HorTextAlignment_obj::TextRight;

bool HorTextAlignment_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("TextCenter",82,aa,7c,33)) { outValue = HorTextAlignment_obj::TextCenter; return true; }
	if (inName==HX_("TextLeft",74,17,5d,24)) { outValue = HorTextAlignment_obj::TextLeft; return true; }
	if (inName==HX_("TextRight",cf,7b,24,24)) { outValue = HorTextAlignment_obj::TextRight; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(HorTextAlignment_obj)

int HorTextAlignment_obj::__FindIndex(::String inName)
{
	if (inName==HX_("TextCenter",82,aa,7c,33)) return 1;
	if (inName==HX_("TextLeft",74,17,5d,24)) return 0;
	if (inName==HX_("TextRight",cf,7b,24,24)) return 2;
	return super::__FindIndex(inName);
}

int HorTextAlignment_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("TextCenter",82,aa,7c,33)) return 0;
	if (inName==HX_("TextLeft",74,17,5d,24)) return 0;
	if (inName==HX_("TextRight",cf,7b,24,24)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val HorTextAlignment_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("TextCenter",82,aa,7c,33)) return TextCenter;
	if (inName==HX_("TextLeft",74,17,5d,24)) return TextLeft;
	if (inName==HX_("TextRight",cf,7b,24,24)) return TextRight;
	return super::__Field(inName,inCallProp);
}

static ::String HorTextAlignment_obj_sStaticFields[] = {
	HX_("TextLeft",74,17,5d,24),
	HX_("TextCenter",82,aa,7c,33),
	HX_("TextRight",cf,7b,24,24),
	::String(null())
};

static void HorTextAlignment_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HorTextAlignment_obj::TextCenter,"TextCenter");
	HX_MARK_MEMBER_NAME(HorTextAlignment_obj::TextLeft,"TextLeft");
	HX_MARK_MEMBER_NAME(HorTextAlignment_obj::TextRight,"TextRight");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HorTextAlignment_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HorTextAlignment_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(HorTextAlignment_obj::TextCenter,"TextCenter");
	HX_VISIT_MEMBER_NAME(HorTextAlignment_obj::TextLeft,"TextLeft");
	HX_VISIT_MEMBER_NAME(HorTextAlignment_obj::TextRight,"TextRight");
};
#endif

hx::Class HorTextAlignment_obj::__mClass;

Dynamic __Create_HorTextAlignment_obj() { return new HorTextAlignment_obj; }

void HorTextAlignment_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("kha.graphics2.HorTextAlignment","\x5c","\x01","\x42","\x5c"), hx::TCanCast< HorTextAlignment_obj >,HorTextAlignment_obj_sStaticFields,0,
	&__Create_HorTextAlignment_obj, &__Create,
	&super::__SGetClass(), &CreateHorTextAlignment_obj, HorTextAlignment_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , HorTextAlignment_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &HorTextAlignment_obj::__GetStatic;
}

void HorTextAlignment_obj::__boot()
{
TextCenter = hx::CreateEnum< HorTextAlignment_obj >(HX_HCSTRING("TextCenter","\x82","\xaa","\x7c","\x33"),1,0);
TextLeft = hx::CreateEnum< HorTextAlignment_obj >(HX_HCSTRING("TextLeft","\x74","\x17","\x5d","\x24"),0,0);
TextRight = hx::CreateEnum< HorTextAlignment_obj >(HX_HCSTRING("TextRight","\xcf","\x7b","\x24","\x24"),2,0);
}


} // end namespace kha
} // end namespace graphics2

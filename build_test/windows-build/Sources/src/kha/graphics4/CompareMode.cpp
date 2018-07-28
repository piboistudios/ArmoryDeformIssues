// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics4_CompareMode
#include <kha/graphics4/CompareMode.h>
#endif
namespace kha{
namespace graphics4{

::kha::graphics4::CompareMode CompareMode_obj::Always;

::kha::graphics4::CompareMode CompareMode_obj::Equal;

::kha::graphics4::CompareMode CompareMode_obj::Greater;

::kha::graphics4::CompareMode CompareMode_obj::GreaterEqual;

::kha::graphics4::CompareMode CompareMode_obj::Less;

::kha::graphics4::CompareMode CompareMode_obj::LessEqual;

::kha::graphics4::CompareMode CompareMode_obj::Never;

::kha::graphics4::CompareMode CompareMode_obj::NotEqual;

bool CompareMode_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Always",ef,82,6b,7b)) { outValue = CompareMode_obj::Always; return true; }
	if (inName==HX_("Equal",94,3f,b0,05)) { outValue = CompareMode_obj::Equal; return true; }
	if (inName==HX_("Greater",da,b8,11,85)) { outValue = CompareMode_obj::Greater; return true; }
	if (inName==HX_("GreaterEqual",7a,30,30,57)) { outValue = CompareMode_obj::GreaterEqual; return true; }
	if (inName==HX_("Less",79,3f,89,32)) { outValue = CompareMode_obj::Less; return true; }
	if (inName==HX_("LessEqual",7b,49,71,df)) { outValue = CompareMode_obj::LessEqual; return true; }
	if (inName==HX_("Never",6c,ae,5d,2c)) { outValue = CompareMode_obj::Never; return true; }
	if (inName==HX_("NotEqual",c1,5d,43,dc)) { outValue = CompareMode_obj::NotEqual; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(CompareMode_obj)

int CompareMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Always",ef,82,6b,7b)) return 0;
	if (inName==HX_("Equal",94,3f,b0,05)) return 2;
	if (inName==HX_("Greater",da,b8,11,85)) return 6;
	if (inName==HX_("GreaterEqual",7a,30,30,57)) return 7;
	if (inName==HX_("Less",79,3f,89,32)) return 4;
	if (inName==HX_("LessEqual",7b,49,71,df)) return 5;
	if (inName==HX_("Never",6c,ae,5d,2c)) return 1;
	if (inName==HX_("NotEqual",c1,5d,43,dc)) return 3;
	return super::__FindIndex(inName);
}

int CompareMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Always",ef,82,6b,7b)) return 0;
	if (inName==HX_("Equal",94,3f,b0,05)) return 0;
	if (inName==HX_("Greater",da,b8,11,85)) return 0;
	if (inName==HX_("GreaterEqual",7a,30,30,57)) return 0;
	if (inName==HX_("Less",79,3f,89,32)) return 0;
	if (inName==HX_("LessEqual",7b,49,71,df)) return 0;
	if (inName==HX_("Never",6c,ae,5d,2c)) return 0;
	if (inName==HX_("NotEqual",c1,5d,43,dc)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val CompareMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Always",ef,82,6b,7b)) return Always;
	if (inName==HX_("Equal",94,3f,b0,05)) return Equal;
	if (inName==HX_("Greater",da,b8,11,85)) return Greater;
	if (inName==HX_("GreaterEqual",7a,30,30,57)) return GreaterEqual;
	if (inName==HX_("Less",79,3f,89,32)) return Less;
	if (inName==HX_("LessEqual",7b,49,71,df)) return LessEqual;
	if (inName==HX_("Never",6c,ae,5d,2c)) return Never;
	if (inName==HX_("NotEqual",c1,5d,43,dc)) return NotEqual;
	return super::__Field(inName,inCallProp);
}

static ::String CompareMode_obj_sStaticFields[] = {
	HX_("Always",ef,82,6b,7b),
	HX_("Never",6c,ae,5d,2c),
	HX_("Equal",94,3f,b0,05),
	HX_("NotEqual",c1,5d,43,dc),
	HX_("Less",79,3f,89,32),
	HX_("LessEqual",7b,49,71,df),
	HX_("Greater",da,b8,11,85),
	HX_("GreaterEqual",7a,30,30,57),
	::String(null())
};

static void CompareMode_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CompareMode_obj::Always,"Always");
	HX_MARK_MEMBER_NAME(CompareMode_obj::Equal,"Equal");
	HX_MARK_MEMBER_NAME(CompareMode_obj::Greater,"Greater");
	HX_MARK_MEMBER_NAME(CompareMode_obj::GreaterEqual,"GreaterEqual");
	HX_MARK_MEMBER_NAME(CompareMode_obj::Less,"Less");
	HX_MARK_MEMBER_NAME(CompareMode_obj::LessEqual,"LessEqual");
	HX_MARK_MEMBER_NAME(CompareMode_obj::Never,"Never");
	HX_MARK_MEMBER_NAME(CompareMode_obj::NotEqual,"NotEqual");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CompareMode_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CompareMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CompareMode_obj::Always,"Always");
	HX_VISIT_MEMBER_NAME(CompareMode_obj::Equal,"Equal");
	HX_VISIT_MEMBER_NAME(CompareMode_obj::Greater,"Greater");
	HX_VISIT_MEMBER_NAME(CompareMode_obj::GreaterEqual,"GreaterEqual");
	HX_VISIT_MEMBER_NAME(CompareMode_obj::Less,"Less");
	HX_VISIT_MEMBER_NAME(CompareMode_obj::LessEqual,"LessEqual");
	HX_VISIT_MEMBER_NAME(CompareMode_obj::Never,"Never");
	HX_VISIT_MEMBER_NAME(CompareMode_obj::NotEqual,"NotEqual");
};
#endif

hx::Class CompareMode_obj::__mClass;

Dynamic __Create_CompareMode_obj() { return new CompareMode_obj; }

void CompareMode_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("kha.graphics4.CompareMode","\xd9","\xdf","\x5c","\xb7"), hx::TCanCast< CompareMode_obj >,CompareMode_obj_sStaticFields,0,
	&__Create_CompareMode_obj, &__Create,
	&super::__SGetClass(), &CreateCompareMode_obj, CompareMode_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , CompareMode_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &CompareMode_obj::__GetStatic;
}

void CompareMode_obj::__boot()
{
Always = hx::CreateEnum< CompareMode_obj >(HX_HCSTRING("Always","\xef","\x82","\x6b","\x7b"),0,0);
Equal = hx::CreateEnum< CompareMode_obj >(HX_HCSTRING("Equal","\x94","\x3f","\xb0","\x05"),2,0);
Greater = hx::CreateEnum< CompareMode_obj >(HX_HCSTRING("Greater","\xda","\xb8","\x11","\x85"),6,0);
GreaterEqual = hx::CreateEnum< CompareMode_obj >(HX_HCSTRING("GreaterEqual","\x7a","\x30","\x30","\x57"),7,0);
Less = hx::CreateEnum< CompareMode_obj >(HX_HCSTRING("Less","\x79","\x3f","\x89","\x32"),4,0);
LessEqual = hx::CreateEnum< CompareMode_obj >(HX_HCSTRING("LessEqual","\x7b","\x49","\x71","\xdf"),5,0);
Never = hx::CreateEnum< CompareMode_obj >(HX_HCSTRING("Never","\x6c","\xae","\x5d","\x2c"),1,0);
NotEqual = hx::CreateEnum< CompareMode_obj >(HX_HCSTRING("NotEqual","\xc1","\x5d","\x43","\xdc"),3,0);
}


} // end namespace kha
} // end namespace graphics4

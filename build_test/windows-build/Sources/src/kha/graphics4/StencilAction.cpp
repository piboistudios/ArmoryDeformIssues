// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics4_StencilAction
#include <kha/graphics4/StencilAction.h>
#endif
namespace kha{
namespace graphics4{

::kha::graphics4::StencilAction StencilAction_obj::Decrement;

::kha::graphics4::StencilAction StencilAction_obj::DecrementWrap;

::kha::graphics4::StencilAction StencilAction_obj::Increment;

::kha::graphics4::StencilAction StencilAction_obj::IncrementWrap;

::kha::graphics4::StencilAction StencilAction_obj::Invert;

::kha::graphics4::StencilAction StencilAction_obj::Keep;

::kha::graphics4::StencilAction StencilAction_obj::Replace;

::kha::graphics4::StencilAction StencilAction_obj::Zero;

bool StencilAction_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Decrement",f3,d5,54,b2)) { outValue = StencilAction_obj::Decrement; return true; }
	if (inName==HX_("DecrementWrap",5d,b1,1a,ea)) { outValue = StencilAction_obj::DecrementWrap; return true; }
	if (inName==HX_("Increment",0f,e6,d1,d3)) { outValue = StencilAction_obj::Increment; return true; }
	if (inName==HX_("IncrementWrap",79,ff,97,96)) { outValue = StencilAction_obj::IncrementWrap; return true; }
	if (inName==HX_("Invert",36,5b,6d,d4)) { outValue = StencilAction_obj::Invert; return true; }
	if (inName==HX_("Keep",a5,fc,df,31)) { outValue = StencilAction_obj::Keep; return true; }
	if (inName==HX_("Replace",14,70,79,78)) { outValue = StencilAction_obj::Replace; return true; }
	if (inName==HX_("Zero",48,3b,ca,3b)) { outValue = StencilAction_obj::Zero; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(StencilAction_obj)

int StencilAction_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Decrement",f3,d5,54,b2)) return 5;
	if (inName==HX_("DecrementWrap",5d,b1,1a,ea)) return 6;
	if (inName==HX_("Increment",0f,e6,d1,d3)) return 3;
	if (inName==HX_("IncrementWrap",79,ff,97,96)) return 4;
	if (inName==HX_("Invert",36,5b,6d,d4)) return 7;
	if (inName==HX_("Keep",a5,fc,df,31)) return 0;
	if (inName==HX_("Replace",14,70,79,78)) return 2;
	if (inName==HX_("Zero",48,3b,ca,3b)) return 1;
	return super::__FindIndex(inName);
}

int StencilAction_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Decrement",f3,d5,54,b2)) return 0;
	if (inName==HX_("DecrementWrap",5d,b1,1a,ea)) return 0;
	if (inName==HX_("Increment",0f,e6,d1,d3)) return 0;
	if (inName==HX_("IncrementWrap",79,ff,97,96)) return 0;
	if (inName==HX_("Invert",36,5b,6d,d4)) return 0;
	if (inName==HX_("Keep",a5,fc,df,31)) return 0;
	if (inName==HX_("Replace",14,70,79,78)) return 0;
	if (inName==HX_("Zero",48,3b,ca,3b)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val StencilAction_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Decrement",f3,d5,54,b2)) return Decrement;
	if (inName==HX_("DecrementWrap",5d,b1,1a,ea)) return DecrementWrap;
	if (inName==HX_("Increment",0f,e6,d1,d3)) return Increment;
	if (inName==HX_("IncrementWrap",79,ff,97,96)) return IncrementWrap;
	if (inName==HX_("Invert",36,5b,6d,d4)) return Invert;
	if (inName==HX_("Keep",a5,fc,df,31)) return Keep;
	if (inName==HX_("Replace",14,70,79,78)) return Replace;
	if (inName==HX_("Zero",48,3b,ca,3b)) return Zero;
	return super::__Field(inName,inCallProp);
}

static ::String StencilAction_obj_sStaticFields[] = {
	HX_("Keep",a5,fc,df,31),
	HX_("Zero",48,3b,ca,3b),
	HX_("Replace",14,70,79,78),
	HX_("Increment",0f,e6,d1,d3),
	HX_("IncrementWrap",79,ff,97,96),
	HX_("Decrement",f3,d5,54,b2),
	HX_("DecrementWrap",5d,b1,1a,ea),
	HX_("Invert",36,5b,6d,d4),
	::String(null())
};

static void StencilAction_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StencilAction_obj::Decrement,"Decrement");
	HX_MARK_MEMBER_NAME(StencilAction_obj::DecrementWrap,"DecrementWrap");
	HX_MARK_MEMBER_NAME(StencilAction_obj::Increment,"Increment");
	HX_MARK_MEMBER_NAME(StencilAction_obj::IncrementWrap,"IncrementWrap");
	HX_MARK_MEMBER_NAME(StencilAction_obj::Invert,"Invert");
	HX_MARK_MEMBER_NAME(StencilAction_obj::Keep,"Keep");
	HX_MARK_MEMBER_NAME(StencilAction_obj::Replace,"Replace");
	HX_MARK_MEMBER_NAME(StencilAction_obj::Zero,"Zero");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StencilAction_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StencilAction_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(StencilAction_obj::Decrement,"Decrement");
	HX_VISIT_MEMBER_NAME(StencilAction_obj::DecrementWrap,"DecrementWrap");
	HX_VISIT_MEMBER_NAME(StencilAction_obj::Increment,"Increment");
	HX_VISIT_MEMBER_NAME(StencilAction_obj::IncrementWrap,"IncrementWrap");
	HX_VISIT_MEMBER_NAME(StencilAction_obj::Invert,"Invert");
	HX_VISIT_MEMBER_NAME(StencilAction_obj::Keep,"Keep");
	HX_VISIT_MEMBER_NAME(StencilAction_obj::Replace,"Replace");
	HX_VISIT_MEMBER_NAME(StencilAction_obj::Zero,"Zero");
};
#endif

hx::Class StencilAction_obj::__mClass;

Dynamic __Create_StencilAction_obj() { return new StencilAction_obj; }

void StencilAction_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("kha.graphics4.StencilAction","\x43","\x92","\x26","\x29"), hx::TCanCast< StencilAction_obj >,StencilAction_obj_sStaticFields,0,
	&__Create_StencilAction_obj, &__Create,
	&super::__SGetClass(), &CreateStencilAction_obj, StencilAction_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , StencilAction_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &StencilAction_obj::__GetStatic;
}

void StencilAction_obj::__boot()
{
Decrement = hx::CreateEnum< StencilAction_obj >(HX_HCSTRING("Decrement","\xf3","\xd5","\x54","\xb2"),5,0);
DecrementWrap = hx::CreateEnum< StencilAction_obj >(HX_HCSTRING("DecrementWrap","\x5d","\xb1","\x1a","\xea"),6,0);
Increment = hx::CreateEnum< StencilAction_obj >(HX_HCSTRING("Increment","\x0f","\xe6","\xd1","\xd3"),3,0);
IncrementWrap = hx::CreateEnum< StencilAction_obj >(HX_HCSTRING("IncrementWrap","\x79","\xff","\x97","\x96"),4,0);
Invert = hx::CreateEnum< StencilAction_obj >(HX_HCSTRING("Invert","\x36","\x5b","\x6d","\xd4"),7,0);
Keep = hx::CreateEnum< StencilAction_obj >(HX_HCSTRING("Keep","\xa5","\xfc","\xdf","\x31"),0,0);
Replace = hx::CreateEnum< StencilAction_obj >(HX_HCSTRING("Replace","\x14","\x70","\x79","\x78"),2,0);
Zero = hx::CreateEnum< StencilAction_obj >(HX_HCSTRING("Zero","\x48","\x3b","\xca","\x3b"),1,0);
}


} // end namespace kha
} // end namespace graphics4

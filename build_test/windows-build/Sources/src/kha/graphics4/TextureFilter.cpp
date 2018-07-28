// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_kha_graphics4_TextureFilter
#include <kha/graphics4/TextureFilter.h>
#endif
namespace kha{
namespace graphics4{

::kha::graphics4::TextureFilter TextureFilter_obj::AnisotropicFilter;

::kha::graphics4::TextureFilter TextureFilter_obj::LinearFilter;

::kha::graphics4::TextureFilter TextureFilter_obj::PointFilter;

bool TextureFilter_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("AnisotropicFilter",a9,0a,1a,c0)) { outValue = TextureFilter_obj::AnisotropicFilter; return true; }
	if (inName==HX_("LinearFilter",9d,2b,c2,23)) { outValue = TextureFilter_obj::LinearFilter; return true; }
	if (inName==HX_("PointFilter",08,fc,ff,4f)) { outValue = TextureFilter_obj::PointFilter; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(TextureFilter_obj)

int TextureFilter_obj::__FindIndex(::String inName)
{
	if (inName==HX_("AnisotropicFilter",a9,0a,1a,c0)) return 2;
	if (inName==HX_("LinearFilter",9d,2b,c2,23)) return 1;
	if (inName==HX_("PointFilter",08,fc,ff,4f)) return 0;
	return super::__FindIndex(inName);
}

int TextureFilter_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("AnisotropicFilter",a9,0a,1a,c0)) return 0;
	if (inName==HX_("LinearFilter",9d,2b,c2,23)) return 0;
	if (inName==HX_("PointFilter",08,fc,ff,4f)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val TextureFilter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("AnisotropicFilter",a9,0a,1a,c0)) return AnisotropicFilter;
	if (inName==HX_("LinearFilter",9d,2b,c2,23)) return LinearFilter;
	if (inName==HX_("PointFilter",08,fc,ff,4f)) return PointFilter;
	return super::__Field(inName,inCallProp);
}

static ::String TextureFilter_obj_sStaticFields[] = {
	HX_("PointFilter",08,fc,ff,4f),
	HX_("LinearFilter",9d,2b,c2,23),
	HX_("AnisotropicFilter",a9,0a,1a,c0),
	::String(null())
};

static void TextureFilter_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextureFilter_obj::AnisotropicFilter,"AnisotropicFilter");
	HX_MARK_MEMBER_NAME(TextureFilter_obj::LinearFilter,"LinearFilter");
	HX_MARK_MEMBER_NAME(TextureFilter_obj::PointFilter,"PointFilter");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextureFilter_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextureFilter_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextureFilter_obj::AnisotropicFilter,"AnisotropicFilter");
	HX_VISIT_MEMBER_NAME(TextureFilter_obj::LinearFilter,"LinearFilter");
	HX_VISIT_MEMBER_NAME(TextureFilter_obj::PointFilter,"PointFilter");
};
#endif

hx::Class TextureFilter_obj::__mClass;

Dynamic __Create_TextureFilter_obj() { return new TextureFilter_obj; }

void TextureFilter_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("kha.graphics4.TextureFilter","\x64","\x72","\x88","\xca"), hx::TCanCast< TextureFilter_obj >,TextureFilter_obj_sStaticFields,0,
	&__Create_TextureFilter_obj, &__Create,
	&super::__SGetClass(), &CreateTextureFilter_obj, TextureFilter_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , TextureFilter_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &TextureFilter_obj::__GetStatic;
}

void TextureFilter_obj::__boot()
{
AnisotropicFilter = hx::CreateEnum< TextureFilter_obj >(HX_HCSTRING("AnisotropicFilter","\xa9","\x0a","\x1a","\xc0"),2,0);
LinearFilter = hx::CreateEnum< TextureFilter_obj >(HX_HCSTRING("LinearFilter","\x9d","\x2b","\xc2","\x23"),1,0);
PointFilter = hx::CreateEnum< TextureFilter_obj >(HX_HCSTRING("PointFilter","\x08","\xfc","\xff","\x4f"),0,0);
}


} // end namespace kha
} // end namespace graphics4

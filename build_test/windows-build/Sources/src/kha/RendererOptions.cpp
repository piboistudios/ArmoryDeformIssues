// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_kha_RendererOptions
#include <kha/RendererOptions.h>
#endif
#ifndef INCLUDED_kha_graphics4_TextureFormat
#include <kha/graphics4/TextureFormat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ac437a81b71716f7_17_new,"kha.RendererOptions","new",0x0e138163,"kha.RendererOptions.new","kha/WindowOptions.hx",17,0x953dd7db)
namespace kha{

void RendererOptions_obj::__construct( ::kha::graphics4::TextureFormat textureFormat, ::Dynamic depthStencilFormat, ::Dynamic samplesPerPixel){
            	HX_STACKFRAME(&_hx_pos_ac437a81b71716f7_17_new)
HXDLIN(  17)		this->textureFormat = textureFormat;
HXDLIN(  17)		this->depthStencilFormat = depthStencilFormat;
HXDLIN(  17)		this->samplesPerPixel = samplesPerPixel;
            	}

Dynamic RendererOptions_obj::__CreateEmpty() { return new RendererOptions_obj; }

void *RendererOptions_obj::_hx_vtable = 0;

Dynamic RendererOptions_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< RendererOptions_obj > _hx_result = new RendererOptions_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool RendererOptions_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0abf973b;
}


hx::ObjectPtr< RendererOptions_obj > RendererOptions_obj::__new( ::kha::graphics4::TextureFormat textureFormat, ::Dynamic depthStencilFormat, ::Dynamic samplesPerPixel) {
	hx::ObjectPtr< RendererOptions_obj > __this = new RendererOptions_obj();
	__this->__construct(textureFormat,depthStencilFormat,samplesPerPixel);
	return __this;
}

hx::ObjectPtr< RendererOptions_obj > RendererOptions_obj::__alloc(hx::Ctx *_hx_ctx, ::kha::graphics4::TextureFormat textureFormat, ::Dynamic depthStencilFormat, ::Dynamic samplesPerPixel) {
	RendererOptions_obj *__this = (RendererOptions_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(RendererOptions_obj), true, "kha.RendererOptions"));
	*(void **)__this = RendererOptions_obj::_hx_vtable;
	__this->__construct(textureFormat,depthStencilFormat,samplesPerPixel);
	return __this;
}

RendererOptions_obj::RendererOptions_obj()
{
}

void RendererOptions_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RendererOptions);
	HX_MARK_MEMBER_NAME(textureFormat,"textureFormat");
	HX_MARK_MEMBER_NAME(depthStencilFormat,"depthStencilFormat");
	HX_MARK_MEMBER_NAME(samplesPerPixel,"samplesPerPixel");
	HX_MARK_END_CLASS();
}

void RendererOptions_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(textureFormat,"textureFormat");
	HX_VISIT_MEMBER_NAME(depthStencilFormat,"depthStencilFormat");
	HX_VISIT_MEMBER_NAME(samplesPerPixel,"samplesPerPixel");
}

hx::Val RendererOptions_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"textureFormat") ) { return hx::Val( textureFormat ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"samplesPerPixel") ) { return hx::Val( samplesPerPixel ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"depthStencilFormat") ) { return hx::Val( depthStencilFormat ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val RendererOptions_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"textureFormat") ) { textureFormat=inValue.Cast<  ::kha::graphics4::TextureFormat >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"samplesPerPixel") ) { samplesPerPixel=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"depthStencilFormat") ) { depthStencilFormat=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RendererOptions_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("textureFormat","\x72","\x62","\xa6","\x90"));
	outFields->push(HX_HCSTRING("depthStencilFormat","\x50","\x1f","\xdf","\x3c"));
	outFields->push(HX_HCSTRING("samplesPerPixel","\x92","\x52","\x4f","\x57"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo RendererOptions_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::kha::graphics4::TextureFormat*/ ,(int)offsetof(RendererOptions_obj,textureFormat),HX_HCSTRING("textureFormat","\x72","\x62","\xa6","\x90")},
	{hx::fsInt,(int)offsetof(RendererOptions_obj,depthStencilFormat),HX_HCSTRING("depthStencilFormat","\x50","\x1f","\xdf","\x3c")},
	{hx::fsInt,(int)offsetof(RendererOptions_obj,samplesPerPixel),HX_HCSTRING("samplesPerPixel","\x92","\x52","\x4f","\x57")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *RendererOptions_obj_sStaticStorageInfo = 0;
#endif

static ::String RendererOptions_obj_sMemberFields[] = {
	HX_HCSTRING("textureFormat","\x72","\x62","\xa6","\x90"),
	HX_HCSTRING("depthStencilFormat","\x50","\x1f","\xdf","\x3c"),
	HX_HCSTRING("samplesPerPixel","\x92","\x52","\x4f","\x57"),
	::String(null()) };

static void RendererOptions_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RendererOptions_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void RendererOptions_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RendererOptions_obj::__mClass,"__mClass");
};

#endif

hx::Class RendererOptions_obj::__mClass;

void RendererOptions_obj::__register()
{
	hx::Object *dummy = new RendererOptions_obj;
	RendererOptions_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.RendererOptions","\xf1","\x93","\x80","\x04");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = RendererOptions_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(RendererOptions_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RendererOptions_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = RendererOptions_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RendererOptions_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RendererOptions_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha

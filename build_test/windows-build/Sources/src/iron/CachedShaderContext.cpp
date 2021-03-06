// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_iron_CachedShaderContext
#include <iron/CachedShaderContext.h>
#endif
#ifndef INCLUDED_iron_data_ShaderContext
#include <iron/data/ShaderContext.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_462df1750a12e2a8_792_new,"iron.CachedShaderContext","new",0xa7cfdbb4,"iron.CachedShaderContext.new","iron/RenderPath.hx",792,0x489fbb1c)
namespace iron{

void CachedShaderContext_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_462df1750a12e2a8_792_new)
            	}

Dynamic CachedShaderContext_obj::__CreateEmpty() { return new CachedShaderContext_obj; }

void *CachedShaderContext_obj::_hx_vtable = 0;

Dynamic CachedShaderContext_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CachedShaderContext_obj > _hx_result = new CachedShaderContext_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CachedShaderContext_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x548686e0;
}


CachedShaderContext_obj::CachedShaderContext_obj()
{
}

void CachedShaderContext_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CachedShaderContext);
	HX_MARK_MEMBER_NAME(context,"context");
	HX_MARK_END_CLASS();
}

void CachedShaderContext_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(context,"context");
}

hx::Val CachedShaderContext_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { return hx::Val( context ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val CachedShaderContext_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"context") ) { context=inValue.Cast<  ::iron::data::ShaderContext >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CachedShaderContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("context","\xef","\x95","\x77","\x19"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo CachedShaderContext_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::iron::data::ShaderContext*/ ,(int)offsetof(CachedShaderContext_obj,context),HX_HCSTRING("context","\xef","\x95","\x77","\x19")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *CachedShaderContext_obj_sStaticStorageInfo = 0;
#endif

static ::String CachedShaderContext_obj_sMemberFields[] = {
	HX_HCSTRING("context","\xef","\x95","\x77","\x19"),
	::String(null()) };

static void CachedShaderContext_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CachedShaderContext_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CachedShaderContext_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CachedShaderContext_obj::__mClass,"__mClass");
};

#endif

hx::Class CachedShaderContext_obj::__mClass;

void CachedShaderContext_obj::__register()
{
	hx::Object *dummy = new CachedShaderContext_obj;
	CachedShaderContext_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("iron.CachedShaderContext","\xc2","\x31","\x6b","\xa1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CachedShaderContext_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(CachedShaderContext_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CachedShaderContext_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CachedShaderContext_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CachedShaderContext_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CachedShaderContext_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace iron

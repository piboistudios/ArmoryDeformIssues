// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_kha_compute_TextureUnit
#include <kha/compute/TextureUnit.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b6b622a79d59080d_10_new,"kha.compute.TextureUnit","new",0xc2e0c410,"kha.compute.TextureUnit.new","kha/compute/TextureUnit.hx",10,0xf151d5e2)
namespace kha{
namespace compute{

void TextureUnit_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b6b622a79d59080d_10_new)
            	}

Dynamic TextureUnit_obj::__CreateEmpty() { return new TextureUnit_obj; }

void *TextureUnit_obj::_hx_vtable = 0;

Dynamic TextureUnit_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TextureUnit_obj > _hx_result = new TextureUnit_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TextureUnit_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5bf86548;
}


TextureUnit_obj::TextureUnit_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *TextureUnit_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *TextureUnit_obj_sStaticStorageInfo = 0;
#endif

static void TextureUnit_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextureUnit_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextureUnit_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextureUnit_obj::__mClass,"__mClass");
};

#endif

hx::Class TextureUnit_obj::__mClass;

void TextureUnit_obj::__register()
{
	hx::Object *dummy = new TextureUnit_obj;
	TextureUnit_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.compute.TextureUnit","\x1e","\xbc","\x91","\xec");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TextureUnit_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< TextureUnit_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TextureUnit_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextureUnit_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextureUnit_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace compute

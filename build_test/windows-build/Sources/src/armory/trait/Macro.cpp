// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_armory_trait_Macro
#include <armory/trait/Macro.h>
#endif

namespace armory{
namespace trait{

void Macro_obj::__construct() { }

Dynamic Macro_obj::__CreateEmpty() { return new Macro_obj; }

void *Macro_obj::_hx_vtable = 0;

Dynamic Macro_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Macro_obj > _hx_result = new Macro_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Macro_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5c30a478;
}


Macro_obj::Macro_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Macro_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Macro_obj_sStaticStorageInfo = 0;
#endif

static void Macro_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Macro_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Macro_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Macro_obj::__mClass,"__mClass");
};

#endif

hx::Class Macro_obj::__mClass;

void Macro_obj::__register()
{
	hx::Object *dummy = new Macro_obj;
	Macro_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.trait.Macro","\xf8","\xcd","\x20","\x66");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Macro_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Macro_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Macro_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Macro_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Macro_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace trait

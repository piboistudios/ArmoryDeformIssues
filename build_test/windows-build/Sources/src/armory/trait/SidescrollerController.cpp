// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_armory_trait_SidescrollerController
#include <armory/trait/SidescrollerController.h>
#endif
#ifndef INCLUDED_armory_trait_internal_CameraController
#include <armory/trait/internal/CameraController.h>
#endif
#ifndef INCLUDED_iron_Trait
#include <iron/Trait.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_29bb109ac4b476cd_10_new,"armory.trait.SidescrollerController","new",0x6382f453,"armory.trait.SidescrollerController.new","armory/trait/SidescrollerController.hx",10,0xa836337b)
namespace armory{
namespace trait{

void SidescrollerController_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_29bb109ac4b476cd_10_new)
HXDLIN(  10)		super::__construct();
            	}

Dynamic SidescrollerController_obj::__CreateEmpty() { return new SidescrollerController_obj; }

void *SidescrollerController_obj::_hx_vtable = 0;

Dynamic SidescrollerController_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SidescrollerController_obj > _hx_result = new SidescrollerController_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SidescrollerController_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x501f380e) {
		if (inClassId<=(int)0x2f2ab299) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2f2ab299;
		} else {
			return inClassId==(int)0x501f380e;
		}
	} else {
		return inClassId==(int)0x7b609ac2;
	}
}


hx::ObjectPtr< SidescrollerController_obj > SidescrollerController_obj::__new() {
	hx::ObjectPtr< SidescrollerController_obj > __this = new SidescrollerController_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< SidescrollerController_obj > SidescrollerController_obj::__alloc(hx::Ctx *_hx_ctx) {
	SidescrollerController_obj *__this = (SidescrollerController_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(SidescrollerController_obj), true, "armory.trait.SidescrollerController"));
	*(void **)__this = SidescrollerController_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

SidescrollerController_obj::SidescrollerController_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *SidescrollerController_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *SidescrollerController_obj_sStaticStorageInfo = 0;
#endif

static void SidescrollerController_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SidescrollerController_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SidescrollerController_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SidescrollerController_obj::__mClass,"__mClass");
};

#endif

hx::Class SidescrollerController_obj::__mClass;

void SidescrollerController_obj::__register()
{
	hx::Object *dummy = new SidescrollerController_obj;
	SidescrollerController_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.trait.SidescrollerController","\xe1","\xce","\x9f","\xf0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SidescrollerController_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< SidescrollerController_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SidescrollerController_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SidescrollerController_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SidescrollerController_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace trait

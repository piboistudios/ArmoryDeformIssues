// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_armory_trait_FirstPersonController
#include <armory/trait/FirstPersonController.h>
#endif
#ifndef INCLUDED_armory_trait_internal_CameraController
#include <armory/trait/internal/CameraController.h>
#endif
#ifndef INCLUDED_iron_Trait
#include <iron/Trait.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c143a3509e8de5fb_13_new,"armory.trait.FirstPersonController","new",0x9ab8f63f,"armory.trait.FirstPersonController.new","armory/trait/FirstPersonController.hx",13,0xf08902d3)
namespace armory{
namespace trait{

void FirstPersonController_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c143a3509e8de5fb_13_new)
HXDLIN(  13)		super::__construct();
            	}

Dynamic FirstPersonController_obj::__CreateEmpty() { return new FirstPersonController_obj; }

void *FirstPersonController_obj::_hx_vtable = 0;

Dynamic FirstPersonController_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FirstPersonController_obj > _hx_result = new FirstPersonController_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FirstPersonController_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x501f380e) {
		if (inClassId<=(int)0x3bc653b1) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x3bc653b1;
		} else {
			return inClassId==(int)0x501f380e;
		}
	} else {
		return inClassId==(int)0x7b609ac2;
	}
}


hx::ObjectPtr< FirstPersonController_obj > FirstPersonController_obj::__new() {
	hx::ObjectPtr< FirstPersonController_obj > __this = new FirstPersonController_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< FirstPersonController_obj > FirstPersonController_obj::__alloc(hx::Ctx *_hx_ctx) {
	FirstPersonController_obj *__this = (FirstPersonController_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FirstPersonController_obj), true, "armory.trait.FirstPersonController"));
	*(void **)__this = FirstPersonController_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FirstPersonController_obj::FirstPersonController_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *FirstPersonController_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *FirstPersonController_obj_sStaticStorageInfo = 0;
#endif

static void FirstPersonController_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FirstPersonController_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FirstPersonController_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FirstPersonController_obj::__mClass,"__mClass");
};

#endif

hx::Class FirstPersonController_obj::__mClass;

void FirstPersonController_obj::__register()
{
	hx::Object *dummy = new FirstPersonController_obj;
	FirstPersonController_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.trait.FirstPersonController","\xcd","\x6a","\xdb","\x6f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FirstPersonController_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< FirstPersonController_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FirstPersonController_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FirstPersonController_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FirstPersonController_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace trait
// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_armory_trait_NavMesh
#include <armory/trait/NavMesh.h>
#endif
#ifndef INCLUDED_iron_Trait
#include <iron/Trait.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a4397bcca540ea57_15_new,"armory.trait.NavMesh","new",0xf71e204e,"armory.trait.NavMesh.new","armory/trait/NavMesh.hx",15,0x33ff2024)
namespace armory{
namespace trait{

void NavMesh_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_a4397bcca540ea57_15_new)
HXDLIN(  15)		super::__construct();
            	}

Dynamic NavMesh_obj::__CreateEmpty() { return new NavMesh_obj; }

void *NavMesh_obj::_hx_vtable = 0;

Dynamic NavMesh_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< NavMesh_obj > _hx_result = new NavMesh_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NavMesh_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x46b317dc) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x46b317dc;
	} else {
		return inClassId==(int)0x7b609ac2;
	}
}


hx::ObjectPtr< NavMesh_obj > NavMesh_obj::__new() {
	hx::ObjectPtr< NavMesh_obj > __this = new NavMesh_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< NavMesh_obj > NavMesh_obj::__alloc(hx::Ctx *_hx_ctx) {
	NavMesh_obj *__this = (NavMesh_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(NavMesh_obj), true, "armory.trait.NavMesh"));
	*(void **)__this = NavMesh_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

NavMesh_obj::NavMesh_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *NavMesh_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *NavMesh_obj_sStaticStorageInfo = 0;
#endif

static void NavMesh_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NavMesh_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NavMesh_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NavMesh_obj::__mClass,"__mClass");
};

#endif

hx::Class NavMesh_obj::__mClass;

void NavMesh_obj::__register()
{
	hx::Object *dummy = new NavMesh_obj;
	NavMesh_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.trait.NavMesh","\x5c","\xa1","\x20","\xcc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = NavMesh_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< NavMesh_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NavMesh_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NavMesh_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NavMesh_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace trait

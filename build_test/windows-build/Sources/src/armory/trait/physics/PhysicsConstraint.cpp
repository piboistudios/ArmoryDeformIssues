// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_armory_trait_physics_PhysicsConstraint
#include <armory/trait/physics/PhysicsConstraint.h>
#endif
#ifndef INCLUDED_iron_Trait
#include <iron/Trait.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_90d00fa6ade8d6f7_5_new,"armory.trait.physics.PhysicsConstraint","new",0xeae513fb,"armory.trait.physics.PhysicsConstraint.new","armory/trait/physics/PhysicsConstraint.hx",5,0xcbbae018)
namespace armory{
namespace trait{
namespace physics{

void PhysicsConstraint_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_90d00fa6ade8d6f7_5_new)
HXDLIN(   5)		super::__construct();
            	}

Dynamic PhysicsConstraint_obj::__CreateEmpty() { return new PhysicsConstraint_obj; }

void *PhysicsConstraint_obj::_hx_vtable = 0;

Dynamic PhysicsConstraint_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< PhysicsConstraint_obj > _hx_result = new PhysicsConstraint_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PhysicsConstraint_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6975fbcd) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x6975fbcd;
	} else {
		return inClassId==(int)0x7b609ac2;
	}
}


hx::ObjectPtr< PhysicsConstraint_obj > PhysicsConstraint_obj::__new() {
	hx::ObjectPtr< PhysicsConstraint_obj > __this = new PhysicsConstraint_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< PhysicsConstraint_obj > PhysicsConstraint_obj::__alloc(hx::Ctx *_hx_ctx) {
	PhysicsConstraint_obj *__this = (PhysicsConstraint_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(PhysicsConstraint_obj), true, "armory.trait.physics.PhysicsConstraint"));
	*(void **)__this = PhysicsConstraint_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

PhysicsConstraint_obj::PhysicsConstraint_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *PhysicsConstraint_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *PhysicsConstraint_obj_sStaticStorageInfo = 0;
#endif

static void PhysicsConstraint_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PhysicsConstraint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PhysicsConstraint_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PhysicsConstraint_obj::__mClass,"__mClass");
};

#endif

hx::Class PhysicsConstraint_obj::__mClass;

void PhysicsConstraint_obj::__register()
{
	hx::Object *dummy = new PhysicsConstraint_obj;
	PhysicsConstraint_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.trait.physics.PhysicsConstraint","\x89","\xfa","\x3e","\xc6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = PhysicsConstraint_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< PhysicsConstraint_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PhysicsConstraint_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PhysicsConstraint_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PhysicsConstraint_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace trait
} // end namespace physics

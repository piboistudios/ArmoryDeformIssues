// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_armory_trait_CutResult
#include <armory/trait/CutResult.h>
#endif
#ifndef INCLUDED_iron_object_MeshObject
#include <iron/object/MeshObject.h>
#endif
#ifndef INCLUDED_iron_object_Object
#include <iron/object/Object.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_41e23355bf4a2d59_572_new,"armory.trait.CutResult","new",0xad45a65d,"armory.trait.CutResult.new","armory/trait/PhysicsBreak.hx",572,0x7f52e3b0)
namespace armory{
namespace trait{

void CutResult_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_41e23355bf4a2d59_572_new)
HXLINE( 574)		this->object2 = null();
HXLINE( 573)		this->object1 = null();
            	}

Dynamic CutResult_obj::__CreateEmpty() { return new CutResult_obj; }

void *CutResult_obj::_hx_vtable = 0;

Dynamic CutResult_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CutResult_obj > _hx_result = new CutResult_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CutResult_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x469a56cf;
}


hx::ObjectPtr< CutResult_obj > CutResult_obj::__new() {
	hx::ObjectPtr< CutResult_obj > __this = new CutResult_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< CutResult_obj > CutResult_obj::__alloc(hx::Ctx *_hx_ctx) {
	CutResult_obj *__this = (CutResult_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CutResult_obj), true, "armory.trait.CutResult"));
	*(void **)__this = CutResult_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

CutResult_obj::CutResult_obj()
{
}

void CutResult_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CutResult);
	HX_MARK_MEMBER_NAME(object1,"object1");
	HX_MARK_MEMBER_NAME(object2,"object2");
	HX_MARK_END_CLASS();
}

void CutResult_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(object1,"object1");
	HX_VISIT_MEMBER_NAME(object2,"object2");
}

hx::Val CutResult_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"object1") ) { return hx::Val( object1 ); }
		if (HX_FIELD_EQ(inName,"object2") ) { return hx::Val( object2 ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val CutResult_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"object1") ) { object1=inValue.Cast<  ::iron::object::MeshObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"object2") ) { object2=inValue.Cast<  ::iron::object::MeshObject >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CutResult_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("object1","\x92","\x68","\x4f","\x82"));
	outFields->push(HX_HCSTRING("object2","\x93","\x68","\x4f","\x82"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo CutResult_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::iron::object::MeshObject*/ ,(int)offsetof(CutResult_obj,object1),HX_HCSTRING("object1","\x92","\x68","\x4f","\x82")},
	{hx::fsObject /*::iron::object::MeshObject*/ ,(int)offsetof(CutResult_obj,object2),HX_HCSTRING("object2","\x93","\x68","\x4f","\x82")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *CutResult_obj_sStaticStorageInfo = 0;
#endif

static ::String CutResult_obj_sMemberFields[] = {
	HX_HCSTRING("object1","\x92","\x68","\x4f","\x82"),
	HX_HCSTRING("object2","\x93","\x68","\x4f","\x82"),
	::String(null()) };

static void CutResult_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CutResult_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CutResult_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CutResult_obj::__mClass,"__mClass");
};

#endif

hx::Class CutResult_obj::__mClass;

void CutResult_obj::__register()
{
	hx::Object *dummy = new CutResult_obj;
	CutResult_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.trait.CutResult","\xeb","\x33","\xca","\xa2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CutResult_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(CutResult_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CutResult_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CutResult_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CutResult_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CutResult_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace trait

// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_iron_math_Vec4
#include <iron/math/Vec4.h>
#endif
#ifndef INCLUDED_iron_object_FrustumPlane
#include <iron/object/FrustumPlane.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e18e0914b47657d8_212_new,"iron.object.FrustumPlane","new",0xde2e5315,"iron.object.FrustumPlane.new","iron/object/CameraObject.hx",212,0x9c38de71)
HX_LOCAL_STACK_FRAME(_hx_pos_e18e0914b47657d8_218_normalize,"iron.object.FrustumPlane","normalize",0xb5f63002,"iron.object.FrustumPlane.normalize","iron/object/CameraObject.hx",218,0x9c38de71)
HX_LOCAL_STACK_FRAME(_hx_pos_e18e0914b47657d8_225_distanceToSphere,"iron.object.FrustumPlane","distanceToSphere",0x40ee9368,"iron.object.FrustumPlane.distanceToSphere","iron/object/CameraObject.hx",225,0x9c38de71)
HX_LOCAL_STACK_FRAME(_hx_pos_e18e0914b47657d8_228_setComponents,"iron.object.FrustumPlane","setComponents",0x7da9ca4d,"iron.object.FrustumPlane.setComponents","iron/object/CameraObject.hx",228,0x9c38de71)
namespace iron{
namespace object{

void FrustumPlane_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_e18e0914b47657d8_212_new)
HXLINE( 214)		this->constant = ((Float)0.0);
HXLINE( 213)		this->normal =  ::iron::math::Vec4_obj::__alloc( HX_CTX ,((Float)1.0),((Float)0.0),((Float)0.0),null());
            	}

Dynamic FrustumPlane_obj::__CreateEmpty() { return new FrustumPlane_obj; }

void *FrustumPlane_obj::_hx_vtable = 0;

Dynamic FrustumPlane_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FrustumPlane_obj > _hx_result = new FrustumPlane_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FrustumPlane_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x31c08381;
}

void FrustumPlane_obj::normalize(){
            	HX_STACKFRAME(&_hx_pos_e18e0914b47657d8_218_normalize)
HXLINE( 219)		 ::iron::math::Vec4 _this = this->normal;
HXDLIN( 219)		float v = (_this->x * _this->x);
HXDLIN( 219)		float v1 = (v + (_this->y * _this->y));
HXDLIN( 219)		Float inverseNormalLength = ((Float)((Float)1.0) / (Float)::Math_obj::sqrt((v1 + (_this->z * _this->z))));
HXLINE( 220)		this->normal->mult(inverseNormalLength);
HXLINE( 221)		 ::iron::object::FrustumPlane _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 221)		_hx_tmp->constant = (_hx_tmp->constant * inverseNormalLength);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FrustumPlane_obj,normalize,(void))

Float FrustumPlane_obj::distanceToSphere( ::iron::math::Vec4 sphereCenter,Float sphereRadius){
            	HX_STACKFRAME(&_hx_pos_e18e0914b47657d8_225_distanceToSphere)
HXDLIN( 225)		float _hx_tmp = this->normal->dot(sphereCenter);
HXDLIN( 225)		return ((_hx_tmp + this->constant) - sphereRadius);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FrustumPlane_obj,distanceToSphere,return )

void FrustumPlane_obj::setComponents(Float x,Float y,Float z,Float w){
            	HX_STACKFRAME(&_hx_pos_e18e0914b47657d8_228_setComponents)
HXLINE( 229)		this->normal->set(x,y,z,null());
HXLINE( 230)		this->constant = w;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FrustumPlane_obj,setComponents,(void))


hx::ObjectPtr< FrustumPlane_obj > FrustumPlane_obj::__new() {
	hx::ObjectPtr< FrustumPlane_obj > __this = new FrustumPlane_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< FrustumPlane_obj > FrustumPlane_obj::__alloc(hx::Ctx *_hx_ctx) {
	FrustumPlane_obj *__this = (FrustumPlane_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FrustumPlane_obj), true, "iron.object.FrustumPlane"));
	*(void **)__this = FrustumPlane_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FrustumPlane_obj::FrustumPlane_obj()
{
}

void FrustumPlane_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FrustumPlane);
	HX_MARK_MEMBER_NAME(normal,"normal");
	HX_MARK_MEMBER_NAME(constant,"constant");
	HX_MARK_END_CLASS();
}

void FrustumPlane_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(normal,"normal");
	HX_VISIT_MEMBER_NAME(constant,"constant");
}

hx::Val FrustumPlane_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"normal") ) { return hx::Val( normal ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"constant") ) { return hx::Val( constant ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"normalize") ) { return hx::Val( normalize_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setComponents") ) { return hx::Val( setComponents_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"distanceToSphere") ) { return hx::Val( distanceToSphere_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FrustumPlane_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"normal") ) { normal=inValue.Cast<  ::iron::math::Vec4 >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"constant") ) { constant=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FrustumPlane_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("normal","\x27","\x72","\x69","\x30"));
	outFields->push(HX_HCSTRING("constant","\x64","\xc1","\x9d","\xa5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FrustumPlane_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::iron::math::Vec4*/ ,(int)offsetof(FrustumPlane_obj,normal),HX_HCSTRING("normal","\x27","\x72","\x69","\x30")},
	{hx::fsFloat,(int)offsetof(FrustumPlane_obj,constant),HX_HCSTRING("constant","\x64","\xc1","\x9d","\xa5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FrustumPlane_obj_sStaticStorageInfo = 0;
#endif

static ::String FrustumPlane_obj_sMemberFields[] = {
	HX_HCSTRING("normal","\x27","\x72","\x69","\x30"),
	HX_HCSTRING("constant","\x64","\xc1","\x9d","\xa5"),
	HX_HCSTRING("normalize","\x8d","\x37","\xa1","\xab"),
	HX_HCSTRING("distanceToSphere","\x3d","\x63","\x26","\x96"),
	HX_HCSTRING("setComponents","\x58","\xf3","\x96","\xfb"),
	::String(null()) };

static void FrustumPlane_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FrustumPlane_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FrustumPlane_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FrustumPlane_obj::__mClass,"__mClass");
};

#endif

hx::Class FrustumPlane_obj::__mClass;

void FrustumPlane_obj::__register()
{
	hx::Object *dummy = new FrustumPlane_obj;
	FrustumPlane_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("iron.object.FrustumPlane","\xa3","\x24","\x40","\x58");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FrustumPlane_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FrustumPlane_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FrustumPlane_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FrustumPlane_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FrustumPlane_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FrustumPlane_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace iron
} // end namespace object

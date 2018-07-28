// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_armory_trait_FollowCamera
#include <armory/trait/FollowCamera.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_iron_Scene
#include <iron/Scene.h>
#endif
#ifndef INCLUDED_iron_Trait
#include <iron/Trait.h>
#endif
#ifndef INCLUDED_iron_math_Mat4
#include <iron/math/Mat4.h>
#endif
#ifndef INCLUDED_iron_math_Vec4
#include <iron/math/Vec4.h>
#endif
#ifndef INCLUDED_iron_object_CameraObject
#include <iron/object/CameraObject.h>
#endif
#ifndef INCLUDED_iron_object_Object
#include <iron/object/Object.h>
#endif
#ifndef INCLUDED_iron_object_Transform
#include <iron/object/Transform.h>
#endif
#ifndef INCLUDED_kha_math_FastMatrix4
#include <kha/math/FastMatrix4.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_76b96a0c040ed84c_30_new,"armory.trait.FollowCamera","new",0x6b369c7c,"armory.trait.FollowCamera.new","armory/trait/FollowCamera.hx",30,0x0761f9f2)
HX_DEFINE_STACK_FRAME(_hx_pos_76b96a0c040ed84c_44_new,"armory.trait.FollowCamera","new",0x6b369c7c,"armory.trait.FollowCamera.new","armory/trait/FollowCamera.hx",44,0x0761f9f2)
HX_DEFINE_STACK_FRAME(_hx_pos_76b96a0c040ed84c_13_new,"armory.trait.FollowCamera","new",0x6b369c7c,"armory.trait.FollowCamera.new","armory/trait/FollowCamera.hx",13,0x0761f9f2)
HX_LOCAL_STACK_FRAME(_hx_pos_76b96a0c040ed84c_13_boot,"armory.trait.FollowCamera","boot",0x5cab5096,"armory.trait.FollowCamera.boot","armory/trait/FollowCamera.hx",13,0x0761f9f2)
namespace armory{
namespace trait{

void FollowCamera_obj::__construct(){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::armory::trait::FollowCamera,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_76b96a0c040ed84c_30_new)
HXLINE(  31)			_gthis->targetObj = ::iron::Scene_obj::active->getChild(_gthis->target);
HXLINE(  32)			if (hx::IsNull( _gthis->targetObj )) {
HXLINE(  33)				_gthis->disabled = true;
HXLINE(  34)				::haxe::Log_obj::trace(HX_("FollowCamera error, unable to set target object",a6,c3,a2,8d),hx::SourceInfo(HX_("FollowCamera.hx",68,11,e4,6e),34,HX_("armory.trait.FollowCamera",8a,ee,9f,bd),HX_("new",60,d0,53,00)));
            			}
HXLINE(  37)			if (::Std_obj::is(_gthis->object,hx::ClassOf< ::iron::object::CameraObject >())) {
HXLINE(  38)				_gthis->disabled = true;
HXLINE(  39)				::haxe::Log_obj::trace(HX_("FollowCamera error, this trait should not be placed directly on a camera objet. It should be placed on another object such as an Empty. The camera should be placed as a child to the Empty object with offset, creating a camera boom.",be,d8,81,ef),hx::SourceInfo(HX_("FollowCamera.hx",68,11,e4,6e),39,HX_("armory.trait.FollowCamera",8a,ee,9f,bd),HX_("new",60,d0,53,00)));
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_1, ::armory::trait::FollowCamera,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_76b96a0c040ed84c_44_new)
HXLINE(  44)			if (!(_gthis->disabled)) {
HXLINE(  45)				if (hx::IsNotNull( _gthis->targetObj )) {
HXLINE(  46)					if (_gthis->lerp) {
HXLINE(  47)						 ::iron::math::Mat4 _this = _gthis->targetObj->transform->world;
HXDLIN(  47)						 ::iron::math::Vec4 vec =  ::iron::math::Vec4_obj::__alloc( HX_CTX ,_this->self->_30,_this->self->_31,_this->self->_32,_this->self->_33);
HXDLIN(  47)						 ::iron::math::Mat4 _this1 = _gthis->object->transform->world;
HXDLIN(  47)						 ::iron::math::Vec4 vec1 =  ::iron::math::Vec4_obj::__alloc( HX_CTX ,_this1->self->_30,_this1->self->_31,_this1->self->_32,_this1->self->_33);
HXDLIN(  47)						 ::iron::math::Vec4 vec2 = ::iron::math::Vec4_obj::lerp(vec,vec1,_gthis->lerpSpeed);
HXLINE(  48)						_gthis->object->transform->loc = vec2;
            					}
            					else {
HXLINE(  51)						 ::iron::math::Mat4 _this2 = _gthis->targetObj->transform->world;
HXDLIN(  51)						 ::iron::math::Vec4 _hx_tmp =  ::iron::math::Vec4_obj::__alloc( HX_CTX ,_this2->self->_30,_this2->self->_31,_this2->self->_32,_this2->self->_33);
HXDLIN(  51)						_gthis->object->transform->loc = _hx_tmp;
            					}
HXLINE(  53)					_gthis->object->transform->buildMatrix();
            				}
            				else {
HXLINE(  56)					_gthis->targetObj = ::iron::Scene_obj::active->getChild(_gthis->target);
            				}
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACKFRAME(&_hx_pos_76b96a0c040ed84c_13_new)
HXLINE(  25)		this->disabled = false;
HXLINE(  22)		this->lerpSpeed = ((Float)0.1);
HXLINE(  19)		this->lerp = true;
HXLINE(  27)		 ::armory::trait::FollowCamera _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE(  28)		super::__construct();
HXLINE(  30)		this->notifyOnInit( ::Dynamic(new _hx_Closure_0(_gthis)));
HXLINE(  43)		this->notifyOnLateUpdate( ::Dynamic(new _hx_Closure_1(_gthis)));
            	}

Dynamic FollowCamera_obj::__CreateEmpty() { return new FollowCamera_obj; }

void *FollowCamera_obj::_hx_vtable = 0;

Dynamic FollowCamera_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FollowCamera_obj > _hx_result = new FollowCamera_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FollowCamera_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6bc5b226) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x6bc5b226;
	} else {
		return inClassId==(int)0x7b609ac2;
	}
}


hx::ObjectPtr< FollowCamera_obj > FollowCamera_obj::__new() {
	hx::ObjectPtr< FollowCamera_obj > __this = new FollowCamera_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< FollowCamera_obj > FollowCamera_obj::__alloc(hx::Ctx *_hx_ctx) {
	FollowCamera_obj *__this = (FollowCamera_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FollowCamera_obj), true, "armory.trait.FollowCamera"));
	*(void **)__this = FollowCamera_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FollowCamera_obj::FollowCamera_obj()
{
}

void FollowCamera_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FollowCamera);
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(lerp,"lerp");
	HX_MARK_MEMBER_NAME(lerpSpeed,"lerpSpeed");
	HX_MARK_MEMBER_NAME(targetObj,"targetObj");
	HX_MARK_MEMBER_NAME(disabled,"disabled");
	 ::iron::Trait_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FollowCamera_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(lerp,"lerp");
	HX_VISIT_MEMBER_NAME(lerpSpeed,"lerpSpeed");
	HX_VISIT_MEMBER_NAME(targetObj,"targetObj");
	HX_VISIT_MEMBER_NAME(disabled,"disabled");
	 ::iron::Trait_obj::__Visit(HX_VISIT_ARG);
}

hx::Val FollowCamera_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lerp") ) { return hx::Val( lerp ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return hx::Val( target ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"disabled") ) { return hx::Val( disabled ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lerpSpeed") ) { return hx::Val( lerpSpeed ); }
		if (HX_FIELD_EQ(inName,"targetObj") ) { return hx::Val( targetObj ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FollowCamera_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lerp") ) { lerp=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"disabled") ) { disabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"lerpSpeed") ) { lerpSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"targetObj") ) { targetObj=inValue.Cast<  ::iron::object::Object >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FollowCamera_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("target","\x51","\xf3","\xec","\x86"));
	outFields->push(HX_HCSTRING("lerp","\x77","\x12","\xb0","\x47"));
	outFields->push(HX_HCSTRING("lerpSpeed","\x90","\xa5","\xdd","\xef"));
	outFields->push(HX_HCSTRING("targetObj","\x26","\x7d","\x33","\x69"));
	outFields->push(HX_HCSTRING("disabled","\x7c","\x41","\x04","\x7c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FollowCamera_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(FollowCamera_obj,target),HX_HCSTRING("target","\x51","\xf3","\xec","\x86")},
	{hx::fsBool,(int)offsetof(FollowCamera_obj,lerp),HX_HCSTRING("lerp","\x77","\x12","\xb0","\x47")},
	{hx::fsFloat,(int)offsetof(FollowCamera_obj,lerpSpeed),HX_HCSTRING("lerpSpeed","\x90","\xa5","\xdd","\xef")},
	{hx::fsObject /*::iron::object::Object*/ ,(int)offsetof(FollowCamera_obj,targetObj),HX_HCSTRING("targetObj","\x26","\x7d","\x33","\x69")},
	{hx::fsBool,(int)offsetof(FollowCamera_obj,disabled),HX_HCSTRING("disabled","\x7c","\x41","\x04","\x7c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FollowCamera_obj_sStaticStorageInfo = 0;
#endif

static ::String FollowCamera_obj_sMemberFields[] = {
	HX_HCSTRING("target","\x51","\xf3","\xec","\x86"),
	HX_HCSTRING("lerp","\x77","\x12","\xb0","\x47"),
	HX_HCSTRING("lerpSpeed","\x90","\xa5","\xdd","\xef"),
	HX_HCSTRING("targetObj","\x26","\x7d","\x33","\x69"),
	HX_HCSTRING("disabled","\x7c","\x41","\x04","\x7c"),
	::String(null()) };

static void FollowCamera_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FollowCamera_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FollowCamera_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FollowCamera_obj::__mClass,"__mClass");
};

#endif

hx::Class FollowCamera_obj::__mClass;

void FollowCamera_obj::__register()
{
	hx::Object *dummy = new FollowCamera_obj;
	FollowCamera_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.trait.FollowCamera","\x8a","\xee","\x9f","\xbd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FollowCamera_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FollowCamera_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FollowCamera_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FollowCamera_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FollowCamera_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FollowCamera_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FollowCamera_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_76b96a0c040ed84c_13_boot)
HXDLIN(  13)		__mClass->__meta__ =  ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("fields",79,8e,8e,80), ::Dynamic(hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("target",51,f3,ec,86), ::Dynamic(hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("prop",a3,c7,5e,4a),null())))
            				->setFixed(1,HX_("lerpSpeed",90,a5,dd,ef), ::Dynamic(hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("prop",a3,c7,5e,4a),null())))
            				->setFixed(2,HX_("lerp",77,12,b0,47), ::Dynamic(hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("prop",a3,c7,5e,4a),null()))))));
            	}
}

} // end namespace armory
} // end namespace trait

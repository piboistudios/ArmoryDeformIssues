// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_armory_trait_SceneInstance
#include <armory/trait/SceneInstance.h>
#endif
#ifndef INCLUDED_iron_Scene
#include <iron/Scene.h>
#endif
#ifndef INCLUDED_iron_Trait
#include <iron/Trait.h>
#endif
#ifndef INCLUDED_iron_object_Object
#include <iron/object/Object.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_84e8cbbb9b3d7598_19_new,"armory.trait.SceneInstance","new",0x4ecd265f,"armory.trait.SceneInstance.new","armory/trait/SceneInstance.hx",19,0xcc66a4b3)
HX_DEFINE_STACK_FRAME(_hx_pos_84e8cbbb9b3d7598_15_new,"armory.trait.SceneInstance","new",0x4ecd265f,"armory.trait.SceneInstance.new","armory/trait/SceneInstance.hx",15,0xcc66a4b3)
HX_LOCAL_STACK_FRAME(_hx_pos_84e8cbbb9b3d7598_7_safeFilename,"armory.trait.SceneInstance","safeFilename",0x63ac6f55,"armory.trait.SceneInstance.safeFilename","armory/trait/SceneInstance.hx",7,0xcc66a4b3)
namespace armory{
namespace trait{

void SceneInstance_obj::__construct(::String sceneName){
            		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_1, ::armory::trait::SceneInstance,_gthis,::String,sceneName) HXARGC(0)
            		void _hx_run(){
            			HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            			void _hx_run( ::iron::object::Object o){
            				HX_STACKFRAME(&_hx_pos_84e8cbbb9b3d7598_19_new)
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_STACKFRAME(&_hx_pos_84e8cbbb9b3d7598_19_new)
HXLINE(  19)			 ::iron::Scene _hx_tmp = ::iron::Scene_obj::active;
HXDLIN(  19)			::String _hx_tmp1 = _gthis->safeFilename(sceneName);
HXDLIN(  19)			_hx_tmp->addScene(_hx_tmp1,_gthis->object, ::Dynamic(new _hx_Closure_0()));
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACKFRAME(&_hx_pos_84e8cbbb9b3d7598_15_new)
HXDLIN(  15)		 ::armory::trait::SceneInstance _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE(  16)		super::__construct();
HXLINE(  18)		this->notifyOnInit( ::Dynamic(new _hx_Closure_1(_gthis,sceneName)));
            	}

Dynamic SceneInstance_obj::__CreateEmpty() { return new SceneInstance_obj; }

void *SceneInstance_obj::_hx_vtable = 0;

Dynamic SceneInstance_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SceneInstance_obj > _hx_result = new SceneInstance_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SceneInstance_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x00b26fd1) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x00b26fd1;
	} else {
		return inClassId==(int)0x7b609ac2;
	}
}

::String SceneInstance_obj::safeFilename(::String s){
            	HX_STACKFRAME(&_hx_pos_84e8cbbb9b3d7598_7_safeFilename)
HXLINE(   8)		s = ::StringTools_obj::replace(s,HX_(".",2e,00,00,00),HX_("_",5f,00,00,00));
HXLINE(   9)		s = ::StringTools_obj::replace(s,HX_("-",2d,00,00,00),HX_("_",5f,00,00,00));
HXLINE(  10)		s = ::StringTools_obj::replace(s,HX_(" ",20,00,00,00),HX_("_",5f,00,00,00));
HXLINE(  11)		if (hx::IsNotNull( ::Std_obj::parseInt(s.charAt((int)0)) )) {
HXLINE(  11)			s = (HX_("_",5f,00,00,00) + s);
            		}
HXLINE(  12)		return s;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SceneInstance_obj,safeFilename,return )


hx::ObjectPtr< SceneInstance_obj > SceneInstance_obj::__new(::String sceneName) {
	hx::ObjectPtr< SceneInstance_obj > __this = new SceneInstance_obj();
	__this->__construct(sceneName);
	return __this;
}

hx::ObjectPtr< SceneInstance_obj > SceneInstance_obj::__alloc(hx::Ctx *_hx_ctx,::String sceneName) {
	SceneInstance_obj *__this = (SceneInstance_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(SceneInstance_obj), true, "armory.trait.SceneInstance"));
	*(void **)__this = SceneInstance_obj::_hx_vtable;
	__this->__construct(sceneName);
	return __this;
}

SceneInstance_obj::SceneInstance_obj()
{
}

hx::Val SceneInstance_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"safeFilename") ) { return hx::Val( safeFilename_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *SceneInstance_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *SceneInstance_obj_sStaticStorageInfo = 0;
#endif

static ::String SceneInstance_obj_sMemberFields[] = {
	HX_HCSTRING("safeFilename","\x34","\xfd","\x4a","\x85"),
	::String(null()) };

static void SceneInstance_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SceneInstance_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SceneInstance_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SceneInstance_obj::__mClass,"__mClass");
};

#endif

hx::Class SceneInstance_obj::__mClass;

void SceneInstance_obj::__register()
{
	hx::Object *dummy = new SceneInstance_obj;
	SceneInstance_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.trait.SceneInstance","\xed","\x0a","\xcd","\x4d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SceneInstance_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(SceneInstance_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SceneInstance_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SceneInstance_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SceneInstance_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SceneInstance_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace trait

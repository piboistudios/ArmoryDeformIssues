// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_9529af7f6600691f_44_array,"Lambda","array",0x9c8b0512,"Lambda.array","C:\\Armory_04_win64_b27\\Armory\\armsdk\\Kha\\Tools\\haxe\\std/Lambda.hx",44,0xa3c2469f)
HX_LOCAL_STACK_FRAME(_hx_pos_9529af7f6600691f_173_iter,"Lambda","iter",0x9d877fbf,"Lambda.iter","C:\\Armory_04_win64_b27\\Armory\\armsdk\\Kha\\Tools\\haxe\\std/Lambda.hx",173,0xa3c2469f)

void Lambda_obj::__construct() { }

Dynamic Lambda_obj::__CreateEmpty() { return new Lambda_obj; }

void *Lambda_obj::_hx_vtable = 0;

Dynamic Lambda_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Lambda_obj > _hx_result = new Lambda_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Lambda_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x02196def;
}

::cpp::VirtualArray Lambda_obj::array( ::Dynamic it){
            	HX_STACKFRAME(&_hx_pos_9529af7f6600691f_44_array)
HXLINE(  45)		::cpp::VirtualArray a = ::cpp::VirtualArray_obj::__new();
HXLINE(  46)		{
HXLINE(  46)			 ::Dynamic i = it->__Field(HX_("iterator",ee,49,9a,93),hx::paccDynamic)();
HXDLIN(  46)			while(( (bool)(i->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  46)				 ::Dynamic i1 = i->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)();
HXLINE(  47)				a->push(i1);
            			}
            		}
HXLINE(  48)		return a;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lambda_obj,array,return )

void Lambda_obj::iter( ::Dynamic it, ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_9529af7f6600691f_173_iter)
HXDLIN( 173)		 ::Dynamic x = it->__Field(HX_("iterator",ee,49,9a,93),hx::paccDynamic)();
HXDLIN( 173)		while(( (bool)(x->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXDLIN( 173)			 ::Dynamic x1 = x->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)();
HXLINE( 174)			f(x1);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lambda_obj,iter,(void))


Lambda_obj::Lambda_obj()
{
}

bool Lambda_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"iter") ) { outValue = iter_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"array") ) { outValue = array_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Lambda_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Lambda_obj_sStaticStorageInfo = 0;
#endif

static void Lambda_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Lambda_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Lambda_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Lambda_obj::__mClass,"__mClass");
};

#endif

hx::Class Lambda_obj::__mClass;

static ::String Lambda_obj_sStaticFields[] = {
	HX_HCSTRING("array","\x99","\x6d","\x8f","\x25"),
	HX_HCSTRING("iter","\x18","\xc5","\xbf","\x45"),
	::String(null())
};

void Lambda_obj::__register()
{
	hx::Object *dummy = new Lambda_obj;
	Lambda_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Lambda","\x27","\xa7","\x54","\x85");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Lambda_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Lambda_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Lambda_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Lambda_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Lambda_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Lambda_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Lambda_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}


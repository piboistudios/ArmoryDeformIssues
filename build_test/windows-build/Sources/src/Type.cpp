// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_f638b881a20bfa1d_36_getClass,"Type","getClass",0xc4e49bd6,"Type.getClass","C:\\Armory_04_win64_b27\\Armory\\armsdk\\Kha\\Tools\\haxe\\std/cpp/_std/Type.hx",36,0x12e3c97d)
HX_LOCAL_STACK_FRAME(_hx_pos_f638b881a20bfa1d_67_resolveClass,"Type","resolveClass",0x23b06bc0,"Type.resolveClass","C:\\Armory_04_win64_b27\\Armory\\armsdk\\Kha\\Tools\\haxe\\std/cpp/_std/Type.hx",67,0x12e3c97d)
HX_LOCAL_STACK_FRAME(_hx_pos_f638b881a20bfa1d_74_resolveEnum,"Type","resolveEnum",0x26394079,"Type.resolveEnum","C:\\Armory_04_win64_b27\\Armory\\armsdk\\Kha\\Tools\\haxe\\std/cpp/_std/Type.hx",74,0x12e3c97d)
HX_LOCAL_STACK_FRAME(_hx_pos_f638b881a20bfa1d_81_createInstance,"Type","createInstance",0xab84f9c5,"Type.createInstance","C:\\Armory_04_win64_b27\\Armory\\armsdk\\Kha\\Tools\\haxe\\std/cpp/_std/Type.hx",81,0x12e3c97d)
HX_LOCAL_STACK_FRAME(_hx_pos_f638b881a20bfa1d_88_createEmptyInstance,"Type","createEmptyInstance",0xcb752312,"Type.createEmptyInstance","C:\\Armory_04_win64_b27\\Armory\\armsdk\\Kha\\Tools\\haxe\\std/cpp/_std/Type.hx",88,0x12e3c97d)
HX_LOCAL_STACK_FRAME(_hx_pos_f638b881a20bfa1d_92_createEnum,"Type","createEnum",0xd8d56d31,"Type.createEnum","C:\\Armory_04_win64_b27\\Armory\\armsdk\\Kha\\Tools\\haxe\\std/cpp/_std/Type.hx",92,0x12e3c97d)
HX_LOCAL_STACK_FRAME(_hx_pos_f638b881a20bfa1d_102_getInstanceFields,"Type","getInstanceFields",0xe970f890,"Type.getInstanceFields","C:\\Armory_04_win64_b27\\Armory\\armsdk\\Kha\\Tools\\haxe\\std/cpp/_std/Type.hx",102,0x12e3c97d)
HX_LOCAL_STACK_FRAME(_hx_pos_f638b881a20bfa1d_110_getEnumConstructs,"Type","getEnumConstructs",0x7f46cf7f,"Type.getEnumConstructs","C:\\Armory_04_win64_b27\\Armory\\armsdk\\Kha\\Tools\\haxe\\std/cpp/_std/Type.hx",110,0x12e3c97d)
HX_LOCAL_STACK_FRAME(_hx_pos_f638b881a20bfa1d_113_typeof,"Type","typeof",0xd6c51d65,"Type.typeof","C:\\Armory_04_win64_b27\\Armory\\armsdk\\Kha\\Tools\\haxe\\std/cpp/_std/Type.hx",113,0x12e3c97d)

void Type_obj::__construct() { }

Dynamic Type_obj::__CreateEmpty() { return new Type_obj; }

void *Type_obj::_hx_vtable = 0;

Dynamic Type_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Type_obj > _hx_result = new Type_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Type_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x37e21eda;
}

hx::Class Type_obj::getClass( ::Dynamic o){
            	HX_STACKFRAME(&_hx_pos_f638b881a20bfa1d_36_getClass)
HXLINE(  37)		bool _hx_tmp;
HXDLIN(  37)		if (hx::IsNotNull( o )) {
HXLINE(  37)			_hx_tmp = !(::Reflect_obj::isObject(o));
            		}
            		else {
HXLINE(  37)			_hx_tmp = true;
            		}
HXDLIN(  37)		if (_hx_tmp) {
HXLINE(  37)			return null();
            		}
HXLINE(  38)		 ::Dynamic c = o->__GetClass();
HXLINE(  39)		{
HXLINE(  39)			::String _g = ( (::String)(c->toString()) );
HXDLIN(  39)			::String _hx_switch_0 = _g;
            			if (  (_hx_switch_0==HX_("Class",18,e8,85,db)) ){
HXLINE(  42)				return null();
HXDLIN(  42)				goto _hx_goto_0;
            			}
            			if (  (_hx_switch_0==HX_("__Anon",8c,1a,43,da)) ){
HXLINE(  41)				return null();
HXDLIN(  41)				goto _hx_goto_0;
            			}
            			_hx_goto_0:;
            		}
HXLINE(  44)		return c;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,getClass,return )

hx::Class Type_obj::resolveClass(::String name){
            	HX_STACKFRAME(&_hx_pos_f638b881a20bfa1d_67_resolveClass)
HXLINE(  68)		hx::Class result = ::hx::Class_obj::Resolve(name);
HXLINE(  69)		bool _hx_tmp;
HXDLIN(  69)		if (hx::IsNotNull( result )) {
HXLINE(  69)			_hx_tmp = ( (bool)(result->__IsEnum()) );
            		}
            		else {
HXLINE(  69)			_hx_tmp = false;
            		}
HXDLIN(  69)		if (_hx_tmp) {
HXLINE(  70)			return null();
            		}
HXLINE(  71)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,resolveClass,return )

hx::Class Type_obj::resolveEnum(::String name){
            	HX_STACKFRAME(&_hx_pos_f638b881a20bfa1d_74_resolveEnum)
HXLINE(  75)		hx::Class result = ::hx::Class_obj::Resolve(name);
HXLINE(  76)		bool _hx_tmp;
HXDLIN(  76)		if (hx::IsNotNull( result )) {
HXLINE(  76)			_hx_tmp = !(( (bool)(result->__IsEnum()) ));
            		}
            		else {
HXLINE(  76)			_hx_tmp = false;
            		}
HXDLIN(  76)		if (_hx_tmp) {
HXLINE(  77)			return null();
            		}
HXLINE(  78)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,resolveEnum,return )

 ::Dynamic Type_obj::createInstance(hx::Class cl,::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_f638b881a20bfa1d_81_createInstance)
HXLINE(  82)		if (hx::IsNotNull( cl )) {
HXLINE(  83)			return cl->ConstructArgs(args);
            		}
HXLINE(  84)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Type_obj,createInstance,return )

 ::Dynamic Type_obj::createEmptyInstance(hx::Class cl){
            	HX_STACKFRAME(&_hx_pos_f638b881a20bfa1d_88_createEmptyInstance)
HXDLIN(  88)		return cl->ConstructEmpty();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,createEmptyInstance,return )

 ::Dynamic Type_obj::createEnum(hx::Class e,::String constr,::cpp::VirtualArray params){
            	HX_STACKFRAME(&_hx_pos_f638b881a20bfa1d_92_createEnum)
HXDLIN(  92)		return e->ConstructEnum(constr,params);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Type_obj,createEnum,return )

::Array< ::String > Type_obj::getInstanceFields(hx::Class c){
            	HX_STACKFRAME(&_hx_pos_f638b881a20bfa1d_102_getInstanceFields)
HXDLIN( 102)		return ( (::Array< ::String >)(c->GetInstanceFields()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,getInstanceFields,return )

::Array< ::String > Type_obj::getEnumConstructs(hx::Class e){
            	HX_STACKFRAME(&_hx_pos_f638b881a20bfa1d_110_getEnumConstructs)
HXDLIN( 110)		return ( (::Array< ::String >)(e->GetClassFields()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,getEnumConstructs,return )

 ::ValueType Type_obj::_hx_typeof( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_f638b881a20bfa1d_113_typeof)
HXLINE( 114)		if (hx::IsNull( v )) {
HXLINE( 114)			return ::ValueType_obj::TNull_dyn();
            		}
HXLINE( 115)		int t = ( (int)(v->__GetType()) );
HXLINE( 116)		switch((int)(t)){
            			case (int)1: {
HXLINE( 120)				return ::ValueType_obj::TFloat_dyn();
            			}
            			break;
            			case (int)2: {
HXLINE( 118)				return ::ValueType_obj::TBool_dyn();
            			}
            			break;
            			case (int)4: {
HXLINE( 122)				return ::ValueType_obj::TObject_dyn();
            			}
            			break;
            			case (int)6: {
HXLINE( 121)				return ::ValueType_obj::TFunction_dyn();
            			}
            			break;
            			case (int)7: {
HXLINE( 123)				return ::ValueType_obj::TEnum(v->__GetClass());
            			}
            			break;
            			case (int)255: {
HXLINE( 119)				return ::ValueType_obj::TInt_dyn();
            			}
            			break;
            			default:{
HXLINE( 125)				return ::ValueType_obj::TClass(v->__GetClass());
            			}
            		}
HXLINE( 116)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,_hx_typeof,return )


Type_obj::Type_obj()
{
}

bool Type_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"typeof") ) { outValue = _hx_typeof_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getClass") ) { outValue = getClass_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"createEnum") ) { outValue = createEnum_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"resolveEnum") ) { outValue = resolveEnum_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resolveClass") ) { outValue = resolveClass_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createInstance") ) { outValue = createInstance_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getInstanceFields") ) { outValue = getInstanceFields_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getEnumConstructs") ) { outValue = getEnumConstructs_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"createEmptyInstance") ) { outValue = createEmptyInstance_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Type_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Type_obj_sStaticStorageInfo = 0;
#endif

static void Type_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Type_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Type_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Type_obj::__mClass,"__mClass");
};

#endif

hx::Class Type_obj::__mClass;

static ::String Type_obj_sStaticFields[] = {
	HX_HCSTRING("getClass","\xc2","\x87","\x2f","\xa8"),
	HX_HCSTRING("resolveClass","\xac","\xbd","\xdd","\x80"),
	HX_HCSTRING("resolveEnum","\x0d","\x90","\x51","\xde"),
	HX_HCSTRING("createInstance","\xb1","\x9e","\x1b","\xac"),
	HX_HCSTRING("createEmptyInstance","\xa6","\x26","\x85","\xce"),
	HX_HCSTRING("createEnum","\x1d","\x2c","\xa4","\x55"),
	HX_HCSTRING("getInstanceFields","\x24","\x2f","\x97","\xed"),
	HX_HCSTRING("getEnumConstructs","\x13","\x06","\x6d","\x83"),
	HX_HCSTRING("typeof","\x51","\xf6","\x36","\x57"),
	::String(null())
};

void Type_obj::__register()
{
	hx::Object *dummy = new Type_obj;
	Type_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Type","\xda","\x1e","\xe2","\x37");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Type_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Type_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Type_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Type_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Type_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Type_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Type_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}


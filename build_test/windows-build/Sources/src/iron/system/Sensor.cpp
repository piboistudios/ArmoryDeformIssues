// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_iron_system_Sensor
#include <iron/system/Sensor.h>
#endif
#ifndef INCLUDED_kha_input_Sensor
#include <kha/input/Sensor.h>
#endif
#ifndef INCLUDED_kha_input_SensorType
#include <kha/input/SensorType.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_14d26aa4b803fae1_527_new,"iron.system.Sensor","new",0xc12a6ac5,"iron.system.Sensor.new","iron/system/Input.hx",527,0x32439d6d)
HX_LOCAL_STACK_FRAME(_hx_pos_14d26aa4b803fae1_537_listener,"iron.system.Sensor","listener",0x073897ef,"iron.system.Sensor.listener","iron/system/Input.hx",537,0x32439d6d)
namespace iron{
namespace _hx_system{

void Sensor_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_14d26aa4b803fae1_527_new)
HXLINE( 531)		this->z = ((Float)0.0);
HXLINE( 530)		this->y = ((Float)0.0);
HXLINE( 529)		this->x = ((Float)0.0);
HXLINE( 534)		::kha::input::Sensor_obj::get(::kha::input::SensorType_obj::Accelerometer_dyn())->notify(this->listener_dyn());
            	}

Dynamic Sensor_obj::__CreateEmpty() { return new Sensor_obj; }

void *Sensor_obj::_hx_vtable = 0;

Dynamic Sensor_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Sensor_obj > _hx_result = new Sensor_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Sensor_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6857e311;
}

void Sensor_obj::listener(Float x,Float y,Float z){
            	HX_STACKFRAME(&_hx_pos_14d26aa4b803fae1_537_listener)
HXLINE( 538)		this->x = x;
HXLINE( 539)		this->y = y;
HXLINE( 540)		this->z = z;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Sensor_obj,listener,(void))


hx::ObjectPtr< Sensor_obj > Sensor_obj::__new() {
	hx::ObjectPtr< Sensor_obj > __this = new Sensor_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Sensor_obj > Sensor_obj::__alloc(hx::Ctx *_hx_ctx) {
	Sensor_obj *__this = (Sensor_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Sensor_obj), false, "iron.system.Sensor"));
	*(void **)__this = Sensor_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Sensor_obj::Sensor_obj()
{
}

hx::Val Sensor_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return hx::Val( y ); }
		if (HX_FIELD_EQ(inName,"z") ) { return hx::Val( z ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"listener") ) { return hx::Val( listener_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Sensor_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Sensor_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("z","\x7a","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Sensor_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Sensor_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Sensor_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Sensor_obj,z),HX_HCSTRING("z","\x7a","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Sensor_obj_sStaticStorageInfo = 0;
#endif

static ::String Sensor_obj_sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("z","\x7a","\x00","\x00","\x00"),
	HX_HCSTRING("listener","\x74","\x00","\x32","\x38"),
	::String(null()) };

static void Sensor_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sensor_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Sensor_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sensor_obj::__mClass,"__mClass");
};

#endif

hx::Class Sensor_obj::__mClass;

void Sensor_obj::__register()
{
	hx::Object *dummy = new Sensor_obj;
	Sensor_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("iron.system.Sensor","\x53","\xa4","\x0a","\x54");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Sensor_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Sensor_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Sensor_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Sensor_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Sensor_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Sensor_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace iron
} // end namespace system

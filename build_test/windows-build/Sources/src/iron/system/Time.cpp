// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_iron_system_Time
#include <iron/system/Time.h>
#endif
#ifndef INCLUDED_kha_Scheduler
#include <kha/Scheduler.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_5ddb09ee951495ce_6_get_step,"iron.system.Time","get_step",0x89ce3e5d,"iron.system.Time.get_step","iron/system/Time.hx",6,0x299d3278)
HX_LOCAL_STACK_FRAME(_hx_pos_5ddb09ee951495ce_10_get_delta,"iron.system.Time","get_delta",0x5dc0bfc7,"iron.system.Time.get_delta","iron/system/Time.hx",10,0x299d3278)
HX_LOCAL_STACK_FRAME(_hx_pos_5ddb09ee951495ce_14_time,"iron.system.Time","time",0x75ce0395,"iron.system.Time.time","iron/system/Time.hx",14,0x299d3278)
HX_LOCAL_STACK_FRAME(_hx_pos_5ddb09ee951495ce_15_realTime,"iron.system.Time","realTime",0xcde0e613,"iron.system.Time.realTime","iron/system/Time.hx",15,0x299d3278)
HX_LOCAL_STACK_FRAME(_hx_pos_5ddb09ee951495ce_17_update,"iron.system.Time","update",0x7039af91,"iron.system.Time.update","iron/system/Time.hx",17,0x299d3278)
HX_LOCAL_STACK_FRAME(_hx_pos_5ddb09ee951495ce_8_boot,"iron.system.Time","boot",0x69ecbbba,"iron.system.Time.boot","iron/system/Time.hx",8,0x299d3278)
HX_LOCAL_STACK_FRAME(_hx_pos_5ddb09ee951495ce_12_boot,"iron.system.Time","boot",0x69ecbbba,"iron.system.Time.boot","iron/system/Time.hx",12,0x299d3278)
HX_LOCAL_STACK_FRAME(_hx_pos_5ddb09ee951495ce_13_boot,"iron.system.Time","boot",0x69ecbbba,"iron.system.Time.boot","iron/system/Time.hx",13,0x299d3278)
namespace iron{
namespace _hx_system{

void Time_obj::__construct() { }

Dynamic Time_obj::__CreateEmpty() { return new Time_obj; }

void *Time_obj::_hx_vtable = 0;

Dynamic Time_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Time_obj > _hx_result = new Time_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Time_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7961417c;
}

Float Time_obj::get_step(){
            	HX_STACKFRAME(&_hx_pos_5ddb09ee951495ce_6_get_step)
HXDLIN(   6)		return ((Float)0.016666666666666666);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Time_obj,get_step,return )

Float Time_obj::scale;

Float Time_obj::get_delta(){
            	HX_STACKFRAME(&_hx_pos_5ddb09ee951495ce_10_get_delta)
HXDLIN(  10)		return (((Float)0.016666666666666666) * ::iron::_hx_system::Time_obj::scale);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Time_obj,get_delta,return )

Float Time_obj::last;

Float Time_obj::realDelta;

Float Time_obj::time(){
            	HX_STACKFRAME(&_hx_pos_5ddb09ee951495ce_14_time)
HXDLIN(  14)		return ::kha::Scheduler_obj::time();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Time_obj,time,return )

Float Time_obj::realTime(){
            	HX_STACKFRAME(&_hx_pos_5ddb09ee951495ce_15_realTime)
HXDLIN(  15)		return ::kha::Scheduler_obj::realTime();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Time_obj,realTime,return )

void Time_obj::update(){
            	HX_STACKFRAME(&_hx_pos_5ddb09ee951495ce_17_update)
HXLINE(  18)		Float _hx_tmp = ::kha::Scheduler_obj::realTime();
HXDLIN(  18)		::iron::_hx_system::Time_obj::realDelta = (_hx_tmp - ::iron::_hx_system::Time_obj::last);
HXLINE(  19)		::iron::_hx_system::Time_obj::last = ::kha::Scheduler_obj::realTime();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Time_obj,update,(void))


Time_obj::Time_obj()
{
}

bool Time_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"step") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_step() ); return true; } }
		if (HX_FIELD_EQ(inName,"last") ) { outValue = ( last ); return true; }
		if (HX_FIELD_EQ(inName,"time") ) { outValue = time_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { outValue = ( scale ); return true; }
		if (HX_FIELD_EQ(inName,"delta") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_delta() ); return true; } }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { outValue = update_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_step") ) { outValue = get_step_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"realTime") ) { outValue = realTime_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_delta") ) { outValue = get_delta_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"realDelta") ) { outValue = ( realDelta ); return true; }
	}
	return false;
}

bool Time_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { last=ioValue.Cast< Float >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { scale=ioValue.Cast< Float >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"realDelta") ) { realDelta=ioValue.Cast< Float >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Time_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Time_obj_sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &Time_obj::scale,HX_HCSTRING("scale","\x8a","\xce","\xce","\x78")},
	{hx::fsFloat,(void *) &Time_obj::last,HX_HCSTRING("last","\x56","\x0a","\xad","\x47")},
	{hx::fsFloat,(void *) &Time_obj::realDelta,HX_HCSTRING("realDelta","\xba","\x17","\xe9","\xda")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Time_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Time_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Time_obj::scale,"scale");
	HX_MARK_MEMBER_NAME(Time_obj::last,"last");
	HX_MARK_MEMBER_NAME(Time_obj::realDelta,"realDelta");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Time_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Time_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Time_obj::scale,"scale");
	HX_VISIT_MEMBER_NAME(Time_obj::last,"last");
	HX_VISIT_MEMBER_NAME(Time_obj::realDelta,"realDelta");
};

#endif

hx::Class Time_obj::__mClass;

static ::String Time_obj_sStaticFields[] = {
	HX_HCSTRING("get_step","\xd5","\xa2","\x16","\xcc"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("get_delta","\x4f","\x44","\xd0","\x1a"),
	HX_HCSTRING("last","\x56","\x0a","\xad","\x47"),
	HX_HCSTRING("realDelta","\xba","\x17","\xe9","\xda"),
	HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"),
	HX_HCSTRING("realTime","\x8b","\x4a","\x29","\x10"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null())
};

void Time_obj::__register()
{
	hx::Object *dummy = new Time_obj;
	Time_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("iron.system.Time","\xe6","\x55","\x9e","\x62");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Time_obj::__GetStatic;
	__mClass->mSetStaticField = &Time_obj::__SetStatic;
	__mClass->mMarkFunc = Time_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Time_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Time_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Time_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Time_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Time_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Time_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_5ddb09ee951495ce_8_boot)
HXDLIN(   8)		scale = ((Float)1.0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_5ddb09ee951495ce_12_boot)
HXDLIN(  12)		last = ((Float)0.0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_5ddb09ee951495ce_13_boot)
HXDLIN(  13)		realDelta = ((Float)0.0);
            	}
}

} // end namespace iron
} // end namespace system

// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_iron_system_Audio
#include <iron/system/Audio.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
#ifndef INCLUDED_kha_Sound
#include <kha/Sound.h>
#endif
#ifndef INCLUDED_kha_arrays_Float32ArrayPrivate
#include <kha/arrays/Float32ArrayPrivate.h>
#endif
#ifndef INCLUDED_kha_audio1_AudioChannel
#include <kha/audio1/AudioChannel.h>
#endif
#ifndef INCLUDED_kha_audio2_Audio1
#include <kha/audio2/Audio1.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0ab6b2c28352020a_7_new,"iron.system.Audio","new",0xde37604f,"iron.system.Audio.new","iron/system/Audio.hx",7,0xd360f021)
HX_LOCAL_STACK_FRAME(_hx_pos_0ab6b2c28352020a_15_play,"iron.system.Audio","play",0x93948f25,"iron.system.Audio.play","iron/system/Audio.hx",15,0xd360f021)
namespace iron{
namespace _hx_system{

void Audio_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_0ab6b2c28352020a_7_new)
            	}

Dynamic Audio_obj::__CreateEmpty() { return new Audio_obj; }

void *Audio_obj::_hx_vtable = 0;

Dynamic Audio_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Audio_obj > _hx_result = new Audio_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Audio_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7ff7afc3;
}

::Dynamic Audio_obj::play( ::kha::Sound sound,hx::Null< bool >  __o_loop,hx::Null< bool >  __o_stream){
bool loop = __o_loop.Default(false);
bool stream = __o_stream.Default(false);
            	HX_STACKFRAME(&_hx_pos_0ab6b2c28352020a_15_play)
HXDLIN(  15)		bool _hx_tmp;
HXDLIN(  15)		if (stream) {
HXDLIN(  15)			_hx_tmp = hx::IsNotNull( sound->compressedData );
            		}
            		else {
HXDLIN(  15)			_hx_tmp = false;
            		}
HXDLIN(  15)		if (_hx_tmp) {
HXLINE(  16)			return ::kha::audio2::Audio1_obj::stream(sound,loop);
            		}
            		else {
HXLINE(  18)			if (hx::IsNotNull( sound->uncompressedData )) {
HXLINE(  19)				return ::kha::audio2::Audio1_obj::play(sound,loop);
            			}
            			else {
HXLINE(  21)				return null();
            			}
            		}
HXLINE(  15)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Audio_obj,play,return )


Audio_obj::Audio_obj()
{
}

bool Audio_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { outValue = play_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Audio_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Audio_obj_sStaticStorageInfo = 0;
#endif

static void Audio_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Audio_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Audio_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Audio_obj::__mClass,"__mClass");
};

#endif

hx::Class Audio_obj::__mClass;

static ::String Audio_obj_sStaticFields[] = {
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	::String(null())
};

void Audio_obj::__register()
{
	hx::Object *dummy = new Audio_obj;
	Audio_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("iron.system.Audio","\xdd","\x8c","\x37","\xff");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Audio_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Audio_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Audio_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Audio_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Audio_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Audio_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Audio_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace iron
} // end namespace system

// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_ReaderError
#include <kha/audio2/ogg/vorbis/data/ReaderError.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_ReaderErrorType
#include <kha/audio2/ogg/vorbis/data/ReaderErrorType.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c9667fc11258959a_14_new,"kha.audio2.ogg.vorbis.data.ReaderError","new",0x2cd57227,"kha.audio2.ogg.vorbis.data.ReaderError.new","kha/audio2/ogg/vorbis/data/ReaderError.hx",14,0x61997aea)
namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{
namespace data{

void ReaderError_obj::__construct( ::kha::audio2::ogg::vorbis::data::ReaderErrorType type,::String __o_message, ::Dynamic posInfos){
::String message = __o_message.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
            	HX_STACKFRAME(&_hx_pos_c9667fc11258959a_14_new)
HXLINE(  15)		this->type = type;
HXLINE(  16)		this->message = message;
HXLINE(  17)		this->posInfos = posInfos;
            	}

Dynamic ReaderError_obj::__CreateEmpty() { return new ReaderError_obj; }

void *ReaderError_obj::_hx_vtable = 0;

Dynamic ReaderError_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ReaderError_obj > _hx_result = new ReaderError_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool ReaderError_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6c90cbb5;
}


hx::ObjectPtr< ReaderError_obj > ReaderError_obj::__new( ::kha::audio2::ogg::vorbis::data::ReaderErrorType type,::String __o_message, ::Dynamic posInfos) {
	hx::ObjectPtr< ReaderError_obj > __this = new ReaderError_obj();
	__this->__construct(type,__o_message,posInfos);
	return __this;
}

hx::ObjectPtr< ReaderError_obj > ReaderError_obj::__alloc(hx::Ctx *_hx_ctx, ::kha::audio2::ogg::vorbis::data::ReaderErrorType type,::String __o_message, ::Dynamic posInfos) {
	ReaderError_obj *__this = (ReaderError_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ReaderError_obj), true, "kha.audio2.ogg.vorbis.data.ReaderError"));
	*(void **)__this = ReaderError_obj::_hx_vtable;
	__this->__construct(type,__o_message,posInfos);
	return __this;
}

ReaderError_obj::ReaderError_obj()
{
}

void ReaderError_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ReaderError);
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(message,"message");
	HX_MARK_MEMBER_NAME(posInfos,"posInfos");
	HX_MARK_END_CLASS();
}

void ReaderError_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(message,"message");
	HX_VISIT_MEMBER_NAME(posInfos,"posInfos");
}

hx::Val ReaderError_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return hx::Val( type ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { return hx::Val( message ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"posInfos") ) { return hx::Val( posInfos ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ReaderError_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast<  ::kha::audio2::ogg::vorbis::data::ReaderErrorType >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { message=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"posInfos") ) { posInfos=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ReaderError_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("message","\xc7","\x35","\x11","\x9a"));
	outFields->push(HX_HCSTRING("posInfos","\x11","\x82","\x2e","\x5a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ReaderError_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::kha::audio2::ogg::vorbis::data::ReaderErrorType*/ ,(int)offsetof(ReaderError_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsString,(int)offsetof(ReaderError_obj,message),HX_HCSTRING("message","\xc7","\x35","\x11","\x9a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ReaderError_obj,posInfos),HX_HCSTRING("posInfos","\x11","\x82","\x2e","\x5a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ReaderError_obj_sStaticStorageInfo = 0;
#endif

static ::String ReaderError_obj_sMemberFields[] = {
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("message","\xc7","\x35","\x11","\x9a"),
	HX_HCSTRING("posInfos","\x11","\x82","\x2e","\x5a"),
	::String(null()) };

static void ReaderError_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ReaderError_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ReaderError_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ReaderError_obj::__mClass,"__mClass");
};

#endif

hx::Class ReaderError_obj::__mClass;

void ReaderError_obj::__register()
{
	hx::Object *dummy = new ReaderError_obj;
	ReaderError_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.audio2.ogg.vorbis.data.ReaderError","\xb5","\xd2","\x41","\xfc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ReaderError_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ReaderError_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ReaderError_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ReaderError_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ReaderError_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ReaderError_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis
} // end namespace data

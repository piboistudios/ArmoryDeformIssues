// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_kha_WindowedModeOptions
#include <kha/WindowedModeOptions.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0b457c6e28ca54de_24_new,"kha.WindowedModeOptions","new",0xabbadab4,"kha.WindowedModeOptions.new","kha/WindowOptions.hx",24,0x953dd7db)
namespace kha{

void WindowedModeOptions_obj::__construct( ::Dynamic minimizable, ::Dynamic maximizable, ::Dynamic resizable){
            	HX_STACKFRAME(&_hx_pos_0b457c6e28ca54de_24_new)
HXDLIN(  24)		this->minimizable = minimizable;
HXDLIN(  24)		this->maximizable = maximizable;
HXDLIN(  24)		this->resizable = resizable;
            	}

Dynamic WindowedModeOptions_obj::__CreateEmpty() { return new WindowedModeOptions_obj; }

void *WindowedModeOptions_obj::_hx_vtable = 0;

Dynamic WindowedModeOptions_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< WindowedModeOptions_obj > _hx_result = new WindowedModeOptions_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool WindowedModeOptions_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x574e210c;
}


WindowedModeOptions_obj::WindowedModeOptions_obj()
{
}

hx::Val WindowedModeOptions_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"resizable") ) { return hx::Val( resizable ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"minimizable") ) { return hx::Val( minimizable ); }
		if (HX_FIELD_EQ(inName,"maximizable") ) { return hx::Val( maximizable ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val WindowedModeOptions_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"resizable") ) { resizable=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"minimizable") ) { minimizable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maximizable") ) { maximizable=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WindowedModeOptions_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("minimizable","\x81","\x68","\x12","\x06"));
	outFields->push(HX_HCSTRING("maximizable","\x93","\xc3","\x2c","\x41"));
	outFields->push(HX_HCSTRING("resizable","\x6b","\x37","\x50","\xa9"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo WindowedModeOptions_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(WindowedModeOptions_obj,minimizable),HX_HCSTRING("minimizable","\x81","\x68","\x12","\x06")},
	{hx::fsBool,(int)offsetof(WindowedModeOptions_obj,maximizable),HX_HCSTRING("maximizable","\x93","\xc3","\x2c","\x41")},
	{hx::fsBool,(int)offsetof(WindowedModeOptions_obj,resizable),HX_HCSTRING("resizable","\x6b","\x37","\x50","\xa9")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *WindowedModeOptions_obj_sStaticStorageInfo = 0;
#endif

static ::String WindowedModeOptions_obj_sMemberFields[] = {
	HX_HCSTRING("minimizable","\x81","\x68","\x12","\x06"),
	HX_HCSTRING("maximizable","\x93","\xc3","\x2c","\x41"),
	HX_HCSTRING("resizable","\x6b","\x37","\x50","\xa9"),
	::String(null()) };

static void WindowedModeOptions_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WindowedModeOptions_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void WindowedModeOptions_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WindowedModeOptions_obj::__mClass,"__mClass");
};

#endif

hx::Class WindowedModeOptions_obj::__mClass;

void WindowedModeOptions_obj::__register()
{
	hx::Object *dummy = new WindowedModeOptions_obj;
	WindowedModeOptions_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.WindowedModeOptions","\xc2","\xb0","\x2a","\xf6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = WindowedModeOptions_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(WindowedModeOptions_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< WindowedModeOptions_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = WindowedModeOptions_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WindowedModeOptions_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WindowedModeOptions_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
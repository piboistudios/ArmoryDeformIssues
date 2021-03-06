// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_kha_Position
#include <kha/Position.h>
#endif
#ifndef INCLUDED_kha_RendererOptions
#include <kha/RendererOptions.h>
#endif
#ifndef INCLUDED_kha_TargetDisplay
#include <kha/TargetDisplay.h>
#endif
#ifndef INCLUDED_kha_WindowMode
#include <kha/WindowMode.h>
#endif
#ifndef INCLUDED_kha_WindowOptions
#include <kha/WindowOptions.h>
#endif
#ifndef INCLUDED_kha_WindowedModeOptions
#include <kha/WindowedModeOptions.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_953552e0cd74b8c7_33_new,"kha.WindowOptions","new",0xee7f9656,"kha.WindowOptions.new","kha/WindowOptions.hx",33,0x953dd7db)
namespace kha{

void WindowOptions_obj::__construct(int width,int height, ::kha::WindowMode mode,::String title, ::kha::Position x, ::kha::Position y, ::kha::TargetDisplay targetDisplay, ::kha::RendererOptions rendererOptions, ::kha::WindowedModeOptions windowedModeOptions){
            	HX_STACKFRAME(&_hx_pos_953552e0cd74b8c7_33_new)
HXDLIN(  33)		this->width = width;
HXDLIN(  33)		this->height = height;
HXDLIN(  33)		this->mode = mode;
HXDLIN(  33)		this->title = title;
HXDLIN(  33)		this->x = x;
HXDLIN(  33)		this->y = y;
HXDLIN(  33)		this->targetDisplay = targetDisplay;
HXDLIN(  33)		this->rendererOptions = rendererOptions;
HXDLIN(  33)		this->windowedModeOptions = windowedModeOptions;
            	}

Dynamic WindowOptions_obj::__CreateEmpty() { return new WindowOptions_obj; }

void *WindowOptions_obj::_hx_vtable = 0;

Dynamic WindowOptions_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< WindowOptions_obj > _hx_result = new WindowOptions_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8]);
	return _hx_result;
}

bool WindowOptions_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1b5f46ca;
}


hx::ObjectPtr< WindowOptions_obj > WindowOptions_obj::__new(int width,int height, ::kha::WindowMode mode,::String title, ::kha::Position x, ::kha::Position y, ::kha::TargetDisplay targetDisplay, ::kha::RendererOptions rendererOptions, ::kha::WindowedModeOptions windowedModeOptions) {
	hx::ObjectPtr< WindowOptions_obj > __this = new WindowOptions_obj();
	__this->__construct(width,height,mode,title,x,y,targetDisplay,rendererOptions,windowedModeOptions);
	return __this;
}

hx::ObjectPtr< WindowOptions_obj > WindowOptions_obj::__alloc(hx::Ctx *_hx_ctx,int width,int height, ::kha::WindowMode mode,::String title, ::kha::Position x, ::kha::Position y, ::kha::TargetDisplay targetDisplay, ::kha::RendererOptions rendererOptions, ::kha::WindowedModeOptions windowedModeOptions) {
	WindowOptions_obj *__this = (WindowOptions_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(WindowOptions_obj), true, "kha.WindowOptions"));
	*(void **)__this = WindowOptions_obj::_hx_vtable;
	__this->__construct(width,height,mode,title,x,y,targetDisplay,rendererOptions,windowedModeOptions);
	return __this;
}

WindowOptions_obj::WindowOptions_obj()
{
}

void WindowOptions_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WindowOptions);
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(mode,"mode");
	HX_MARK_MEMBER_NAME(title,"title");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(targetDisplay,"targetDisplay");
	HX_MARK_MEMBER_NAME(rendererOptions,"rendererOptions");
	HX_MARK_MEMBER_NAME(windowedModeOptions,"windowedModeOptions");
	HX_MARK_END_CLASS();
}

void WindowOptions_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(mode,"mode");
	HX_VISIT_MEMBER_NAME(title,"title");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(targetDisplay,"targetDisplay");
	HX_VISIT_MEMBER_NAME(rendererOptions,"rendererOptions");
	HX_VISIT_MEMBER_NAME(windowedModeOptions,"windowedModeOptions");
}

hx::Val WindowOptions_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return hx::Val( y ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mode") ) { return hx::Val( mode ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return hx::Val( width ); }
		if (HX_FIELD_EQ(inName,"title") ) { return hx::Val( title ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return hx::Val( height ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"targetDisplay") ) { return hx::Val( targetDisplay ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"rendererOptions") ) { return hx::Val( rendererOptions ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"windowedModeOptions") ) { return hx::Val( windowedModeOptions ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val WindowOptions_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast<  ::kha::Position >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast<  ::kha::Position >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mode") ) { mode=inValue.Cast<  ::kha::WindowMode >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"title") ) { title=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"targetDisplay") ) { targetDisplay=inValue.Cast<  ::kha::TargetDisplay >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"rendererOptions") ) { rendererOptions=inValue.Cast<  ::kha::RendererOptions >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"windowedModeOptions") ) { windowedModeOptions=inValue.Cast<  ::kha::WindowedModeOptions >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WindowOptions_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("mode","\x63","\xd3","\x60","\x48"));
	outFields->push(HX_HCSTRING("title","\x98","\x15","\x3b","\x10"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("targetDisplay","\xf1","\xda","\x78","\xf2"));
	outFields->push(HX_HCSTRING("rendererOptions","\x5b","\x14","\xda","\xa5"));
	outFields->push(HX_HCSTRING("windowedModeOptions","\x2c","\xae","\xbd","\x0a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo WindowOptions_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(WindowOptions_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(WindowOptions_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsObject /*::kha::WindowMode*/ ,(int)offsetof(WindowOptions_obj,mode),HX_HCSTRING("mode","\x63","\xd3","\x60","\x48")},
	{hx::fsString,(int)offsetof(WindowOptions_obj,title),HX_HCSTRING("title","\x98","\x15","\x3b","\x10")},
	{hx::fsObject /*::kha::Position*/ ,(int)offsetof(WindowOptions_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsObject /*::kha::Position*/ ,(int)offsetof(WindowOptions_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsObject /*::kha::TargetDisplay*/ ,(int)offsetof(WindowOptions_obj,targetDisplay),HX_HCSTRING("targetDisplay","\xf1","\xda","\x78","\xf2")},
	{hx::fsObject /*::kha::RendererOptions*/ ,(int)offsetof(WindowOptions_obj,rendererOptions),HX_HCSTRING("rendererOptions","\x5b","\x14","\xda","\xa5")},
	{hx::fsObject /*::kha::WindowedModeOptions*/ ,(int)offsetof(WindowOptions_obj,windowedModeOptions),HX_HCSTRING("windowedModeOptions","\x2c","\xae","\xbd","\x0a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *WindowOptions_obj_sStaticStorageInfo = 0;
#endif

static ::String WindowOptions_obj_sMemberFields[] = {
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("mode","\x63","\xd3","\x60","\x48"),
	HX_HCSTRING("title","\x98","\x15","\x3b","\x10"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("targetDisplay","\xf1","\xda","\x78","\xf2"),
	HX_HCSTRING("rendererOptions","\x5b","\x14","\xda","\xa5"),
	HX_HCSTRING("windowedModeOptions","\x2c","\xae","\xbd","\x0a"),
	::String(null()) };

static void WindowOptions_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WindowOptions_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void WindowOptions_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WindowOptions_obj::__mClass,"__mClass");
};

#endif

hx::Class WindowOptions_obj::__mClass;

void WindowOptions_obj::__register()
{
	hx::Object *dummy = new WindowOptions_obj;
	WindowOptions_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.WindowOptions","\x64","\x73","\xfc","\xf8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = WindowOptions_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(WindowOptions_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< WindowOptions_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = WindowOptions_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WindowOptions_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WindowOptions_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha

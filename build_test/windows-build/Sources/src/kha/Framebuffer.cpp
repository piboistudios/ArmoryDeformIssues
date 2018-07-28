// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_kha_Canvas
#include <kha/Canvas.h>
#endif
#ifndef INCLUDED_kha_Framebuffer
#include <kha/Framebuffer.h>
#endif
#ifndef INCLUDED_kha_System
#include <kha/System.h>
#endif
#ifndef INCLUDED_kha_graphics1_Graphics
#include <kha/graphics1/Graphics.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics
#include <kha/graphics2/Graphics.h>
#endif
#ifndef INCLUDED_kha_graphics4_Graphics
#include <kha/graphics4/Graphics.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_17e473de805b4eb1_15_new,"kha.Framebuffer","new",0x353baff5,"kha.Framebuffer.new","kha/Framebuffer.hx",15,0x5860e4dc)
HX_LOCAL_STACK_FRAME(_hx_pos_17e473de805b4eb1_25_init,"kha.Framebuffer","init",0x5bb6fddb,"kha.Framebuffer.init","kha/Framebuffer.hx",25,0x5860e4dc)
HX_LOCAL_STACK_FRAME(_hx_pos_17e473de805b4eb1_38_get_g1,"kha.Framebuffer","get_g1",0x01ba3cbe,"kha.Framebuffer.get_g1","kha/Framebuffer.hx",38,0x5860e4dc)
HX_LOCAL_STACK_FRAME(_hx_pos_17e473de805b4eb1_48_get_g2,"kha.Framebuffer","get_g2",0x01ba3cbf,"kha.Framebuffer.get_g2","kha/Framebuffer.hx",48,0x5860e4dc)
HX_LOCAL_STACK_FRAME(_hx_pos_17e473de805b4eb1_58_get_g4,"kha.Framebuffer","get_g4",0x01ba3cc1,"kha.Framebuffer.get_g4","kha/Framebuffer.hx",58,0x5860e4dc)
HX_LOCAL_STACK_FRAME(_hx_pos_17e473de805b4eb1_67_get_width,"kha.Framebuffer","get_width",0xd0a34fb2,"kha.Framebuffer.get_width","kha/Framebuffer.hx",67,0x5860e4dc)
HX_LOCAL_STACK_FRAME(_hx_pos_17e473de805b4eb1_76_get_height,"kha.Framebuffer","get_height",0x7491e4bb,"kha.Framebuffer.get_height","kha/Framebuffer.hx",76,0x5860e4dc)
namespace kha{

void Framebuffer_obj::__construct(int windowId,::Dynamic g1, ::kha::graphics2::Graphics g2,::Dynamic g4){
            	HX_STACKFRAME(&_hx_pos_17e473de805b4eb1_15_new)
HXLINE(  16)		this->windowId = windowId;
HXLINE(  17)		this->graphics1 = g1;
HXLINE(  18)		this->graphics2 = g2;
HXLINE(  19)		this->graphics4 = g4;
            	}

Dynamic Framebuffer_obj::__CreateEmpty() { return new Framebuffer_obj; }

void *Framebuffer_obj::_hx_vtable = 0;

Dynamic Framebuffer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Framebuffer_obj > _hx_result = new Framebuffer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Framebuffer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1236b895;
}

static ::kha::Canvas_obj _hx_kha_Framebuffer__hx_kha_Canvas= {
	( int (hx::Object::*)())&::kha::Framebuffer_obj::get_width,
	( int (hx::Object::*)())&::kha::Framebuffer_obj::get_height,
	( ::Dynamic (hx::Object::*)())&::kha::Framebuffer_obj::get_g1,
	(  ::kha::graphics2::Graphics (hx::Object::*)())&::kha::Framebuffer_obj::get_g2,
	( ::Dynamic (hx::Object::*)())&::kha::Framebuffer_obj::get_g4,
};

void *Framebuffer_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x36d1dbdc: return &_hx_kha_Framebuffer__hx_kha_Canvas;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void Framebuffer_obj::init(::Dynamic g1, ::kha::graphics2::Graphics g2,::Dynamic g4){
            	HX_STACKFRAME(&_hx_pos_17e473de805b4eb1_25_init)
HXLINE(  26)		this->graphics1 = g1;
HXLINE(  27)		this->graphics2 = g2;
HXLINE(  28)		this->graphics4 = g4;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Framebuffer_obj,init,(void))

::Dynamic Framebuffer_obj::get_g1(){
            	HX_STACKFRAME(&_hx_pos_17e473de805b4eb1_38_get_g1)
HXDLIN(  38)		return this->graphics1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Framebuffer_obj,get_g1,return )

 ::kha::graphics2::Graphics Framebuffer_obj::get_g2(){
            	HX_STACKFRAME(&_hx_pos_17e473de805b4eb1_48_get_g2)
HXDLIN(  48)		return this->graphics2;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Framebuffer_obj,get_g2,return )

::Dynamic Framebuffer_obj::get_g4(){
            	HX_STACKFRAME(&_hx_pos_17e473de805b4eb1_58_get_g4)
HXDLIN(  58)		return this->graphics4;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Framebuffer_obj,get_g4,return )

int Framebuffer_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_17e473de805b4eb1_67_get_width)
HXDLIN(  67)		return ::kha::System_obj::windowWidth(this->windowId);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Framebuffer_obj,get_width,return )

int Framebuffer_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_17e473de805b4eb1_76_get_height)
HXDLIN(  76)		return ::kha::System_obj::windowHeight(this->windowId);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Framebuffer_obj,get_height,return )


hx::ObjectPtr< Framebuffer_obj > Framebuffer_obj::__new(int windowId,::Dynamic g1, ::kha::graphics2::Graphics g2,::Dynamic g4) {
	hx::ObjectPtr< Framebuffer_obj > __this = new Framebuffer_obj();
	__this->__construct(windowId,g1,g2,g4);
	return __this;
}

hx::ObjectPtr< Framebuffer_obj > Framebuffer_obj::__alloc(hx::Ctx *_hx_ctx,int windowId,::Dynamic g1, ::kha::graphics2::Graphics g2,::Dynamic g4) {
	Framebuffer_obj *__this = (Framebuffer_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Framebuffer_obj), true, "kha.Framebuffer"));
	*(void **)__this = Framebuffer_obj::_hx_vtable;
	__this->__construct(windowId,g1,g2,g4);
	return __this;
}

Framebuffer_obj::Framebuffer_obj()
{
}

void Framebuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Framebuffer);
	HX_MARK_MEMBER_NAME(windowId,"windowId");
	HX_MARK_MEMBER_NAME(graphics1,"graphics1");
	HX_MARK_MEMBER_NAME(graphics2,"graphics2");
	HX_MARK_MEMBER_NAME(graphics4,"graphics4");
	HX_MARK_MEMBER_NAME(g1,"g1");
	HX_MARK_MEMBER_NAME(g2,"g2");
	HX_MARK_MEMBER_NAME(g4,"g4");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_END_CLASS();
}

void Framebuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(windowId,"windowId");
	HX_VISIT_MEMBER_NAME(graphics1,"graphics1");
	HX_VISIT_MEMBER_NAME(graphics2,"graphics2");
	HX_VISIT_MEMBER_NAME(graphics4,"graphics4");
	HX_VISIT_MEMBER_NAME(g1,"g1");
	HX_VISIT_MEMBER_NAME(g2,"g2");
	HX_VISIT_MEMBER_NAME(g4,"g4");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
}

hx::Val Framebuffer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"g1") ) { return hx::Val( inCallProp == hx::paccAlways ? get_g1() : g1 ); }
		if (HX_FIELD_EQ(inName,"g2") ) { return hx::Val( inCallProp == hx::paccAlways ? get_g2() : g2 ); }
		if (HX_FIELD_EQ(inName,"g4") ) { return hx::Val( inCallProp == hx::paccAlways ? get_g4() : g4 ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return hx::Val( init_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return hx::Val( inCallProp == hx::paccAlways ? get_width() : width ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_g1") ) { return hx::Val( get_g1_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_g2") ) { return hx::Val( get_g2_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_g4") ) { return hx::Val( get_g4_dyn() ); }
		if (HX_FIELD_EQ(inName,"height") ) { return hx::Val( inCallProp == hx::paccAlways ? get_height() : height ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"windowId") ) { return hx::Val( windowId ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"graphics1") ) { return hx::Val( graphics1 ); }
		if (HX_FIELD_EQ(inName,"graphics2") ) { return hx::Val( graphics2 ); }
		if (HX_FIELD_EQ(inName,"graphics4") ) { return hx::Val( graphics4 ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return hx::Val( get_width_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return hx::Val( get_height_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Framebuffer_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"g1") ) { g1=inValue.Cast< ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"g2") ) { g2=inValue.Cast<  ::kha::graphics2::Graphics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"g4") ) { g4=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"windowId") ) { windowId=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"graphics1") ) { graphics1=inValue.Cast< ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"graphics2") ) { graphics2=inValue.Cast<  ::kha::graphics2::Graphics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"graphics4") ) { graphics4=inValue.Cast< ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Framebuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("windowId","\xeb","\xaf","\xcd","\x7d"));
	outFields->push(HX_HCSTRING("graphics1","\x06","\xb9","\x91","\x08"));
	outFields->push(HX_HCSTRING("graphics2","\x07","\xb9","\x91","\x08"));
	outFields->push(HX_HCSTRING("graphics4","\x09","\xb9","\x91","\x08"));
	outFields->push(HX_HCSTRING("g1","\xea","\x59","\x00","\x00"));
	outFields->push(HX_HCSTRING("g2","\xeb","\x59","\x00","\x00"));
	outFields->push(HX_HCSTRING("g4","\xed","\x59","\x00","\x00"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Framebuffer_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Framebuffer_obj,windowId),HX_HCSTRING("windowId","\xeb","\xaf","\xcd","\x7d")},
	{hx::fsObject /*::kha::graphics1::Graphics*/ ,(int)offsetof(Framebuffer_obj,graphics1),HX_HCSTRING("graphics1","\x06","\xb9","\x91","\x08")},
	{hx::fsObject /*::kha::graphics2::Graphics*/ ,(int)offsetof(Framebuffer_obj,graphics2),HX_HCSTRING("graphics2","\x07","\xb9","\x91","\x08")},
	{hx::fsObject /*::kha::graphics4::Graphics*/ ,(int)offsetof(Framebuffer_obj,graphics4),HX_HCSTRING("graphics4","\x09","\xb9","\x91","\x08")},
	{hx::fsObject /*::kha::graphics1::Graphics*/ ,(int)offsetof(Framebuffer_obj,g1),HX_HCSTRING("g1","\xea","\x59","\x00","\x00")},
	{hx::fsObject /*::kha::graphics2::Graphics*/ ,(int)offsetof(Framebuffer_obj,g2),HX_HCSTRING("g2","\xeb","\x59","\x00","\x00")},
	{hx::fsObject /*::kha::graphics4::Graphics*/ ,(int)offsetof(Framebuffer_obj,g4),HX_HCSTRING("g4","\xed","\x59","\x00","\x00")},
	{hx::fsInt,(int)offsetof(Framebuffer_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(Framebuffer_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Framebuffer_obj_sStaticStorageInfo = 0;
#endif

static ::String Framebuffer_obj_sMemberFields[] = {
	HX_HCSTRING("windowId","\xeb","\xaf","\xcd","\x7d"),
	HX_HCSTRING("graphics1","\x06","\xb9","\x91","\x08"),
	HX_HCSTRING("graphics2","\x07","\xb9","\x91","\x08"),
	HX_HCSTRING("graphics4","\x09","\xb9","\x91","\x08"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("g1","\xea","\x59","\x00","\x00"),
	HX_HCSTRING("get_g1","\x33","\xf1","\x2f","\xa3"),
	HX_HCSTRING("g2","\xeb","\x59","\x00","\x00"),
	HX_HCSTRING("get_g2","\x34","\xf1","\x2f","\xa3"),
	HX_HCSTRING("g4","\xed","\x59","\x00","\x00"),
	HX_HCSTRING("get_g4","\x36","\xf1","\x2f","\xa3"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	::String(null()) };

static void Framebuffer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Framebuffer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Framebuffer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Framebuffer_obj::__mClass,"__mClass");
};

#endif

hx::Class Framebuffer_obj::__mClass;

void Framebuffer_obj::__register()
{
	hx::Object *dummy = new Framebuffer_obj;
	Framebuffer_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.Framebuffer","\x83","\x91","\x65","\xf8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Framebuffer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Framebuffer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Framebuffer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Framebuffer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Framebuffer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Framebuffer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
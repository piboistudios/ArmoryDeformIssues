// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_kha_Display
#include <kha/Display.h>
#endif
#ifndef INCLUDED_kha_DisplayImpl
#include <kha/DisplayImpl.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_98f5c072c5e068b2_7_width,"kha.Display","width",0x1981e4f0,"kha.Display.width","kha/Display.hx",7,0x1b638127)
HX_LOCAL_STACK_FRAME(_hx_pos_98f5c072c5e068b2_11_height,"kha.Display","height",0xee75e5bd,"kha.Display.height","kha/Display.hx",11,0x1b638127)
HX_LOCAL_STACK_FRAME(_hx_pos_98f5c072c5e068b2_15_x,"kha.Display","x",0xa28ef262,"kha.Display.x","kha/Display.hx",15,0x1b638127)
HX_LOCAL_STACK_FRAME(_hx_pos_98f5c072c5e068b2_19_y,"kha.Display","y",0xa28ef263,"kha.Display.y","kha/Display.hx",19,0x1b638127)
HX_LOCAL_STACK_FRAME(_hx_pos_98f5c072c5e068b2_23_isPrimary,"kha.Display","isPrimary",0x7c8ca8e2,"kha.Display.isPrimary","kha/Display.hx",23,0x1b638127)
HX_LOCAL_STACK_FRAME(_hx_pos_98f5c072c5e068b2_27_get_count,"kha.Display","get_count",0x831e8d10,"kha.Display.get_count","kha/Display.hx",27,0x1b638127)
namespace kha{

void Display_obj::__construct() { }

Dynamic Display_obj::__CreateEmpty() { return new Display_obj; }

void *Display_obj::_hx_vtable = 0;

Dynamic Display_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Display_obj > _hx_result = new Display_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Display_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3981cd22;
}

int Display_obj::width(int index){
            	HX_STACKFRAME(&_hx_pos_98f5c072c5e068b2_7_width)
HXDLIN(   7)		return ::kha::DisplayImpl_obj::width(index);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Display_obj,width,return )

int Display_obj::height(int index){
            	HX_STACKFRAME(&_hx_pos_98f5c072c5e068b2_11_height)
HXDLIN(  11)		return ::kha::DisplayImpl_obj::height(index);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Display_obj,height,return )

int Display_obj::x(int index){
            	HX_STACKFRAME(&_hx_pos_98f5c072c5e068b2_15_x)
HXDLIN(  15)		return ::kha::DisplayImpl_obj::x(index);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Display_obj,x,return )

int Display_obj::y(int index){
            	HX_STACKFRAME(&_hx_pos_98f5c072c5e068b2_19_y)
HXDLIN(  19)		return ::kha::DisplayImpl_obj::y(index);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Display_obj,y,return )

bool Display_obj::isPrimary(int index){
            	HX_STACKFRAME(&_hx_pos_98f5c072c5e068b2_23_isPrimary)
HXDLIN(  23)		return ::kha::DisplayImpl_obj::isPrimary(index);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Display_obj,isPrimary,return )

int Display_obj::get_count(){
            	HX_STACKFRAME(&_hx_pos_98f5c072c5e068b2_27_get_count)
HXDLIN(  27)		return ::kha::DisplayImpl_obj::count();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Display_obj,get_count,return )


Display_obj::Display_obj()
{
}

bool Display_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { outValue = x_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"y") ) { outValue = y_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_count() ); return true; } }
		if (HX_FIELD_EQ(inName,"width") ) { outValue = width_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { outValue = height_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isPrimary") ) { outValue = isPrimary_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_count") ) { outValue = get_count_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Display_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Display_obj_sStaticStorageInfo = 0;
#endif

static void Display_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Display_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Display_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Display_obj::__mClass,"__mClass");
};

#endif

hx::Class Display_obj::__mClass;

static ::String Display_obj_sStaticFields[] = {
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("isPrimary","\xf8","\xbc","\x7a","\x87"),
	HX_HCSTRING("get_count","\x26","\xa1","\x0c","\x8e"),
	::String(null())
};

void Display_obj::__register()
{
	hx::Object *dummy = new Display_obj;
	Display_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.Display","\xd8","\x23","\x5c","\xb8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Display_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Display_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Display_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Display_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Display_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Display_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Display_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
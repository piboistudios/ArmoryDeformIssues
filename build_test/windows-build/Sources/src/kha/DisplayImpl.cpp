// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_kha_DisplayImpl
#include <kha/DisplayImpl.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_31437845c434bec8_15_count,"kha.DisplayImpl","count",0x4da42ab9,"kha.DisplayImpl.count","kha/DisplayImpl.hx",15,0x3d369ea7)
HX_LOCAL_STACK_FRAME(_hx_pos_31437845c434bec8_19_width,"kha.DisplayImpl","width",0xcda39bf0,"kha.DisplayImpl.width","kha/DisplayImpl.hx",19,0x3d369ea7)
HX_LOCAL_STACK_FRAME(_hx_pos_31437845c434bec8_23_height,"kha.DisplayImpl","height",0xd7d44ebd,"kha.DisplayImpl.height","kha/DisplayImpl.hx",23,0x3d369ea7)
HX_LOCAL_STACK_FRAME(_hx_pos_31437845c434bec8_27_x,"kha.DisplayImpl","x",0x27c92962,"kha.DisplayImpl.x","kha/DisplayImpl.hx",27,0x3d369ea7)
HX_LOCAL_STACK_FRAME(_hx_pos_31437845c434bec8_31_y,"kha.DisplayImpl","y",0x27c92963,"kha.DisplayImpl.y","kha/DisplayImpl.hx",31,0x3d369ea7)
HX_LOCAL_STACK_FRAME(_hx_pos_31437845c434bec8_35_isPrimary,"kha.DisplayImpl","isPrimary",0xa955dfe2,"kha.DisplayImpl.isPrimary","kha/DisplayImpl.hx",35,0x3d369ea7)
namespace kha{

void DisplayImpl_obj::__construct() { }

Dynamic DisplayImpl_obj::__CreateEmpty() { return new DisplayImpl_obj; }

void *DisplayImpl_obj::_hx_vtable = 0;

Dynamic DisplayImpl_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DisplayImpl_obj > _hx_result = new DisplayImpl_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DisplayImpl_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4fe1a8be;
}

int DisplayImpl_obj::count(){
            	HX_STACKFRAME(&_hx_pos_31437845c434bec8_15_count)
HXDLIN(  15)		return Kore::Display::count();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(DisplayImpl_obj,count,return )

int DisplayImpl_obj::width(int index){
            	HX_STACKFRAME(&_hx_pos_31437845c434bec8_19_width)
HXDLIN(  19)		return Kore::Display::width(index);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DisplayImpl_obj,width,return )

int DisplayImpl_obj::height(int index){
            	HX_STACKFRAME(&_hx_pos_31437845c434bec8_23_height)
HXDLIN(  23)		return Kore::Display::height(index);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DisplayImpl_obj,height,return )

int DisplayImpl_obj::x(int index){
            	HX_STACKFRAME(&_hx_pos_31437845c434bec8_27_x)
HXDLIN(  27)		return Kore::Display::x(index);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DisplayImpl_obj,x,return )

int DisplayImpl_obj::y(int index){
            	HX_STACKFRAME(&_hx_pos_31437845c434bec8_31_y)
HXDLIN(  31)		return Kore::Display::y(index);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DisplayImpl_obj,y,return )

bool DisplayImpl_obj::isPrimary(int index){
            	HX_STACKFRAME(&_hx_pos_31437845c434bec8_35_isPrimary)
HXDLIN(  35)		return Kore::Display::isPrimary(index);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DisplayImpl_obj,isPrimary,return )


DisplayImpl_obj::DisplayImpl_obj()
{
}

bool DisplayImpl_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { outValue = x_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"y") ) { outValue = y_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"count") ) { outValue = count_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"width") ) { outValue = width_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { outValue = height_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isPrimary") ) { outValue = isPrimary_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *DisplayImpl_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *DisplayImpl_obj_sStaticStorageInfo = 0;
#endif

static void DisplayImpl_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DisplayImpl_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DisplayImpl_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DisplayImpl_obj::__mClass,"__mClass");
};

#endif

hx::Class DisplayImpl_obj::__mClass;

static ::String DisplayImpl_obj_sStaticFields[] = {
	HX_HCSTRING("count","\xcf","\x44","\x63","\x4a"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("isPrimary","\xf8","\xbc","\x7a","\x87"),
	::String(null())
};

void DisplayImpl_obj::__register()
{
	hx::Object *dummy = new DisplayImpl_obj;
	DisplayImpl_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.DisplayImpl","\xd8","\x9a","\xca","\xab");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DisplayImpl_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = DisplayImpl_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(DisplayImpl_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< DisplayImpl_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DisplayImpl_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DisplayImpl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DisplayImpl_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
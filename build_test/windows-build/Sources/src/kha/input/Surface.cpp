// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_kha_input_Surface
#include <kha/input/Surface.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_12c7feb5c140131f_41_new,"kha.input.Surface","new",0x73f96851,"kha.input.Surface.new","kha/input/Surface.hx",41,0xe9f00981)
HX_LOCAL_STACK_FRAME(_hx_pos_12c7feb5c140131f_21_notify,"kha.input.Surface","notify",0x41b80f78,"kha.input.Surface.notify","kha/input/Surface.hx",21,0xe9f00981)
HX_LOCAL_STACK_FRAME(_hx_pos_12c7feb5c140131f_30_remove,"kha.input.Surface","remove",0x1487d0f3,"kha.input.Surface.remove","kha/input/Surface.hx",30,0xe9f00981)
HX_LOCAL_STACK_FRAME(_hx_pos_12c7feb5c140131f_49_sendTouchStartEvent,"kha.input.Surface","sendTouchStartEvent",0xfc8e7680,"kha.input.Surface.sendTouchStartEvent","kha/input/Surface.hx",49,0xe9f00981)
HX_LOCAL_STACK_FRAME(_hx_pos_12c7feb5c140131f_55_sendTouchEndEvent,"kha.input.Surface","sendTouchEndEvent",0x76ffd667,"kha.input.Surface.sendTouchEndEvent","kha/input/Surface.hx",55,0xe9f00981)
HX_LOCAL_STACK_FRAME(_hx_pos_12c7feb5c140131f_61_sendMoveEvent,"kha.input.Surface","sendMoveEvent",0x6e915012,"kha.input.Surface.sendMoveEvent","kha/input/Surface.hx",61,0xe9f00981)
HX_LOCAL_STACK_FRAME(_hx_pos_12c7feb5c140131f_10_get,"kha.input.Surface","get",0x73f41887,"kha.input.Surface.get","kha/input/Surface.hx",10,0xe9f00981)
namespace kha{
namespace input{

void Surface_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_12c7feb5c140131f_41_new)
HXLINE(  42)		this->touchStartListeners = ::Array_obj< ::Dynamic>::__new();
HXLINE(  43)		this->touchEndListeners = ::Array_obj< ::Dynamic>::__new();
HXLINE(  44)		this->moveListeners = ::Array_obj< ::Dynamic>::__new();
HXLINE(  45)		::kha::input::Surface_obj::instance = hx::ObjectPtr<OBJ_>(this);
            	}

Dynamic Surface_obj::__CreateEmpty() { return new Surface_obj; }

void *Surface_obj::_hx_vtable = 0;

Dynamic Surface_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Surface_obj > _hx_result = new Surface_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Surface_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f88539b;
}

void Surface_obj::notify( ::Dynamic touchStartListener, ::Dynamic touchEndListener, ::Dynamic moveListener){
            	HX_STACKFRAME(&_hx_pos_12c7feb5c140131f_21_notify)
HXLINE(  22)		if (hx::IsNotNull( touchStartListener )) {
HXLINE(  22)			this->touchStartListeners->push(touchStartListener);
            		}
HXLINE(  23)		if (hx::IsNotNull( touchEndListener )) {
HXLINE(  23)			this->touchEndListeners->push(touchEndListener);
            		}
HXLINE(  24)		if (hx::IsNotNull( moveListener )) {
HXLINE(  24)			this->moveListeners->push(moveListener);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Surface_obj,notify,(void))

void Surface_obj::remove( ::Dynamic touchStartListener, ::Dynamic touchEndListener, ::Dynamic moveListener){
            	HX_STACKFRAME(&_hx_pos_12c7feb5c140131f_30_remove)
HXLINE(  31)		if (hx::IsNotNull( touchStartListener )) {
HXLINE(  31)			this->touchStartListeners->remove(touchStartListener);
            		}
HXLINE(  32)		if (hx::IsNotNull( touchEndListener )) {
HXLINE(  32)			this->touchEndListeners->remove(touchEndListener);
            		}
HXLINE(  33)		if (hx::IsNotNull( moveListener )) {
HXLINE(  33)			this->moveListeners->push(moveListener);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Surface_obj,remove,(void))

void Surface_obj::sendTouchStartEvent(int index,int x,int y){
            	HX_STACKFRAME(&_hx_pos_12c7feb5c140131f_49_sendTouchStartEvent)
HXDLIN(  49)		int _g = (int)0;
HXDLIN(  49)		::Array< ::Dynamic> _g1 = this->touchStartListeners;
HXDLIN(  49)		while((_g < _g1->length)){
HXDLIN(  49)			 ::Dynamic listener = _g1->__get(_g);
HXDLIN(  49)			_g = (_g + (int)1);
HXLINE(  50)			listener(index,x,y);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Surface_obj,sendTouchStartEvent,(void))

void Surface_obj::sendTouchEndEvent(int index,int x,int y){
            	HX_STACKFRAME(&_hx_pos_12c7feb5c140131f_55_sendTouchEndEvent)
HXDLIN(  55)		int _g = (int)0;
HXDLIN(  55)		::Array< ::Dynamic> _g1 = this->touchEndListeners;
HXDLIN(  55)		while((_g < _g1->length)){
HXDLIN(  55)			 ::Dynamic listener = _g1->__get(_g);
HXDLIN(  55)			_g = (_g + (int)1);
HXLINE(  56)			listener(index,x,y);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Surface_obj,sendTouchEndEvent,(void))

void Surface_obj::sendMoveEvent(int index,int x,int y){
            	HX_STACKFRAME(&_hx_pos_12c7feb5c140131f_61_sendMoveEvent)
HXDLIN(  61)		int _g = (int)0;
HXDLIN(  61)		::Array< ::Dynamic> _g1 = this->moveListeners;
HXDLIN(  61)		while((_g < _g1->length)){
HXDLIN(  61)			 ::Dynamic listener = _g1->__get(_g);
HXDLIN(  61)			_g = (_g + (int)1);
HXLINE(  62)			listener(index,x,y);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Surface_obj,sendMoveEvent,(void))

 ::kha::input::Surface Surface_obj::get(hx::Null< int >  __o_num){
int num = __o_num.Default(0);
            	HX_STACKFRAME(&_hx_pos_12c7feb5c140131f_10_get)
HXLINE(  11)		if ((num != (int)0)) {
HXLINE(  11)			return null();
            		}
HXLINE(  12)		return ::kha::input::Surface_obj::instance;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Surface_obj,get,return )

 ::kha::input::Surface Surface_obj::instance;


Surface_obj::Surface_obj()
{
}

void Surface_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Surface);
	HX_MARK_MEMBER_NAME(touchStartListeners,"touchStartListeners");
	HX_MARK_MEMBER_NAME(touchEndListeners,"touchEndListeners");
	HX_MARK_MEMBER_NAME(moveListeners,"moveListeners");
	HX_MARK_END_CLASS();
}

void Surface_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(touchStartListeners,"touchStartListeners");
	HX_VISIT_MEMBER_NAME(touchEndListeners,"touchEndListeners");
	HX_VISIT_MEMBER_NAME(moveListeners,"moveListeners");
}

hx::Val Surface_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"notify") ) { return hx::Val( notify_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return hx::Val( remove_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"moveListeners") ) { return hx::Val( moveListeners ); }
		if (HX_FIELD_EQ(inName,"sendMoveEvent") ) { return hx::Val( sendMoveEvent_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"touchEndListeners") ) { return hx::Val( touchEndListeners ); }
		if (HX_FIELD_EQ(inName,"sendTouchEndEvent") ) { return hx::Val( sendTouchEndEvent_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"touchStartListeners") ) { return hx::Val( touchStartListeners ); }
		if (HX_FIELD_EQ(inName,"sendTouchStartEvent") ) { return hx::Val( sendTouchStartEvent_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Surface_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = ( instance ); return true; }
	}
	return false;
}

hx::Val Surface_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"moveListeners") ) { moveListeners=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"touchEndListeners") ) { touchEndListeners=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"touchStartListeners") ) { touchStartListeners=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Surface_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast<  ::kha::input::Surface >(); return true; }
	}
	return false;
}

void Surface_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("touchStartListeners","\xdc","\x50","\xa8","\x67"));
	outFields->push(HX_HCSTRING("touchEndListeners","\x83","\xf4","\x39","\x35"));
	outFields->push(HX_HCSTRING("moveListeners","\x2e","\xf8","\x3d","\x0e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Surface_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Surface_obj,touchStartListeners),HX_HCSTRING("touchStartListeners","\xdc","\x50","\xa8","\x67")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Surface_obj,touchEndListeners),HX_HCSTRING("touchEndListeners","\x83","\xf4","\x39","\x35")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Surface_obj,moveListeners),HX_HCSTRING("moveListeners","\x2e","\xf8","\x3d","\x0e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Surface_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::kha::input::Surface*/ ,(void *) &Surface_obj::instance,HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Surface_obj_sMemberFields[] = {
	HX_HCSTRING("notify","\xc9","\xda","\xb8","\x31"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("touchStartListeners","\xdc","\x50","\xa8","\x67"),
	HX_HCSTRING("touchEndListeners","\x83","\xf4","\x39","\x35"),
	HX_HCSTRING("moveListeners","\x2e","\xf8","\x3d","\x0e"),
	HX_HCSTRING("sendTouchStartEvent","\x8f","\x2c","\x82","\x16"),
	HX_HCSTRING("sendTouchEndEvent","\xb6","\x9a","\x7e","\x20"),
	HX_HCSTRING("sendMoveEvent","\xe1","\x00","\x06","\x98"),
	::String(null()) };

static void Surface_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Surface_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Surface_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Surface_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Surface_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Surface_obj::instance,"instance");
};

#endif

hx::Class Surface_obj::__mClass;

static ::String Surface_obj_sStaticFields[] = {
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59"),
	::String(null())
};

void Surface_obj::__register()
{
	hx::Object *dummy = new Surface_obj;
	Surface_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.input.Surface","\xdf","\xeb","\x90","\x3c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Surface_obj::__GetStatic;
	__mClass->mSetStaticField = &Surface_obj::__SetStatic;
	__mClass->mMarkFunc = Surface_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Surface_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Surface_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Surface_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Surface_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Surface_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Surface_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace input

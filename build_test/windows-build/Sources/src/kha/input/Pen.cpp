// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_kha_SystemImpl
#include <kha/SystemImpl.h>
#endif
#ifndef INCLUDED_kha_input_Pen
#include <kha/input/Pen.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c9f4343854789049_94_new,"kha.input.Pen","new",0xe7865bfd,"kha.input.Pen.new","kha/input/Pen.hx",94,0x3387e655)
HX_LOCAL_STACK_FRAME(_hx_pos_c9f4343854789049_20_notify,"kha.input.Pen","notify",0x9e35af4c,"kha.input.Pen.notify","kha/input/Pen.hx",20,0x3387e655)
HX_LOCAL_STACK_FRAME(_hx_pos_c9f4343854789049_27_remove,"kha.input.Pen","remove",0x710570c7,"kha.input.Pen.remove","kha/input/Pen.hx",27,0x3387e655)
HX_LOCAL_STACK_FRAME(_hx_pos_c9f4343854789049_33_notifyWindowed,"kha.input.Pen","notifyWindowed",0x59275fbb,"kha.input.Pen.notifyWindowed","kha/input/Pen.hx",33,0x3387e655)
HX_LOCAL_STACK_FRAME(_hx_pos_c9f4343854789049_68_removeWindowed,"kha.input.Pen","removeWindowed",0x6d1d9436,"kha.input.Pen.removeWindowed","kha/input/Pen.hx",68,0x3387e655)
HX_LOCAL_STACK_FRAME(_hx_pos_c9f4343854789049_98_sendDownEvent,"kha.input.Pen","sendDownEvent",0x56ab17cd,"kha.input.Pen.sendDownEvent","kha/input/Pen.hx",98,0x3387e655)
HX_LOCAL_STACK_FRAME(_hx_pos_c9f4343854789049_106_sendUpEvent,"kha.input.Pen","sendUpEvent",0x37892bf4,"kha.input.Pen.sendUpEvent","kha/input/Pen.hx",106,0x3387e655)
HX_LOCAL_STACK_FRAME(_hx_pos_c9f4343854789049_114_sendMoveEvent,"kha.input.Pen","sendMoveEvent",0xfe5c12be,"kha.input.Pen.sendMoveEvent","kha/input/Pen.hx",114,0x3387e655)
HX_LOCAL_STACK_FRAME(_hx_pos_c9f4343854789049_10_get,"kha.input.Pen","get",0xe7810c33,"kha.input.Pen.get","kha/input/Pen.hx",10,0x3387e655)
namespace kha{
namespace input{

void Pen_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c9f4343854789049_94_new)
HXDLIN(  94)		::kha::input::Pen_obj::instance = hx::ObjectPtr<OBJ_>(this);
            	}

Dynamic Pen_obj::__CreateEmpty() { return new Pen_obj; }

void *Pen_obj::_hx_vtable = 0;

Dynamic Pen_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Pen_obj > _hx_result = new Pen_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Pen_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5826be93;
}

void Pen_obj::notify( ::Dynamic downListener, ::Dynamic upListener, ::Dynamic moveListener){
            	HX_STACKFRAME(&_hx_pos_c9f4343854789049_20_notify)
HXDLIN(  20)		this->notifyWindowed((int)0,downListener,upListener,moveListener);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Pen_obj,notify,(void))

void Pen_obj::remove( ::Dynamic downListener, ::Dynamic upListener, ::Dynamic moveListener){
            	HX_STACKFRAME(&_hx_pos_c9f4343854789049_27_remove)
HXDLIN(  27)		this->removeWindowed((int)0,downListener,upListener,moveListener);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Pen_obj,remove,(void))

void Pen_obj::notifyWindowed(int windowId, ::Dynamic downListener, ::Dynamic upListener, ::Dynamic moveListener){
            	HX_STACKFRAME(&_hx_pos_c9f4343854789049_33_notifyWindowed)
HXLINE(  34)		if (hx::IsNotNull( downListener )) {
HXLINE(  35)			if (hx::IsNull( this->windowDownListeners )) {
HXLINE(  36)				this->windowDownListeners = ::Array_obj< ::Dynamic>::__new(0);
            			}
HXLINE(  38)			while((this->windowDownListeners->length <= windowId)){
HXLINE(  39)				this->windowDownListeners->push(::Array_obj< ::Dynamic>::__new(0));
            			}
HXLINE(  41)			this->windowDownListeners->__get(windowId).StaticCast< ::Array< ::Dynamic> >()->push(downListener);
            		}
HXLINE(  44)		if (hx::IsNotNull( upListener )) {
HXLINE(  45)			if (hx::IsNull( this->windowUpListeners )) {
HXLINE(  46)				this->windowUpListeners = ::Array_obj< ::Dynamic>::__new(0);
            			}
HXLINE(  48)			while((this->windowUpListeners->length <= windowId)){
HXLINE(  49)				this->windowUpListeners->push(::Array_obj< ::Dynamic>::__new(0));
            			}
HXLINE(  51)			this->windowUpListeners->__get(windowId).StaticCast< ::Array< ::Dynamic> >()->push(upListener);
            		}
HXLINE(  54)		if (hx::IsNotNull( moveListener )) {
HXLINE(  55)			if (hx::IsNull( this->windowMoveListeners )) {
HXLINE(  56)				this->windowMoveListeners = ::Array_obj< ::Dynamic>::__new(0);
            			}
HXLINE(  58)			while((this->windowMoveListeners->length <= windowId)){
HXLINE(  59)				this->windowMoveListeners->push(::Array_obj< ::Dynamic>::__new(0));
            			}
HXLINE(  61)			this->windowMoveListeners->__get(windowId).StaticCast< ::Array< ::Dynamic> >()->push(moveListener);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(Pen_obj,notifyWindowed,(void))

void Pen_obj::removeWindowed(int windowId, ::Dynamic downListener, ::Dynamic upListener, ::Dynamic moveListener){
            	HX_STACKFRAME(&_hx_pos_c9f4343854789049_68_removeWindowed)
HXLINE(  69)		bool _hx_tmp;
HXDLIN(  69)		if (hx::IsNotNull( downListener )) {
HXLINE(  69)			_hx_tmp = hx::IsNotNull( this->windowDownListeners );
            		}
            		else {
HXLINE(  69)			_hx_tmp = false;
            		}
HXDLIN(  69)		if (_hx_tmp) {
HXLINE(  70)			if ((windowId < this->windowDownListeners->length)) {
HXLINE(  71)				this->windowDownListeners->__get(windowId).StaticCast< ::Array< ::Dynamic> >()->remove(downListener);
            			}
            		}
HXLINE(  75)		bool _hx_tmp1;
HXDLIN(  75)		if (hx::IsNotNull( upListener )) {
HXLINE(  75)			_hx_tmp1 = hx::IsNotNull( this->windowUpListeners );
            		}
            		else {
HXLINE(  75)			_hx_tmp1 = false;
            		}
HXDLIN(  75)		if (_hx_tmp1) {
HXLINE(  76)			if ((windowId < this->windowUpListeners->length)) {
HXLINE(  77)				this->windowUpListeners->__get(windowId).StaticCast< ::Array< ::Dynamic> >()->remove(upListener);
            			}
            		}
HXLINE(  81)		bool _hx_tmp2;
HXDLIN(  81)		if (hx::IsNotNull( moveListener )) {
HXLINE(  81)			_hx_tmp2 = hx::IsNotNull( this->windowMoveListeners );
            		}
            		else {
HXLINE(  81)			_hx_tmp2 = false;
            		}
HXDLIN(  81)		if (_hx_tmp2) {
HXLINE(  82)			if ((windowId < this->windowMoveListeners->length)) {
HXLINE(  83)				this->windowMoveListeners->__get(windowId).StaticCast< ::Array< ::Dynamic> >()->remove(moveListener);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(Pen_obj,removeWindowed,(void))

void Pen_obj::sendDownEvent(int windowId,int x,int y,Float pressure){
            	HX_STACKFRAME(&_hx_pos_c9f4343854789049_98_sendDownEvent)
HXDLIN(  98)		if (hx::IsNotNull( this->windowDownListeners )) {
HXLINE(  99)			int _g = (int)0;
HXDLIN(  99)			::Array< ::Dynamic> _g1 = this->windowDownListeners->__get(windowId).StaticCast< ::Array< ::Dynamic> >();
HXDLIN(  99)			while((_g < _g1->length)){
HXLINE(  99)				 ::Dynamic listener = _g1->__get(_g);
HXDLIN(  99)				_g = (_g + (int)1);
HXLINE( 100)				listener(x,y,pressure);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(Pen_obj,sendDownEvent,(void))

void Pen_obj::sendUpEvent(int windowId,int x,int y,Float pressure){
            	HX_STACKFRAME(&_hx_pos_c9f4343854789049_106_sendUpEvent)
HXDLIN( 106)		if (hx::IsNotNull( this->windowUpListeners )) {
HXLINE( 107)			int _g = (int)0;
HXDLIN( 107)			::Array< ::Dynamic> _g1 = this->windowUpListeners->__get(windowId).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 107)			while((_g < _g1->length)){
HXLINE( 107)				 ::Dynamic listener = _g1->__get(_g);
HXDLIN( 107)				_g = (_g + (int)1);
HXLINE( 108)				listener(x,y,pressure);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(Pen_obj,sendUpEvent,(void))

void Pen_obj::sendMoveEvent(int windowId,int x,int y,Float pressure){
            	HX_STACKFRAME(&_hx_pos_c9f4343854789049_114_sendMoveEvent)
HXDLIN( 114)		if (hx::IsNotNull( this->windowMoveListeners )) {
HXLINE( 115)			int _g = (int)0;
HXDLIN( 115)			::Array< ::Dynamic> _g1 = this->windowMoveListeners->__get(windowId).StaticCast< ::Array< ::Dynamic> >();
HXDLIN( 115)			while((_g < _g1->length)){
HXLINE( 115)				 ::Dynamic listener = _g1->__get(_g);
HXDLIN( 115)				_g = (_g + (int)1);
HXLINE( 116)				listener(x,y,pressure);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(Pen_obj,sendMoveEvent,(void))

 ::kha::input::Pen Pen_obj::get(hx::Null< int >  __o_num){
int num = __o_num.Default(0);
            	HX_STACKFRAME(&_hx_pos_c9f4343854789049_10_get)
HXDLIN(  10)		return ::kha::SystemImpl_obj::getPen(num);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Pen_obj,get,return )

 ::kha::input::Pen Pen_obj::instance;


Pen_obj::Pen_obj()
{
}

void Pen_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Pen);
	HX_MARK_MEMBER_NAME(windowDownListeners,"windowDownListeners");
	HX_MARK_MEMBER_NAME(windowUpListeners,"windowUpListeners");
	HX_MARK_MEMBER_NAME(windowMoveListeners,"windowMoveListeners");
	HX_MARK_END_CLASS();
}

void Pen_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(windowDownListeners,"windowDownListeners");
	HX_VISIT_MEMBER_NAME(windowUpListeners,"windowUpListeners");
	HX_VISIT_MEMBER_NAME(windowMoveListeners,"windowMoveListeners");
}

hx::Val Pen_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"notify") ) { return hx::Val( notify_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return hx::Val( remove_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sendUpEvent") ) { return hx::Val( sendUpEvent_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"sendDownEvent") ) { return hx::Val( sendDownEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"sendMoveEvent") ) { return hx::Val( sendMoveEvent_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"notifyWindowed") ) { return hx::Val( notifyWindowed_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeWindowed") ) { return hx::Val( removeWindowed_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"windowUpListeners") ) { return hx::Val( windowUpListeners ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"windowDownListeners") ) { return hx::Val( windowDownListeners ); }
		if (HX_FIELD_EQ(inName,"windowMoveListeners") ) { return hx::Val( windowMoveListeners ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Pen_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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

hx::Val Pen_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"windowUpListeners") ) { windowUpListeners=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"windowDownListeners") ) { windowDownListeners=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"windowMoveListeners") ) { windowMoveListeners=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Pen_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast<  ::kha::input::Pen >(); return true; }
	}
	return false;
}

void Pen_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("windowDownListeners","\xad","\x36","\x38","\x35"));
	outFields->push(HX_HCSTRING("windowUpListeners","\x94","\x65","\x2c","\xf0"));
	outFields->push(HX_HCSTRING("windowMoveListeners","\x1e","\xfe","\x7f","\x65"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Pen_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Pen_obj,windowDownListeners),HX_HCSTRING("windowDownListeners","\xad","\x36","\x38","\x35")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Pen_obj,windowUpListeners),HX_HCSTRING("windowUpListeners","\x94","\x65","\x2c","\xf0")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Pen_obj,windowMoveListeners),HX_HCSTRING("windowMoveListeners","\x1e","\xfe","\x7f","\x65")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Pen_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::kha::input::Pen*/ ,(void *) &Pen_obj::instance,HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Pen_obj_sMemberFields[] = {
	HX_HCSTRING("notify","\xc9","\xda","\xb8","\x31"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("notifyWindowed","\x38","\xd0","\x2d","\x34"),
	HX_HCSTRING("removeWindowed","\xb3","\x04","\x24","\x48"),
	HX_HCSTRING("windowDownListeners","\xad","\x36","\x38","\x35"),
	HX_HCSTRING("windowUpListeners","\x94","\x65","\x2c","\xf0"),
	HX_HCSTRING("windowMoveListeners","\x1e","\xfe","\x7f","\x65"),
	HX_HCSTRING("sendDownEvent","\xf0","\x05","\x55","\xf0"),
	HX_HCSTRING("sendUpEvent","\x57","\x3b","\x46","\x5c"),
	HX_HCSTRING("sendMoveEvent","\xe1","\x00","\x06","\x98"),
	::String(null()) };

static void Pen_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Pen_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Pen_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Pen_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Pen_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Pen_obj::instance,"instance");
};

#endif

hx::Class Pen_obj::__mClass;

static ::String Pen_obj_sStaticFields[] = {
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59"),
	::String(null())
};

void Pen_obj::__register()
{
	hx::Object *dummy = new Pen_obj;
	Pen_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.input.Pen","\x8b","\x99","\xd7","\x39");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Pen_obj::__GetStatic;
	__mClass->mSetStaticField = &Pen_obj::__SetStatic;
	__mClass->mMarkFunc = Pen_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Pen_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Pen_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Pen_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Pen_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Pen_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Pen_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace input
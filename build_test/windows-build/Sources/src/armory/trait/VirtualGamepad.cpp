// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_armory_trait_VirtualGamepad
#include <armory/trait/VirtualGamepad.h>
#endif
#ifndef INCLUDED_iron_Trait
#include <iron/Trait.h>
#endif
#ifndef INCLUDED_iron_system_Gamepad
#include <iron/system/Gamepad.h>
#endif
#ifndef INCLUDED_iron_system_Input
#include <iron/system/Input.h>
#endif
#ifndef INCLUDED_iron_system_Mouse
#include <iron/system/Mouse.h>
#endif
#ifndef INCLUDED_iron_system_VirtualInput
#include <iron/system/VirtualInput.h>
#endif
#ifndef INCLUDED_kha_System
#include <kha/System.h>
#endif
#ifndef INCLUDED_kha_graphics2_Graphics
#include <kha/graphics2/Graphics.h>
#endif
#ifndef INCLUDED_kha_graphics2_GraphicsExtension
#include <kha/graphics2/GraphicsExtension.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_dca64e7f384a9006_36_new,"armory.trait.VirtualGamepad","new",0x9fa0b45c,"armory.trait.VirtualGamepad.new","armory/trait/VirtualGamepad.hx",36,0x726dd992)
HX_DEFINE_STACK_FRAME(_hx_pos_dca64e7f384a9006_9_new,"armory.trait.VirtualGamepad","new",0x9fa0b45c,"armory.trait.VirtualGamepad.new","armory/trait/VirtualGamepad.hx",9,0x726dd992)
HX_LOCAL_STACK_FRAME(_hx_pos_dca64e7f384a9006_50_update,"armory.trait.VirtualGamepad","update",0x313a478d,"armory.trait.VirtualGamepad.update","armory/trait/VirtualGamepad.hx",50,0x726dd992)
HX_LOCAL_STACK_FRAME(_hx_pos_dca64e7f384a9006_119_render2D,"armory.trait.VirtualGamepad","render2D",0xe4e6c32c,"armory.trait.VirtualGamepad.render2D","armory/trait/VirtualGamepad.hx",119,0x726dd992)
namespace armory{
namespace trait{

void VirtualGamepad_obj::__construct(){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::armory::trait::VirtualGamepad,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_dca64e7f384a9006_36_new)
HXLINE(  38)			_gthis->leftPadX = (_gthis->r + _gthis->o);
HXLINE(  39)			int _hx_tmp = ::kha::System_obj::windowWidth(null());
HXDLIN(  39)			_gthis->rightPadX = ((_hx_tmp - _gthis->r) - _gthis->o);
HXLINE(  40)			int _hx_tmp1 = ::kha::System_obj::windowHeight(null());
HXDLIN(  40)			_gthis->leftPadY = (_gthis->rightPadY = ((_hx_tmp1 - _gthis->r) - _gthis->o));
HXLINE(  42)			_gthis->gamepad =  ::iron::_hx_system::Gamepad_obj::__alloc( HX_CTX ,(int)0,true);
HXLINE(  43)			::iron::_hx_system::Input_obj::gamepads->push(_gthis->gamepad);
HXLINE(  45)			_gthis->notifyOnUpdate(_gthis->update_dyn());
HXLINE(  46)			_gthis->notifyOnRender2D(_gthis->render2D_dyn());
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACKFRAME(&_hx_pos_dca64e7f384a9006_9_new)
HXLINE(  31)		this->o = (int)40;
HXLINE(  30)		this->r = (int)100;
HXLINE(  28)		this->rightLocked = false;
HXLINE(  27)		this->leftLocked = false;
HXLINE(  25)		this->rightStickYLast = (int)0;
HXLINE(  24)		this->rightStickY = (int)0;
HXLINE(  23)		this->rightStickXLast = (int)0;
HXLINE(  22)		this->rightStickX = (int)0;
HXLINE(  21)		this->leftStickYLast = (int)0;
HXLINE(  20)		this->leftStickY = (int)0;
HXLINE(  19)		this->leftStickXLast = (int)0;
HXLINE(  18)		this->leftStickX = (int)0;
HXLINE(  16)		this->rightPadY = (int)0;
HXLINE(  15)		this->rightPadX = (int)0;
HXLINE(  14)		this->leftPadY = (int)0;
HXLINE(  13)		this->leftPadX = (int)0;
HXLINE(  33)		 ::armory::trait::VirtualGamepad _gthis = hx::ObjectPtr<OBJ_>(this);
HXLINE(  34)		super::__construct();
HXLINE(  36)		this->notifyOnInit( ::Dynamic(new _hx_Closure_0(_gthis)));
            	}

Dynamic VirtualGamepad_obj::__CreateEmpty() { return new VirtualGamepad_obj; }

void *VirtualGamepad_obj::_hx_vtable = 0;

Dynamic VirtualGamepad_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< VirtualGamepad_obj > _hx_result = new VirtualGamepad_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool VirtualGamepad_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3ee9efea) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x3ee9efea;
	} else {
		return inClassId==(int)0x7b609ac2;
	}
}

void VirtualGamepad_obj::update(){
            	HX_STACKFRAME(&_hx_pos_dca64e7f384a9006_50_update)
HXLINE(  51)		 ::iron::_hx_system::Mouse mouse = ::iron::_hx_system::Input_obj::getMouse();
HXLINE(  52)		bool _hx_tmp;
HXDLIN(  52)		if (mouse->started(null())) {
HXLINE(  52)			float vx = (mouse->x - this->leftPadX);
HXDLIN(  52)			float vy = (mouse->y - this->leftPadY);
HXDLIN(  52)			_hx_tmp = (::Math_obj::sqrt(((vx * vx) + (vy * vy))) <= this->r);
            		}
            		else {
HXLINE(  52)			_hx_tmp = false;
            		}
HXDLIN(  52)		if (_hx_tmp) {
HXLINE(  53)			this->leftLocked = true;
            		}
            		else {
HXLINE(  55)			if (mouse->released(null())) {
HXLINE(  56)				this->leftLocked = false;
            			}
            		}
HXLINE(  59)		bool _hx_tmp1;
HXDLIN(  59)		if (mouse->started(null())) {
HXLINE(  59)			float vx1 = (mouse->x - this->rightPadX);
HXDLIN(  59)			float vy1 = (mouse->y - this->rightPadY);
HXDLIN(  59)			_hx_tmp1 = (::Math_obj::sqrt(((vx1 * vx1) + (vy1 * vy1))) <= this->r);
            		}
            		else {
HXLINE(  59)			_hx_tmp1 = false;
            		}
HXDLIN(  59)		if (_hx_tmp1) {
HXLINE(  60)			this->rightLocked = true;
            		}
            		else {
HXLINE(  62)			if (mouse->released(null())) {
HXLINE(  63)				this->rightLocked = false;
            			}
            		}
HXLINE(  66)		if (this->leftLocked) {
HXLINE(  67)			this->leftStickX = ::Std_obj::_hx_int((mouse->x - this->leftPadX));
HXLINE(  68)			this->leftStickY = ::Std_obj::_hx_int((mouse->y - this->leftPadY));
HXLINE(  70)			int l = (this->leftStickX * this->leftStickX);
HXDLIN(  70)			Float l1 = ::Math_obj::sqrt((l + (this->leftStickY * this->leftStickY)));
HXLINE(  71)			if ((l1 > this->r)) {
HXLINE(  72)				int x = this->r;
HXDLIN(  72)				int x1 = this->leftStickX;
HXDLIN(  72)				int x2 = (this->leftStickX * this->leftStickX);
HXDLIN(  72)				Float x3 = (x * ((Float)x1 / (Float)::Math_obj::sqrt((x2 + (this->leftStickY * this->leftStickY)))));
HXLINE(  73)				int y = this->r;
HXDLIN(  73)				int y1 = this->leftStickY;
HXDLIN(  73)				int y2 = (this->leftStickX * this->leftStickX);
HXDLIN(  73)				Float y3 = (y * ((Float)y1 / (Float)::Math_obj::sqrt((y2 + (this->leftStickY * this->leftStickY)))));
HXLINE(  74)				this->leftStickX = ::Std_obj::_hx_int(x3);
HXLINE(  75)				this->leftStickY = ::Std_obj::_hx_int(y3);
            			}
            		}
            		else {
HXLINE(  79)			this->leftStickX = (int)0;
HXLINE(  80)			this->leftStickY = (int)0;
            		}
HXLINE(  83)		if (this->rightLocked) {
HXLINE(  84)			this->rightStickX = ::Std_obj::_hx_int((mouse->x - this->rightPadX));
HXLINE(  85)			this->rightStickY = ::Std_obj::_hx_int((mouse->y - this->rightPadY));
HXLINE(  87)			int l2 = (this->rightStickX * this->rightStickX);
HXDLIN(  87)			Float l3 = ::Math_obj::sqrt((l2 + (this->rightStickY * this->rightStickY)));
HXLINE(  88)			if ((l3 > this->r)) {
HXLINE(  89)				int x4 = this->r;
HXDLIN(  89)				int x5 = this->rightStickX;
HXDLIN(  89)				int x6 = (this->rightStickX * this->rightStickX);
HXDLIN(  89)				Float x7 = (x4 * ((Float)x5 / (Float)::Math_obj::sqrt((x6 + (this->rightStickY * this->rightStickY)))));
HXLINE(  90)				int y4 = this->r;
HXDLIN(  90)				int y5 = this->rightStickY;
HXDLIN(  90)				int y6 = (this->rightStickX * this->rightStickX);
HXDLIN(  90)				Float y7 = (y4 * ((Float)y5 / (Float)::Math_obj::sqrt((y6 + (this->rightStickY * this->rightStickY)))));
HXLINE(  91)				this->rightStickX = ::Std_obj::_hx_int(x7);
HXLINE(  92)				this->rightStickY = ::Std_obj::_hx_int(y7);
            			}
            		}
            		else {
HXLINE(  96)			this->rightStickX = (int)0;
HXLINE(  97)			this->rightStickY = (int)0;
            		}
HXLINE( 100)		if ((this->leftStickX != this->leftStickXLast)) {
HXLINE( 101)			 ::iron::_hx_system::Gamepad _hx_tmp2 = this->gamepad;
HXDLIN( 101)			_hx_tmp2->axisListener((int)0,((Float)this->leftStickX / (Float)this->r));
            		}
HXLINE( 103)		if ((this->leftStickY != this->leftStickYLast)) {
HXLINE( 104)			 ::iron::_hx_system::Gamepad _hx_tmp3 = this->gamepad;
HXDLIN( 104)			_hx_tmp3->axisListener((int)1,((Float)this->leftStickY / (Float)this->r));
            		}
HXLINE( 106)		if ((this->rightStickX != this->rightStickXLast)) {
HXLINE( 107)			 ::iron::_hx_system::Gamepad _hx_tmp4 = this->gamepad;
HXDLIN( 107)			_hx_tmp4->axisListener((int)2,((Float)this->rightStickX / (Float)this->r));
            		}
HXLINE( 109)		if ((this->rightStickY != this->rightStickYLast)) {
HXLINE( 110)			 ::iron::_hx_system::Gamepad _hx_tmp5 = this->gamepad;
HXDLIN( 110)			_hx_tmp5->axisListener((int)3,((Float)this->rightStickY / (Float)this->r));
            		}
HXLINE( 113)		this->leftStickXLast = this->leftStickX;
HXLINE( 114)		this->leftStickYLast = this->leftStickY;
HXLINE( 115)		this->rightStickXLast = this->rightStickX;
HXLINE( 116)		this->rightStickYLast = this->rightStickY;
            	}


HX_DEFINE_DYNAMIC_FUNC0(VirtualGamepad_obj,update,(void))

void VirtualGamepad_obj::render2D( ::kha::graphics2::Graphics g){
            	HX_STACKFRAME(&_hx_pos_dca64e7f384a9006_119_render2D)
HXLINE( 120)		g->set_color((int)-5592406);
HXLINE( 122)		::kha::graphics2::GraphicsExtension_obj::fillCircle(g,this->leftPadX,this->leftPadY,this->r,null());
HXLINE( 123)		::kha::graphics2::GraphicsExtension_obj::fillCircle(g,this->rightPadX,this->rightPadY,this->r,null());
HXLINE( 125)		int r2 = ::Std_obj::_hx_int(((Float)this->r / (Float)((Float)2.2)));
HXLINE( 126)		g->set_color((int)-188);
HXLINE( 127)		int _hx_tmp = (this->leftPadX + this->leftStickX);
HXDLIN( 127)		::kha::graphics2::GraphicsExtension_obj::fillCircle(g,_hx_tmp,(this->leftPadY + this->leftStickY),r2,null());
HXLINE( 128)		int _hx_tmp1 = (this->rightPadX + this->rightStickX);
HXDLIN( 128)		::kha::graphics2::GraphicsExtension_obj::fillCircle(g,_hx_tmp1,(this->rightPadY + this->rightStickY),r2,null());
HXLINE( 130)		g->set_color((int)-1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(VirtualGamepad_obj,render2D,(void))


hx::ObjectPtr< VirtualGamepad_obj > VirtualGamepad_obj::__new() {
	hx::ObjectPtr< VirtualGamepad_obj > __this = new VirtualGamepad_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< VirtualGamepad_obj > VirtualGamepad_obj::__alloc(hx::Ctx *_hx_ctx) {
	VirtualGamepad_obj *__this = (VirtualGamepad_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(VirtualGamepad_obj), true, "armory.trait.VirtualGamepad"));
	*(void **)__this = VirtualGamepad_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

VirtualGamepad_obj::VirtualGamepad_obj()
{
}

void VirtualGamepad_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VirtualGamepad);
	HX_MARK_MEMBER_NAME(gamepad,"gamepad");
	HX_MARK_MEMBER_NAME(leftPadX,"leftPadX");
	HX_MARK_MEMBER_NAME(leftPadY,"leftPadY");
	HX_MARK_MEMBER_NAME(rightPadX,"rightPadX");
	HX_MARK_MEMBER_NAME(rightPadY,"rightPadY");
	HX_MARK_MEMBER_NAME(leftStickX,"leftStickX");
	HX_MARK_MEMBER_NAME(leftStickXLast,"leftStickXLast");
	HX_MARK_MEMBER_NAME(leftStickY,"leftStickY");
	HX_MARK_MEMBER_NAME(leftStickYLast,"leftStickYLast");
	HX_MARK_MEMBER_NAME(rightStickX,"rightStickX");
	HX_MARK_MEMBER_NAME(rightStickXLast,"rightStickXLast");
	HX_MARK_MEMBER_NAME(rightStickY,"rightStickY");
	HX_MARK_MEMBER_NAME(rightStickYLast,"rightStickYLast");
	HX_MARK_MEMBER_NAME(leftLocked,"leftLocked");
	HX_MARK_MEMBER_NAME(rightLocked,"rightLocked");
	HX_MARK_MEMBER_NAME(r,"r");
	HX_MARK_MEMBER_NAME(o,"o");
	 ::iron::Trait_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void VirtualGamepad_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gamepad,"gamepad");
	HX_VISIT_MEMBER_NAME(leftPadX,"leftPadX");
	HX_VISIT_MEMBER_NAME(leftPadY,"leftPadY");
	HX_VISIT_MEMBER_NAME(rightPadX,"rightPadX");
	HX_VISIT_MEMBER_NAME(rightPadY,"rightPadY");
	HX_VISIT_MEMBER_NAME(leftStickX,"leftStickX");
	HX_VISIT_MEMBER_NAME(leftStickXLast,"leftStickXLast");
	HX_VISIT_MEMBER_NAME(leftStickY,"leftStickY");
	HX_VISIT_MEMBER_NAME(leftStickYLast,"leftStickYLast");
	HX_VISIT_MEMBER_NAME(rightStickX,"rightStickX");
	HX_VISIT_MEMBER_NAME(rightStickXLast,"rightStickXLast");
	HX_VISIT_MEMBER_NAME(rightStickY,"rightStickY");
	HX_VISIT_MEMBER_NAME(rightStickYLast,"rightStickYLast");
	HX_VISIT_MEMBER_NAME(leftLocked,"leftLocked");
	HX_VISIT_MEMBER_NAME(rightLocked,"rightLocked");
	HX_VISIT_MEMBER_NAME(r,"r");
	HX_VISIT_MEMBER_NAME(o,"o");
	 ::iron::Trait_obj::__Visit(HX_VISIT_ARG);
}

hx::Val VirtualGamepad_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { return hx::Val( r ); }
		if (HX_FIELD_EQ(inName,"o") ) { return hx::Val( o ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gamepad") ) { return hx::Val( gamepad ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"leftPadX") ) { return hx::Val( leftPadX ); }
		if (HX_FIELD_EQ(inName,"leftPadY") ) { return hx::Val( leftPadY ); }
		if (HX_FIELD_EQ(inName,"render2D") ) { return hx::Val( render2D_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rightPadX") ) { return hx::Val( rightPadX ); }
		if (HX_FIELD_EQ(inName,"rightPadY") ) { return hx::Val( rightPadY ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"leftStickX") ) { return hx::Val( leftStickX ); }
		if (HX_FIELD_EQ(inName,"leftStickY") ) { return hx::Val( leftStickY ); }
		if (HX_FIELD_EQ(inName,"leftLocked") ) { return hx::Val( leftLocked ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"rightStickX") ) { return hx::Val( rightStickX ); }
		if (HX_FIELD_EQ(inName,"rightStickY") ) { return hx::Val( rightStickY ); }
		if (HX_FIELD_EQ(inName,"rightLocked") ) { return hx::Val( rightLocked ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"leftStickXLast") ) { return hx::Val( leftStickXLast ); }
		if (HX_FIELD_EQ(inName,"leftStickYLast") ) { return hx::Val( leftStickYLast ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"rightStickXLast") ) { return hx::Val( rightStickXLast ); }
		if (HX_FIELD_EQ(inName,"rightStickYLast") ) { return hx::Val( rightStickYLast ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val VirtualGamepad_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { r=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"o") ) { o=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gamepad") ) { gamepad=inValue.Cast<  ::iron::_hx_system::Gamepad >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"leftPadX") ) { leftPadX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"leftPadY") ) { leftPadY=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rightPadX") ) { rightPadX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rightPadY") ) { rightPadY=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"leftStickX") ) { leftStickX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"leftStickY") ) { leftStickY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"leftLocked") ) { leftLocked=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"rightStickX") ) { rightStickX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rightStickY") ) { rightStickY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rightLocked") ) { rightLocked=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"leftStickXLast") ) { leftStickXLast=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"leftStickYLast") ) { leftStickYLast=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"rightStickXLast") ) { rightStickXLast=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rightStickYLast") ) { rightStickYLast=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VirtualGamepad_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89"));
	outFields->push(HX_HCSTRING("leftPadX","\x4c","\x1b","\x4d","\x51"));
	outFields->push(HX_HCSTRING("leftPadY","\x4d","\x1b","\x4d","\x51"));
	outFields->push(HX_HCSTRING("rightPadX","\xa1","\x2d","\x18","\xb5"));
	outFields->push(HX_HCSTRING("rightPadY","\xa2","\x2d","\x18","\xb5"));
	outFields->push(HX_HCSTRING("leftStickX","\x6f","\x68","\x49","\x3a"));
	outFields->push(HX_HCSTRING("leftStickXLast","\x65","\x02","\x1e","\x5b"));
	outFields->push(HX_HCSTRING("leftStickY","\x70","\x68","\x49","\x3a"));
	outFields->push(HX_HCSTRING("leftStickYLast","\xe6","\x96","\x84","\xee"));
	outFields->push(HX_HCSTRING("rightStickX","\x04","\x7a","\xbd","\x74"));
	outFields->push(HX_HCSTRING("rightStickXLast","\x7a","\x02","\x23","\x7a"));
	outFields->push(HX_HCSTRING("rightStickY","\x05","\x7a","\xbd","\x74"));
	outFields->push(HX_HCSTRING("rightStickYLast","\xfb","\x96","\x89","\x0d"));
	outFields->push(HX_HCSTRING("leftLocked","\x71","\xc0","\xd7","\x88"));
	outFields->push(HX_HCSTRING("rightLocked","\x06","\xd2","\x4b","\xc3"));
	outFields->push(HX_HCSTRING("r","\x72","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("o","\x6f","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo VirtualGamepad_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::iron::_hx_system::Gamepad*/ ,(int)offsetof(VirtualGamepad_obj,gamepad),HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89")},
	{hx::fsInt,(int)offsetof(VirtualGamepad_obj,leftPadX),HX_HCSTRING("leftPadX","\x4c","\x1b","\x4d","\x51")},
	{hx::fsInt,(int)offsetof(VirtualGamepad_obj,leftPadY),HX_HCSTRING("leftPadY","\x4d","\x1b","\x4d","\x51")},
	{hx::fsInt,(int)offsetof(VirtualGamepad_obj,rightPadX),HX_HCSTRING("rightPadX","\xa1","\x2d","\x18","\xb5")},
	{hx::fsInt,(int)offsetof(VirtualGamepad_obj,rightPadY),HX_HCSTRING("rightPadY","\xa2","\x2d","\x18","\xb5")},
	{hx::fsInt,(int)offsetof(VirtualGamepad_obj,leftStickX),HX_HCSTRING("leftStickX","\x6f","\x68","\x49","\x3a")},
	{hx::fsInt,(int)offsetof(VirtualGamepad_obj,leftStickXLast),HX_HCSTRING("leftStickXLast","\x65","\x02","\x1e","\x5b")},
	{hx::fsInt,(int)offsetof(VirtualGamepad_obj,leftStickY),HX_HCSTRING("leftStickY","\x70","\x68","\x49","\x3a")},
	{hx::fsInt,(int)offsetof(VirtualGamepad_obj,leftStickYLast),HX_HCSTRING("leftStickYLast","\xe6","\x96","\x84","\xee")},
	{hx::fsInt,(int)offsetof(VirtualGamepad_obj,rightStickX),HX_HCSTRING("rightStickX","\x04","\x7a","\xbd","\x74")},
	{hx::fsInt,(int)offsetof(VirtualGamepad_obj,rightStickXLast),HX_HCSTRING("rightStickXLast","\x7a","\x02","\x23","\x7a")},
	{hx::fsInt,(int)offsetof(VirtualGamepad_obj,rightStickY),HX_HCSTRING("rightStickY","\x05","\x7a","\xbd","\x74")},
	{hx::fsInt,(int)offsetof(VirtualGamepad_obj,rightStickYLast),HX_HCSTRING("rightStickYLast","\xfb","\x96","\x89","\x0d")},
	{hx::fsBool,(int)offsetof(VirtualGamepad_obj,leftLocked),HX_HCSTRING("leftLocked","\x71","\xc0","\xd7","\x88")},
	{hx::fsBool,(int)offsetof(VirtualGamepad_obj,rightLocked),HX_HCSTRING("rightLocked","\x06","\xd2","\x4b","\xc3")},
	{hx::fsInt,(int)offsetof(VirtualGamepad_obj,r),HX_HCSTRING("r","\x72","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(VirtualGamepad_obj,o),HX_HCSTRING("o","\x6f","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *VirtualGamepad_obj_sStaticStorageInfo = 0;
#endif

static ::String VirtualGamepad_obj_sMemberFields[] = {
	HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89"),
	HX_HCSTRING("leftPadX","\x4c","\x1b","\x4d","\x51"),
	HX_HCSTRING("leftPadY","\x4d","\x1b","\x4d","\x51"),
	HX_HCSTRING("rightPadX","\xa1","\x2d","\x18","\xb5"),
	HX_HCSTRING("rightPadY","\xa2","\x2d","\x18","\xb5"),
	HX_HCSTRING("leftStickX","\x6f","\x68","\x49","\x3a"),
	HX_HCSTRING("leftStickXLast","\x65","\x02","\x1e","\x5b"),
	HX_HCSTRING("leftStickY","\x70","\x68","\x49","\x3a"),
	HX_HCSTRING("leftStickYLast","\xe6","\x96","\x84","\xee"),
	HX_HCSTRING("rightStickX","\x04","\x7a","\xbd","\x74"),
	HX_HCSTRING("rightStickXLast","\x7a","\x02","\x23","\x7a"),
	HX_HCSTRING("rightStickY","\x05","\x7a","\xbd","\x74"),
	HX_HCSTRING("rightStickYLast","\xfb","\x96","\x89","\x0d"),
	HX_HCSTRING("leftLocked","\x71","\xc0","\xd7","\x88"),
	HX_HCSTRING("rightLocked","\x06","\xd2","\x4b","\xc3"),
	HX_HCSTRING("r","\x72","\x00","\x00","\x00"),
	HX_HCSTRING("o","\x6f","\x00","\x00","\x00"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("render2D","\xa8","\x98","\xdb","\xb2"),
	::String(null()) };

static void VirtualGamepad_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VirtualGamepad_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void VirtualGamepad_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VirtualGamepad_obj::__mClass,"__mClass");
};

#endif

hx::Class VirtualGamepad_obj::__mClass;

void VirtualGamepad_obj::__register()
{
	hx::Object *dummy = new VirtualGamepad_obj;
	VirtualGamepad_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.trait.VirtualGamepad","\x6a","\x96","\x68","\x89");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = VirtualGamepad_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(VirtualGamepad_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< VirtualGamepad_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = VirtualGamepad_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VirtualGamepad_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VirtualGamepad_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace armory
} // end namespace trait
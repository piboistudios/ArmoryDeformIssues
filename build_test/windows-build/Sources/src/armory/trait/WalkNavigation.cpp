// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_armory_trait_WalkNavigation
#include <armory/trait/WalkNavigation.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_iron_Trait
#include <iron/Trait.h>
#endif
#ifndef INCLUDED_iron_math_Mat4
#include <iron/math/Mat4.h>
#endif
#ifndef INCLUDED_iron_math_Vec4
#include <iron/math/Vec4.h>
#endif
#ifndef INCLUDED_iron_object_CameraObject
#include <iron/object/CameraObject.h>
#endif
#ifndef INCLUDED_iron_object_Object
#include <iron/object/Object.h>
#endif
#ifndef INCLUDED_iron_object_Transform
#include <iron/object/Transform.h>
#endif
#ifndef INCLUDED_iron_system_Gamepad
#include <iron/system/Gamepad.h>
#endif
#ifndef INCLUDED_iron_system_GamepadStick
#include <iron/system/GamepadStick.h>
#endif
#ifndef INCLUDED_iron_system_Input
#include <iron/system/Input.h>
#endif
#ifndef INCLUDED_iron_system_Keyboard
#include <iron/system/Keyboard.h>
#endif
#ifndef INCLUDED_iron_system_Mouse
#include <iron/system/Mouse.h>
#endif
#ifndef INCLUDED_iron_system_Time
#include <iron/system/Time.h>
#endif
#ifndef INCLUDED_iron_system_VirtualInput
#include <iron/system/VirtualInput.h>
#endif
#ifndef INCLUDED_kha_math_FastMatrix4
#include <kha/math/FastMatrix4.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8d9259737989c278_9_new,"armory.trait.WalkNavigation","new",0xe9568003,"armory.trait.WalkNavigation.new","armory/trait/WalkNavigation.hx",9,0x54e97fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_8d9259737989c278_32_init,"armory.trait.WalkNavigation","init",0x3f123a0d,"armory.trait.WalkNavigation.init","armory/trait/WalkNavigation.hx",32,0x54e97fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_8d9259737989c278_49_update,"armory.trait.WalkNavigation","update",0xc357fe46,"armory.trait.WalkNavigation.update","armory/trait/WalkNavigation.hx",49,0x54e97fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_8d9259737989c278_11_boot,"armory.trait.WalkNavigation","boot",0x3a72832f,"armory.trait.WalkNavigation.boot","armory/trait/WalkNavigation.hx",11,0x54e97fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_8d9259737989c278_12_boot,"armory.trait.WalkNavigation","boot",0x3a72832f,"armory.trait.WalkNavigation.boot","armory/trait/WalkNavigation.hx",12,0x54e97fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_8d9259737989c278_135_boot,"armory.trait.WalkNavigation","boot",0x3a72832f,"armory.trait.WalkNavigation.boot","armory/trait/WalkNavigation.hx",135,0x54e97fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_8d9259737989c278_136_boot,"armory.trait.WalkNavigation","boot",0x3a72832f,"armory.trait.WalkNavigation.boot","armory/trait/WalkNavigation.hx",136,0x54e97fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_8d9259737989c278_137_boot,"armory.trait.WalkNavigation","boot",0x3a72832f,"armory.trait.WalkNavigation.boot","armory/trait/WalkNavigation.hx",137,0x54e97fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_8d9259737989c278_138_boot,"armory.trait.WalkNavigation","boot",0x3a72832f,"armory.trait.WalkNavigation.boot","armory/trait/WalkNavigation.hx",138,0x54e97fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_8d9259737989c278_139_boot,"armory.trait.WalkNavigation","boot",0x3a72832f,"armory.trait.WalkNavigation.boot","armory/trait/WalkNavigation.hx",139,0x54e97fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_8d9259737989c278_140_boot,"armory.trait.WalkNavigation","boot",0x3a72832f,"armory.trait.WalkNavigation.boot","armory/trait/WalkNavigation.hx",140,0x54e97fcb)
namespace armory{
namespace trait{

void WalkNavigation_obj::__construct(hx::Null< bool >  __o_easing){
bool easing = __o_easing.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_8d9259737989c278_9_new)
HXLINE(  17)		this->ease = ((Float)1.0);
HXLINE(  16)		this->easing = true;
HXLINE(  15)		this->yvec =  ::iron::math::Vec4_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  14)		this->xvec =  ::iron::math::Vec4_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  13)		this->dir =  ::iron::math::Vec4_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  26)		super::__construct();
HXLINE(  28)		this->easing = easing;
HXLINE(  29)		this->notifyOnInit(this->init_dyn());
            	}

Dynamic WalkNavigation_obj::__CreateEmpty() { return new WalkNavigation_obj; }

void *WalkNavigation_obj::_hx_vtable = 0;

Dynamic WalkNavigation_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< WalkNavigation_obj > _hx_result = new WalkNavigation_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool WalkNavigation_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1fedb765) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1fedb765;
	} else {
		return inClassId==(int)0x7b609ac2;
	}
}

void WalkNavigation_obj::init(){
            	HX_STACKFRAME(&_hx_pos_8d9259737989c278_32_init)
HXLINE(  33)		this->keyboard = ::iron::_hx_system::Input_obj::getKeyboard();
HXLINE(  34)		this->gamepad = ::iron::_hx_system::Input_obj::getGamepad(null());
HXLINE(  35)		this->mouse = ::iron::_hx_system::Input_obj::getMouse();
HXLINE(  37)		try {
            			HX_STACK_CATCHABLE(::String, 0);
HXLINE(  38)			this->camera = hx::TCast<  ::iron::object::CameraObject >::cast(this->object);
            		}
            		catch( ::Dynamic _hx_e){
            			if (_hx_e.IsClass< ::String >() ){
            				HX_STACK_BEGIN_CATCH
            				::String msg = _hx_e;
HXLINE(  41)				 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  41)				_hx_tmp(((HX_("Error occurred: ",43,df,9c,e9) + msg) + HX_("\nWalkNavigation trait should be used with a camera object.",25,f8,f1,5a)),hx::SourceInfo(HX_("WalkNavigation.hx",c1,e0,b8,32),41,HX_("armory.trait.WalkNavigation",91,c2,77,09),HX_("init",10,3b,bb,45)));
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  44)		if (hx::IsNotNull( this->camera )) {
HXLINE(  45)			this->notifyOnUpdate(this->update_dyn());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(WalkNavigation_obj,init,(void))

void WalkNavigation_obj::update(){
            	HX_GC_STACKFRAME(&_hx_pos_8d9259737989c278_49_update)
HXLINE(  50)		bool _hx_tmp;
HXDLIN(  50)		if (!(!(::armory::trait::WalkNavigation_obj::enabled))) {
HXLINE(  50)			_hx_tmp = ::iron::_hx_system::Input_obj::occupied;
            		}
            		else {
HXLINE(  50)			_hx_tmp = true;
            		}
HXDLIN(  50)		if (_hx_tmp) {
HXLINE(  50)			return;
            		}
HXLINE(  52)		bool moveForward;
HXDLIN(  52)		if (!(this->keyboard->down(HX_("w",77,00,00,00)))) {
HXLINE(  52)			moveForward = this->keyboard->down(HX_("up",5b,66,00,00));
            		}
            		else {
HXLINE(  52)			moveForward = true;
            		}
HXLINE(  53)		bool moveBackward;
HXDLIN(  53)		if (!(this->keyboard->down(HX_("s",73,00,00,00)))) {
HXLINE(  53)			moveBackward = this->keyboard->down(HX_("down",62,f8,6d,42));
            		}
            		else {
HXLINE(  53)			moveBackward = true;
            		}
HXLINE(  54)		bool strafeLeft;
HXDLIN(  54)		if (!(this->keyboard->down(HX_("a",61,00,00,00)))) {
HXLINE(  54)			strafeLeft = this->keyboard->down(HX_("left",07,08,b0,47));
            		}
            		else {
HXLINE(  54)			strafeLeft = true;
            		}
HXLINE(  55)		bool strafeRight;
HXDLIN(  55)		if (!(this->keyboard->down(HX_("d",64,00,00,00)))) {
HXLINE(  55)			strafeRight = this->keyboard->down(HX_("right",dc,0b,64,e9));
            		}
            		else {
HXLINE(  55)			strafeRight = true;
            		}
HXLINE(  56)		bool strafeUp = this->keyboard->down(HX_("e",65,00,00,00));
HXLINE(  57)		bool strafeDown = this->keyboard->down(HX_("q",71,00,00,00));
HXLINE(  58)		Float fast;
HXDLIN(  58)		if (this->keyboard->down(HX_("shift",82,ec,22,7c))) {
HXLINE(  58)			fast = ((Float)2.0);
            		}
            		else {
HXLINE(  58)			if (this->keyboard->down(HX_("alt",29,f9,49,00))) {
HXLINE(  58)				fast = ((Float)0.5);
            			}
            			else {
HXLINE(  58)				fast = ((Float)1.0);
            			}
            		}
HXLINE(  60)		if (hx::IsNotNull( this->gamepad )) {
HXLINE(  61)			bool leftStickY = (::Math_obj::abs(this->gamepad->leftStick->y) > ((Float)0.05));
HXLINE(  62)			bool leftStickX = (::Math_obj::abs(this->gamepad->leftStick->x) > ((Float)0.05));
HXLINE(  63)			bool r1 = (this->gamepad->down(HX_("r1",7f,63,00,00)) > ((Float)0.0));
HXLINE(  64)			bool l1 = (this->gamepad->down(HX_("l1",45,5e,00,00)) > ((Float)0.0));
HXLINE(  65)			bool rightStickX = (::Math_obj::abs(this->gamepad->rightStick->x) > ((Float)0.1));
HXLINE(  66)			bool rightStickY = (::Math_obj::abs(this->gamepad->rightStick->y) > ((Float)0.1));
HXLINE(  68)			bool _hx_tmp1;
HXDLIN(  68)			bool _hx_tmp2;
HXDLIN(  68)			bool _hx_tmp3;
HXDLIN(  68)			bool _hx_tmp4;
HXDLIN(  68)			bool _hx_tmp5;
HXDLIN(  68)			if (!(leftStickY)) {
HXLINE(  68)				_hx_tmp5 = leftStickX;
            			}
            			else {
HXLINE(  68)				_hx_tmp5 = true;
            			}
HXDLIN(  68)			if (!(_hx_tmp5)) {
HXLINE(  68)				_hx_tmp4 = r1;
            			}
            			else {
HXLINE(  68)				_hx_tmp4 = true;
            			}
HXDLIN(  68)			if (!(_hx_tmp4)) {
HXLINE(  68)				_hx_tmp3 = l1;
            			}
            			else {
HXLINE(  68)				_hx_tmp3 = true;
            			}
HXDLIN(  68)			if (!(_hx_tmp3)) {
HXLINE(  68)				_hx_tmp2 = rightStickX;
            			}
            			else {
HXLINE(  68)				_hx_tmp2 = true;
            			}
HXDLIN(  68)			if (!(_hx_tmp2)) {
HXLINE(  68)				_hx_tmp1 = rightStickY;
            			}
            			else {
HXLINE(  68)				_hx_tmp1 = true;
            			}
HXDLIN(  68)			if (_hx_tmp1) {
HXLINE(  69)				this->dir->set((int)0,(int)0,(int)0,null());
HXLINE(  71)				if (leftStickY) {
HXLINE(  72)					 ::iron::math::Vec4 _hx_tmp6 = this->yvec;
HXDLIN(  72)					 ::iron::object::CameraObject _this = this->camera;
HXDLIN(  72)					_hx_tmp6->setFrom( ::iron::math::Vec4_obj::__alloc( HX_CTX ,-(_this->transform->local->self->_20),-(_this->transform->local->self->_21),-(_this->transform->local->self->_22),null()));
HXLINE(  73)					this->yvec->mult(this->gamepad->leftStick->y);
HXLINE(  74)					this->dir->add(this->yvec);
            				}
HXLINE(  76)				if (leftStickX) {
HXLINE(  77)					 ::iron::math::Vec4 _hx_tmp7 = this->xvec;
HXDLIN(  77)					 ::iron::object::CameraObject _this1 = this->camera;
HXDLIN(  77)					_hx_tmp7->setFrom( ::iron::math::Vec4_obj::__alloc( HX_CTX ,_this1->transform->local->self->_00,_this1->transform->local->self->_01,_this1->transform->local->self->_02,null()));
HXLINE(  78)					this->xvec->mult(this->gamepad->leftStick->x);
HXLINE(  79)					this->dir->add(this->xvec);
            				}
HXLINE(  81)				if (r1) {
HXLINE(  81)					this->dir->addf((int)0,(int)0,(int)1);
            				}
HXLINE(  82)				if (l1) {
HXLINE(  82)					this->dir->addf((int)0,(int)0,(int)-1);
            				}
HXLINE(  84)				Float d = (((((Float)0.016666666666666666) * ::iron::_hx_system::Time_obj::scale) * ((Float)5.0)) * fast);
HXLINE(  85)				this->camera->move(this->dir,d);
HXLINE(  87)				if (rightStickX) {
HXLINE(  88)					 ::iron::object::CameraObject _hx_tmp8 = this->camera;
HXDLIN(  88)					 ::iron::math::Vec4 _hx_tmp9 = ::iron::math::Vec4_obj::zAxis();
HXDLIN(  88)					_hx_tmp8->rotate(_hx_tmp9,((Float)-(this->gamepad->rightStick->x) / (Float)((Float)15.0)));
            				}
HXLINE(  90)				if (rightStickY) {
HXLINE(  91)					 ::iron::object::CameraObject _hx_tmp10 = this->camera;
HXDLIN(  91)					 ::iron::object::CameraObject _this2 = this->camera;
HXDLIN(  91)					 ::iron::math::Vec4 _hx_tmp11 =  ::iron::math::Vec4_obj::__alloc( HX_CTX ,_this2->transform->local->self->_00,_this2->transform->local->self->_01,_this2->transform->local->self->_02,null());
HXDLIN(  91)					_hx_tmp10->rotate(_hx_tmp11,((Float)this->gamepad->rightStick->y / (Float)((Float)15.0)));
            				}
            			}
            		}
HXLINE(  96)		bool _hx_tmp12;
HXDLIN(  96)		bool _hx_tmp13;
HXDLIN(  96)		bool _hx_tmp14;
HXDLIN(  96)		bool _hx_tmp15;
HXDLIN(  96)		bool _hx_tmp16;
HXDLIN(  96)		if (!(moveForward)) {
HXLINE(  96)			_hx_tmp16 = moveBackward;
            		}
            		else {
HXLINE(  96)			_hx_tmp16 = true;
            		}
HXDLIN(  96)		if (!(_hx_tmp16)) {
HXLINE(  96)			_hx_tmp15 = strafeRight;
            		}
            		else {
HXLINE(  96)			_hx_tmp15 = true;
            		}
HXDLIN(  96)		if (!(_hx_tmp15)) {
HXLINE(  96)			_hx_tmp14 = strafeLeft;
            		}
            		else {
HXLINE(  96)			_hx_tmp14 = true;
            		}
HXDLIN(  96)		if (!(_hx_tmp14)) {
HXLINE(  96)			_hx_tmp13 = strafeUp;
            		}
            		else {
HXLINE(  96)			_hx_tmp13 = true;
            		}
HXDLIN(  96)		if (!(_hx_tmp13)) {
HXLINE(  96)			_hx_tmp12 = strafeDown;
            		}
            		else {
HXLINE(  96)			_hx_tmp12 = true;
            		}
HXDLIN(  96)		if (_hx_tmp12) {
HXLINE(  97)			if (this->easing) {
HXLINE(  98)				 ::armory::trait::WalkNavigation _hx_tmp17 = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  98)				_hx_tmp17->ease = (_hx_tmp17->ease + ((((Float)0.016666666666666666) * ::iron::_hx_system::Time_obj::scale) * (int)15));
HXLINE(  99)				if ((this->ease > ((Float)1.0))) {
HXLINE(  99)					this->ease = ((Float)1.0);
            				}
            			}
            			else {
HXLINE( 101)				this->ease = ((Float)1.0);
            			}
HXLINE( 102)			this->dir->set((int)0,(int)0,(int)0,null());
HXLINE( 103)			if (moveForward) {
HXLINE( 103)				 ::iron::math::Vec4 _hx_tmp18 = this->dir;
HXDLIN( 103)				 ::iron::object::CameraObject _this3 = this->camera;
HXDLIN( 103)				float _hx_tmp19 =  ::iron::math::Vec4_obj::__alloc( HX_CTX ,-(_this3->transform->local->self->_20),-(_this3->transform->local->self->_21),-(_this3->transform->local->self->_22),null())->x;
HXDLIN( 103)				 ::iron::object::CameraObject _this4 = this->camera;
HXDLIN( 103)				float _hx_tmp20 =  ::iron::math::Vec4_obj::__alloc( HX_CTX ,-(_this4->transform->local->self->_20),-(_this4->transform->local->self->_21),-(_this4->transform->local->self->_22),null())->y;
HXDLIN( 103)				 ::iron::object::CameraObject _this5 = this->camera;
HXDLIN( 103)				_hx_tmp18->addf(_hx_tmp19,_hx_tmp20, ::iron::math::Vec4_obj::__alloc( HX_CTX ,-(_this5->transform->local->self->_20),-(_this5->transform->local->self->_21),-(_this5->transform->local->self->_22),null())->z);
            			}
HXLINE( 104)			if (moveBackward) {
HXLINE( 104)				 ::iron::math::Vec4 _hx_tmp21 = this->dir;
HXDLIN( 104)				 ::iron::object::CameraObject _this6 = this->camera;
HXDLIN( 104)				float _hx_tmp22 = -( ::iron::math::Vec4_obj::__alloc( HX_CTX ,-(_this6->transform->local->self->_20),-(_this6->transform->local->self->_21),-(_this6->transform->local->self->_22),null())->x);
HXDLIN( 104)				 ::iron::object::CameraObject _this7 = this->camera;
HXDLIN( 104)				float _hx_tmp23 = -( ::iron::math::Vec4_obj::__alloc( HX_CTX ,-(_this7->transform->local->self->_20),-(_this7->transform->local->self->_21),-(_this7->transform->local->self->_22),null())->y);
HXDLIN( 104)				 ::iron::object::CameraObject _this8 = this->camera;
HXDLIN( 104)				_hx_tmp21->addf(_hx_tmp22,_hx_tmp23,-( ::iron::math::Vec4_obj::__alloc( HX_CTX ,-(_this8->transform->local->self->_20),-(_this8->transform->local->self->_21),-(_this8->transform->local->self->_22),null())->z));
            			}
HXLINE( 105)			if (strafeRight) {
HXLINE( 105)				 ::iron::math::Vec4 _hx_tmp24 = this->dir;
HXDLIN( 105)				 ::iron::object::CameraObject _this9 = this->camera;
HXDLIN( 105)				float _hx_tmp25 =  ::iron::math::Vec4_obj::__alloc( HX_CTX ,_this9->transform->local->self->_00,_this9->transform->local->self->_01,_this9->transform->local->self->_02,null())->x;
HXDLIN( 105)				 ::iron::object::CameraObject _this10 = this->camera;
HXDLIN( 105)				float _hx_tmp26 =  ::iron::math::Vec4_obj::__alloc( HX_CTX ,_this10->transform->local->self->_00,_this10->transform->local->self->_01,_this10->transform->local->self->_02,null())->y;
HXDLIN( 105)				 ::iron::object::CameraObject _this11 = this->camera;
HXDLIN( 105)				_hx_tmp24->addf(_hx_tmp25,_hx_tmp26, ::iron::math::Vec4_obj::__alloc( HX_CTX ,_this11->transform->local->self->_00,_this11->transform->local->self->_01,_this11->transform->local->self->_02,null())->z);
            			}
HXLINE( 106)			if (strafeLeft) {
HXLINE( 106)				 ::iron::math::Vec4 _hx_tmp27 = this->dir;
HXDLIN( 106)				 ::iron::object::CameraObject _this12 = this->camera;
HXDLIN( 106)				float _hx_tmp28 = -( ::iron::math::Vec4_obj::__alloc( HX_CTX ,_this12->transform->local->self->_00,_this12->transform->local->self->_01,_this12->transform->local->self->_02,null())->x);
HXDLIN( 106)				 ::iron::object::CameraObject _this13 = this->camera;
HXDLIN( 106)				float _hx_tmp29 = -( ::iron::math::Vec4_obj::__alloc( HX_CTX ,_this13->transform->local->self->_00,_this13->transform->local->self->_01,_this13->transform->local->self->_02,null())->y);
HXDLIN( 106)				 ::iron::object::CameraObject _this14 = this->camera;
HXDLIN( 106)				_hx_tmp27->addf(_hx_tmp28,_hx_tmp29,-( ::iron::math::Vec4_obj::__alloc( HX_CTX ,_this14->transform->local->self->_00,_this14->transform->local->self->_01,_this14->transform->local->self->_02,null())->z));
            			}
HXLINE( 107)			if (strafeUp) {
HXLINE( 107)				this->dir->addf((int)0,(int)0,(int)1);
            			}
HXLINE( 108)			if (strafeDown) {
HXLINE( 108)				this->dir->addf((int)0,(int)0,(int)-1);
            			}
            		}
            		else {
HXLINE( 111)			if (this->easing) {
HXLINE( 112)				 ::armory::trait::WalkNavigation _hx_tmp30 = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 112)				_hx_tmp30->ease = (_hx_tmp30->ease - (((((Float)0.016666666666666666) * ::iron::_hx_system::Time_obj::scale) * ((Float)20.0)) * this->ease));
HXLINE( 113)				if ((this->ease < ((Float)0.0))) {
HXLINE( 113)					this->ease = ((Float)0.0);
            				}
            			}
            			else {
HXLINE( 115)				this->ease = ((Float)0.0);
            			}
            		}
HXLINE( 118)		Float d1 = ((((((Float)0.016666666666666666) * ::iron::_hx_system::Time_obj::scale) * ((Float)5.0)) * fast) * this->ease);
HXLINE( 119)		if ((d1 > ((Float)0.0))) {
HXLINE( 119)			this->camera->move(this->dir,d1);
            		}
HXLINE( 121)		if (this->mouse->down(null())) {
HXLINE( 122)			 ::iron::object::CameraObject _hx_tmp31 = this->camera;
HXDLIN( 122)			 ::iron::math::Vec4 _hx_tmp32 = ::iron::math::Vec4_obj::zAxis();
HXDLIN( 122)			_hx_tmp31->rotate(_hx_tmp32,((Float)-(this->mouse->movementX) / (Float)(int)200));
HXLINE( 123)			 ::iron::object::CameraObject _hx_tmp33 = this->camera;
HXDLIN( 123)			 ::iron::object::CameraObject _this15 = this->camera;
HXDLIN( 123)			 ::iron::math::Vec4 _hx_tmp34 =  ::iron::math::Vec4_obj::__alloc( HX_CTX ,_this15->transform->local->self->_00,_this15->transform->local->self->_01,_this15->transform->local->self->_02,null());
HXDLIN( 123)			_hx_tmp33->rotate(_hx_tmp34,((Float)-(this->mouse->movementY) / (Float)(int)200));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(WalkNavigation_obj,update,(void))

bool WalkNavigation_obj::enabled;

Float WalkNavigation_obj::speed;

::String WalkNavigation_obj::keyUp;

::String WalkNavigation_obj::keyDown;

::String WalkNavigation_obj::keyLeft;

::String WalkNavigation_obj::keyRight;

::String WalkNavigation_obj::keyStrafeUp;

::String WalkNavigation_obj::keyStrafeDown;


hx::ObjectPtr< WalkNavigation_obj > WalkNavigation_obj::__new(hx::Null< bool >  __o_easing) {
	hx::ObjectPtr< WalkNavigation_obj > __this = new WalkNavigation_obj();
	__this->__construct(__o_easing);
	return __this;
}

hx::ObjectPtr< WalkNavigation_obj > WalkNavigation_obj::__alloc(hx::Ctx *_hx_ctx,hx::Null< bool >  __o_easing) {
	WalkNavigation_obj *__this = (WalkNavigation_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(WalkNavigation_obj), true, "armory.trait.WalkNavigation"));
	*(void **)__this = WalkNavigation_obj::_hx_vtable;
	__this->__construct(__o_easing);
	return __this;
}

WalkNavigation_obj::WalkNavigation_obj()
{
}

void WalkNavigation_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WalkNavigation);
	HX_MARK_MEMBER_NAME(dir,"dir");
	HX_MARK_MEMBER_NAME(xvec,"xvec");
	HX_MARK_MEMBER_NAME(yvec,"yvec");
	HX_MARK_MEMBER_NAME(easing,"easing");
	HX_MARK_MEMBER_NAME(ease,"ease");
	HX_MARK_MEMBER_NAME(camera,"camera");
	HX_MARK_MEMBER_NAME(keyboard,"keyboard");
	HX_MARK_MEMBER_NAME(gamepad,"gamepad");
	HX_MARK_MEMBER_NAME(mouse,"mouse");
	 ::iron::Trait_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void WalkNavigation_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dir,"dir");
	HX_VISIT_MEMBER_NAME(xvec,"xvec");
	HX_VISIT_MEMBER_NAME(yvec,"yvec");
	HX_VISIT_MEMBER_NAME(easing,"easing");
	HX_VISIT_MEMBER_NAME(ease,"ease");
	HX_VISIT_MEMBER_NAME(camera,"camera");
	HX_VISIT_MEMBER_NAME(keyboard,"keyboard");
	HX_VISIT_MEMBER_NAME(gamepad,"gamepad");
	HX_VISIT_MEMBER_NAME(mouse,"mouse");
	 ::iron::Trait_obj::__Visit(HX_VISIT_ARG);
}

hx::Val WalkNavigation_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dir") ) { return hx::Val( dir ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"xvec") ) { return hx::Val( xvec ); }
		if (HX_FIELD_EQ(inName,"yvec") ) { return hx::Val( yvec ); }
		if (HX_FIELD_EQ(inName,"ease") ) { return hx::Val( ease ); }
		if (HX_FIELD_EQ(inName,"init") ) { return hx::Val( init_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mouse") ) { return hx::Val( mouse ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"easing") ) { return hx::Val( easing ); }
		if (HX_FIELD_EQ(inName,"camera") ) { return hx::Val( camera ); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gamepad") ) { return hx::Val( gamepad ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"keyboard") ) { return hx::Val( keyboard ); }
	}
	return super::__Field(inName,inCallProp);
}

bool WalkNavigation_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { outValue = ( enabled ); return true; }
	}
	return false;
}

hx::Val WalkNavigation_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dir") ) { dir=inValue.Cast<  ::iron::math::Vec4 >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"xvec") ) { xvec=inValue.Cast<  ::iron::math::Vec4 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yvec") ) { yvec=inValue.Cast<  ::iron::math::Vec4 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ease") ) { ease=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mouse") ) { mouse=inValue.Cast<  ::iron::_hx_system::Mouse >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"easing") ) { easing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"camera") ) { camera=inValue.Cast<  ::iron::object::CameraObject >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gamepad") ) { gamepad=inValue.Cast<  ::iron::_hx_system::Gamepad >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"keyboard") ) { keyboard=inValue.Cast<  ::iron::_hx_system::Keyboard >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool WalkNavigation_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void WalkNavigation_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("dir","\x4d","\x3d","\x4c","\x00"));
	outFields->push(HX_HCSTRING("xvec","\xdc","\x7c","\xab","\x4f"));
	outFields->push(HX_HCSTRING("yvec","\x7b","\xb3","\x54","\x50"));
	outFields->push(HX_HCSTRING("easing","\xab","\x4c","\x3d","\x88"));
	outFields->push(HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43"));
	outFields->push(HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7"));
	outFields->push(HX_HCSTRING("keyboard","\xa7","\xbc","\x29","\x68"));
	outFields->push(HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89"));
	outFields->push(HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo WalkNavigation_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::iron::math::Vec4*/ ,(int)offsetof(WalkNavigation_obj,dir),HX_HCSTRING("dir","\x4d","\x3d","\x4c","\x00")},
	{hx::fsObject /*::iron::math::Vec4*/ ,(int)offsetof(WalkNavigation_obj,xvec),HX_HCSTRING("xvec","\xdc","\x7c","\xab","\x4f")},
	{hx::fsObject /*::iron::math::Vec4*/ ,(int)offsetof(WalkNavigation_obj,yvec),HX_HCSTRING("yvec","\x7b","\xb3","\x54","\x50")},
	{hx::fsBool,(int)offsetof(WalkNavigation_obj,easing),HX_HCSTRING("easing","\xab","\x4c","\x3d","\x88")},
	{hx::fsFloat,(int)offsetof(WalkNavigation_obj,ease),HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43")},
	{hx::fsObject /*::iron::object::CameraObject*/ ,(int)offsetof(WalkNavigation_obj,camera),HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7")},
	{hx::fsObject /*::iron::_hx_system::Keyboard*/ ,(int)offsetof(WalkNavigation_obj,keyboard),HX_HCSTRING("keyboard","\xa7","\xbc","\x29","\x68")},
	{hx::fsObject /*::iron::_hx_system::Gamepad*/ ,(int)offsetof(WalkNavigation_obj,gamepad),HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89")},
	{hx::fsObject /*::iron::_hx_system::Mouse*/ ,(int)offsetof(WalkNavigation_obj,mouse),HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo WalkNavigation_obj_sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &WalkNavigation_obj::enabled,HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e")},
	{hx::fsFloat,(void *) &WalkNavigation_obj::speed,HX_HCSTRING("speed","\x87","\x97","\x69","\x81")},
	{hx::fsString,(void *) &WalkNavigation_obj::keyUp,HX_HCSTRING("keyUp","\xda","\xb9","\xfe","\xde")},
	{hx::fsString,(void *) &WalkNavigation_obj::keyDown,HX_HCSTRING("keyDown","\xa1","\x69","\x47","\x9c")},
	{hx::fsString,(void *) &WalkNavigation_obj::keyLeft,HX_HCSTRING("keyLeft","\x46","\x79","\x89","\xa1")},
	{hx::fsString,(void *) &WalkNavigation_obj::keyRight,HX_HCSTRING("keyRight","\xbd","\xb1","\xcd","\x2d")},
	{hx::fsString,(void *) &WalkNavigation_obj::keyStrafeUp,HX_HCSTRING("keyStrafeUp","\xc9","\xa8","\xcd","\x83")},
	{hx::fsString,(void *) &WalkNavigation_obj::keyStrafeDown,HX_HCSTRING("keyStrafeDown","\x50","\x32","\xe3","\x45")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String WalkNavigation_obj_sMemberFields[] = {
	HX_HCSTRING("dir","\x4d","\x3d","\x4c","\x00"),
	HX_HCSTRING("xvec","\xdc","\x7c","\xab","\x4f"),
	HX_HCSTRING("yvec","\x7b","\xb3","\x54","\x50"),
	HX_HCSTRING("easing","\xab","\x4c","\x3d","\x88"),
	HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43"),
	HX_HCSTRING("camera","\xa5","\x46","\x8c","\xb7"),
	HX_HCSTRING("keyboard","\xa7","\xbc","\x29","\x68"),
	HX_HCSTRING("gamepad","\xa1","\xe0","\x85","\x89"),
	HX_HCSTRING("mouse","\x25","\x16","\x65","\x0c"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void WalkNavigation_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WalkNavigation_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(WalkNavigation_obj::enabled,"enabled");
	HX_MARK_MEMBER_NAME(WalkNavigation_obj::speed,"speed");
	HX_MARK_MEMBER_NAME(WalkNavigation_obj::keyUp,"keyUp");
	HX_MARK_MEMBER_NAME(WalkNavigation_obj::keyDown,"keyDown");
	HX_MARK_MEMBER_NAME(WalkNavigation_obj::keyLeft,"keyLeft");
	HX_MARK_MEMBER_NAME(WalkNavigation_obj::keyRight,"keyRight");
	HX_MARK_MEMBER_NAME(WalkNavigation_obj::keyStrafeUp,"keyStrafeUp");
	HX_MARK_MEMBER_NAME(WalkNavigation_obj::keyStrafeDown,"keyStrafeDown");
};

#ifdef HXCPP_VISIT_ALLOCS
static void WalkNavigation_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WalkNavigation_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(WalkNavigation_obj::enabled,"enabled");
	HX_VISIT_MEMBER_NAME(WalkNavigation_obj::speed,"speed");
	HX_VISIT_MEMBER_NAME(WalkNavigation_obj::keyUp,"keyUp");
	HX_VISIT_MEMBER_NAME(WalkNavigation_obj::keyDown,"keyDown");
	HX_VISIT_MEMBER_NAME(WalkNavigation_obj::keyLeft,"keyLeft");
	HX_VISIT_MEMBER_NAME(WalkNavigation_obj::keyRight,"keyRight");
	HX_VISIT_MEMBER_NAME(WalkNavigation_obj::keyStrafeUp,"keyStrafeUp");
	HX_VISIT_MEMBER_NAME(WalkNavigation_obj::keyStrafeDown,"keyStrafeDown");
};

#endif

hx::Class WalkNavigation_obj::__mClass;

static ::String WalkNavigation_obj_sStaticFields[] = {
	HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"),
	HX_HCSTRING("speed","\x87","\x97","\x69","\x81"),
	HX_HCSTRING("keyUp","\xda","\xb9","\xfe","\xde"),
	HX_HCSTRING("keyDown","\xa1","\x69","\x47","\x9c"),
	HX_HCSTRING("keyLeft","\x46","\x79","\x89","\xa1"),
	HX_HCSTRING("keyRight","\xbd","\xb1","\xcd","\x2d"),
	HX_HCSTRING("keyStrafeUp","\xc9","\xa8","\xcd","\x83"),
	HX_HCSTRING("keyStrafeDown","\x50","\x32","\xe3","\x45"),
	::String(null())
};

void WalkNavigation_obj::__register()
{
	hx::Object *dummy = new WalkNavigation_obj;
	WalkNavigation_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("armory.trait.WalkNavigation","\x91","\xc2","\x77","\x09");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &WalkNavigation_obj::__GetStatic;
	__mClass->mSetStaticField = &WalkNavigation_obj::__SetStatic;
	__mClass->mMarkFunc = WalkNavigation_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(WalkNavigation_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(WalkNavigation_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< WalkNavigation_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = WalkNavigation_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WalkNavigation_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WalkNavigation_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void WalkNavigation_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_8d9259737989c278_11_boot)
HXDLIN(  11)		enabled = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_8d9259737989c278_12_boot)
HXDLIN(  12)		speed = ((Float)5.0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_8d9259737989c278_135_boot)
HXDLIN( 135)		keyUp = HX_("w",77,00,00,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_8d9259737989c278_136_boot)
HXDLIN( 136)		keyDown = HX_("s",73,00,00,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_8d9259737989c278_137_boot)
HXDLIN( 137)		keyLeft = HX_("a",61,00,00,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_8d9259737989c278_138_boot)
HXDLIN( 138)		keyRight = HX_("d",64,00,00,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_8d9259737989c278_139_boot)
HXDLIN( 139)		keyStrafeUp = HX_("e",65,00,00,00);
            	}
{
            	HX_STACKFRAME(&_hx_pos_8d9259737989c278_140_boot)
HXDLIN( 140)		keyStrafeDown = HX_("q",71,00,00,00);
            	}
}

} // end namespace armory
} // end namespace trait
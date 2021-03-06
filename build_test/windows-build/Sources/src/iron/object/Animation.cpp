// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_7d028c26efabce49
#define INCLUDED_7d028c26efabce49
#include "cpp_uint32array.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_iron_Scene
#include <iron/Scene.h>
#endif
#ifndef INCLUDED_iron_data_Armature
#include <iron/data/Armature.h>
#endif
#ifndef INCLUDED_iron_math_Mat4
#include <iron/math/Mat4.h>
#endif
#ifndef INCLUDED_iron_math_Quat
#include <iron/math/Quat.h>
#endif
#ifndef INCLUDED_iron_math_Vec4
#include <iron/math/Vec4.h>
#endif
#ifndef INCLUDED_iron_object_Animation
#include <iron/object/Animation.h>
#endif
#ifndef INCLUDED_kha_arrays_Float32ArrayPrivate
#include <kha/arrays/Float32ArrayPrivate.h>
#endif
#ifndef INCLUDED_kha_arrays_Uint32ArrayPrivate
#include <kha/arrays/Uint32ArrayPrivate.h>
#endif
#ifndef INCLUDED_kha_math_FastMatrix4
#include <kha/math/FastMatrix4.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a72200f6c6c62f0b_10_new,"iron.object.Animation","new",0xd2a848cd,"iron.object.Animation.new","iron/object/Animation.hx",10,0x9bdeb163)
HX_LOCAL_STACK_FRAME(_hx_pos_a72200f6c6c62f0b_45_play,"iron.object.Animation","play",0x81ef14e7,"iron.object.Animation.play","iron/object/Animation.hx",45,0x9bdeb163)
HX_LOCAL_STACK_FRAME(_hx_pos_a72200f6c6c62f0b_60_pause,"iron.object.Animation","pause",0x280d04a3,"iron.object.Animation.pause","iron/object/Animation.hx",60,0x9bdeb163)
HX_LOCAL_STACK_FRAME(_hx_pos_a72200f6c6c62f0b_64_resume,"iron.object.Animation","resume",0xfc573360,"iron.object.Animation.resume","iron/object/Animation.hx",64,0x9bdeb163)
HX_LOCAL_STACK_FRAME(_hx_pos_a72200f6c6c62f0b_68_remove,"iron.object.Animation","remove",0xf85b65f7,"iron.object.Animation.remove","iron/object/Animation.hx",68,0x9bdeb163)
HX_LOCAL_STACK_FRAME(_hx_pos_a72200f6c6c62f0b_71_update,"iron.object.Animation","update",0x7ad84fbc,"iron.object.Animation.update","iron/object/Animation.hx",71,0x9bdeb163)
HX_LOCAL_STACK_FRAME(_hx_pos_a72200f6c6c62f0b_82_isTrackEnd,"iron.object.Animation","isTrackEnd",0xda76c74d,"iron.object.Animation.isTrackEnd","iron/object/Animation.hx",82,0x9bdeb163)
HX_LOCAL_STACK_FRAME(_hx_pos_a72200f6c6c62f0b_88_checkFrameIndex,"iron.object.Animation","checkFrameIndex",0x08b21e7a,"iron.object.Animation.checkFrameIndex","iron/object/Animation.hx",88,0x9bdeb163)
HX_LOCAL_STACK_FRAME(_hx_pos_a72200f6c6c62f0b_93_rewind,"iron.object.Animation","rewind",0xfef2f3ae,"iron.object.Animation.rewind","iron/object/Animation.hx",93,0x9bdeb163)
HX_LOCAL_STACK_FRAME(_hx_pos_a72200f6c6c62f0b_98_updateTrack,"iron.object.Animation","updateTrack",0x3c0e252f,"iron.object.Animation.updateTrack","iron/object/Animation.hx",98,0x9bdeb163)
HX_LOCAL_STACK_FRAME(_hx_pos_a72200f6c6c62f0b_131_updateAnimSampled,"iron.object.Animation","updateAnimSampled",0x28a2e48d,"iron.object.Animation.updateAnimSampled","iron/object/Animation.hx",131,0x9bdeb163)
HX_LOCAL_STACK_FRAME(_hx_pos_a72200f6c6c62f0b_167_notifyOnMarker,"iron.object.Animation","notifyOnMarker",0x708da8d5,"iron.object.Animation.notifyOnMarker","iron/object/Animation.hx",167,0x9bdeb163)
HX_LOCAL_STACK_FRAME(_hx_pos_a72200f6c6c62f0b_175_removeMarker,"iron.object.Animation","removeMarker",0x34afa311,"iron.object.Animation.removeMarker","iron/object/Animation.hx",175,0x9bdeb163)
HX_LOCAL_STACK_FRAME(_hx_pos_a72200f6c6c62f0b_178_currentFrame,"iron.object.Animation","currentFrame",0x58a0ef27,"iron.object.Animation.currentFrame","iron/object/Animation.hx",178,0x9bdeb163)
HX_LOCAL_STACK_FRAME(_hx_pos_a72200f6c6c62f0b_179_totalFrames,"iron.object.Animation","totalFrames",0xb311cff7,"iron.object.Animation.totalFrames","iron/object/Animation.hx",179,0x9bdeb163)
HX_LOCAL_STACK_FRAME(_hx_pos_a72200f6c6c62f0b_18_boot,"iron.object.Animation","boot",0x78b06b25,"iron.object.Animation.boot","iron/object/Animation.hx",18,0x9bdeb163)
HX_LOCAL_STACK_FRAME(_hx_pos_a72200f6c6c62f0b_19_boot,"iron.object.Animation","boot",0x78b06b25,"iron.object.Animation.boot","iron/object/Animation.hx",19,0x9bdeb163)
HX_LOCAL_STACK_FRAME(_hx_pos_a72200f6c6c62f0b_20_boot,"iron.object.Animation","boot",0x78b06b25,"iron.object.Animation.boot","iron/object/Animation.hx",20,0x9bdeb163)
HX_LOCAL_STACK_FRAME(_hx_pos_a72200f6c6c62f0b_21_boot,"iron.object.Animation","boot",0x78b06b25,"iron.object.Animation.boot","iron/object/Animation.hx",21,0x9bdeb163)
HX_LOCAL_STACK_FRAME(_hx_pos_a72200f6c6c62f0b_22_boot,"iron.object.Animation","boot",0x78b06b25,"iron.object.Animation.boot","iron/object/Animation.hx",22,0x9bdeb163)
HX_LOCAL_STACK_FRAME(_hx_pos_a72200f6c6c62f0b_23_boot,"iron.object.Animation","boot",0x78b06b25,"iron.object.Animation.boot","iron/object/Animation.hx",23,0x9bdeb163)
HX_LOCAL_STACK_FRAME(_hx_pos_a72200f6c6c62f0b_24_boot,"iron.object.Animation","boot",0x78b06b25,"iron.object.Animation.boot","iron/object/Animation.hx",24,0x9bdeb163)
HX_LOCAL_STACK_FRAME(_hx_pos_a72200f6c6c62f0b_25_boot,"iron.object.Animation","boot",0x78b06b25,"iron.object.Animation.boot","iron/object/Animation.hx",25,0x9bdeb163)
namespace iron{
namespace object{

void Animation_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_a72200f6c6c62f0b_10_new)
HXLINE( 165)		this->markerEvents = null();
HXLINE( 164)		this->lastFrameIndex = (int)-1;
HXLINE(  37)		this->blendAction = HX_("",00,00,00,00);
HXLINE(  36)		this->blendCurrent = ((Float)0.0);
HXLINE(  35)		this->blendTime = ((Float)0.0);
HXLINE(  32)		this->paused = false;
HXLINE(  31)		this->onComplete = null();
HXLINE(  30)		this->frameIndex = (int)0;
HXLINE(  29)		this->loop = true;
HXLINE(  28)		this->speed = ((Float)1.0);
HXLINE(  27)		this->time = ((Float)0.0);
HXLINE(  14)		this->action = HX_("",00,00,00,00);
HXLINE(  40)		::iron::Scene_obj::active->animations->push(hx::ObjectPtr<OBJ_>(this));
HXLINE(  41)		this->frameTime = ( (float)(::iron::Scene_obj::active->raw->__Field(HX_("frame_time",9f,ac,06,50),hx::paccDynamic)) );
HXLINE(  42)		this->play(null(),null(),null(),null(),null());
            	}

Dynamic Animation_obj::__CreateEmpty() { return new Animation_obj; }

void *Animation_obj::_hx_vtable = 0;

Dynamic Animation_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Animation_obj > _hx_result = new Animation_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Animation_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1ad734d9;
}

void Animation_obj::play(::String __o_action, ::Dynamic onComplete,hx::Null< Float >  __o_blendTime,hx::Null< Float >  __o_speed,hx::Null< bool >  __o_loop){
::String action = __o_action.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
Float blendTime = __o_blendTime.Default(((Float)0.0));
Float speed = __o_speed.Default(((Float)1.0));
bool loop = __o_loop.Default(true);
            	HX_STACKFRAME(&_hx_pos_a72200f6c6c62f0b_45_play)
HXLINE(  46)		if ((blendTime > (int)0)) {
HXLINE(  47)			this->blendTime = blendTime;
HXLINE(  48)			this->blendCurrent = ((Float)0.0);
HXLINE(  49)			this->blendAction = this->action;
            		}
            		else {
HXLINE(  51)			this->frameIndex = (int)-1;
            		}
HXLINE(  52)		this->action = action;
HXLINE(  53)		this->onComplete = onComplete;
HXLINE(  54)		this->speed = speed;
HXLINE(  55)		this->loop = loop;
HXLINE(  56)		this->paused = false;
            	}


HX_DEFINE_DYNAMIC_FUNC5(Animation_obj,play,(void))

void Animation_obj::pause(){
            	HX_STACKFRAME(&_hx_pos_a72200f6c6c62f0b_60_pause)
HXDLIN(  60)		this->paused = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,pause,(void))

void Animation_obj::resume(){
            	HX_STACKFRAME(&_hx_pos_a72200f6c6c62f0b_64_resume)
HXDLIN(  64)		this->paused = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,resume,(void))

void Animation_obj::remove(){
            	HX_STACKFRAME(&_hx_pos_a72200f6c6c62f0b_68_remove)
HXDLIN(  68)		::iron::Scene_obj::active->animations->remove(hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,remove,(void))

void Animation_obj::update(Float delta){
            	HX_STACKFRAME(&_hx_pos_a72200f6c6c62f0b_71_update)
HXLINE(  72)		if (this->paused) {
HXLINE(  72)			return;
            		}
HXLINE(  73)		 ::iron::object::Animation _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  73)		_hx_tmp->time = (_hx_tmp->time + (delta * this->speed));
HXLINE(  75)		if ((this->blendTime > (int)0)) {
HXLINE(  76)			 ::iron::object::Animation _hx_tmp1 = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  76)			_hx_tmp1->blendCurrent = (_hx_tmp1->blendCurrent + delta);
HXLINE(  77)			if ((this->blendCurrent >= this->blendTime)) {
HXLINE(  77)				this->blendTime = ((Float)0.0);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,update,(void))

bool Animation_obj::isTrackEnd( ::Dynamic track){
            	HX_STACKFRAME(&_hx_pos_a72200f6c6c62f0b_82_isTrackEnd)
HXDLIN(  82)		if ((this->speed > (int)0)) {
HXLINE(  83)			int _hx_tmp = this->frameIndex;
HXDLIN(  83)			return (_hx_tmp >= (( ( ::kha::arrays::Uint32ArrayPrivate)(track->__Field(HX_("frames",a6,af,85,ac),hx::paccDynamic)) )->self.length() - (int)1));
            		}
            		else {
HXLINE(  84)			return (this->frameIndex <= (int)0);
            		}
HXLINE(  82)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,isTrackEnd,return )

bool Animation_obj::checkFrameIndex( ::kha::arrays::Uint32ArrayPrivate frameValues){
            	HX_STACKFRAME(&_hx_pos_a72200f6c6c62f0b_88_checkFrameIndex)
HXDLIN(  88)		if ((this->speed > (int)0)) {
HXLINE(  89)			int _hx_tmp = (this->frameIndex + (int)1);
HXDLIN(  89)			if ((_hx_tmp < frameValues->self.length())) {
HXLINE(  89)				Float _hx_tmp1 = this->time;
HXDLIN(  89)				int _hx_tmp2 = frameValues->self.get((this->frameIndex + (int)1));
HXDLIN(  89)				return (_hx_tmp1 > (_hx_tmp2 * this->frameTime));
            			}
            			else {
HXLINE(  89)				return false;
            			}
            		}
            		else {
HXLINE(  90)			if (((this->frameIndex - (int)1) > (int)-1)) {
HXLINE(  90)				Float _hx_tmp3 = this->time;
HXDLIN(  90)				int _hx_tmp4 = frameValues->self.get((this->frameIndex - (int)1));
HXDLIN(  90)				return (_hx_tmp3 < (_hx_tmp4 * this->frameTime));
            			}
            			else {
HXLINE(  90)				return false;
            			}
            		}
HXLINE(  88)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,checkFrameIndex,return )

void Animation_obj::rewind( ::Dynamic track){
            	HX_STACKFRAME(&_hx_pos_a72200f6c6c62f0b_93_rewind)
HXLINE(  94)		int _hx_tmp;
HXDLIN(  94)		if ((this->speed > (int)0)) {
HXLINE(  94)			_hx_tmp = (int)0;
            		}
            		else {
HXLINE(  94)			_hx_tmp = (( ( ::kha::arrays::Uint32ArrayPrivate)(track->__Field(HX_("frames",a6,af,85,ac),hx::paccDynamic)) )->self.length() - (int)1);
            		}
HXDLIN(  94)		this->frameIndex = _hx_tmp;
HXLINE(  95)		int _hx_tmp1 = ( ( ::kha::arrays::Uint32ArrayPrivate)(track->__Field(HX_("frames",a6,af,85,ac),hx::paccDynamic)) )->self.get(this->frameIndex);
HXDLIN(  95)		this->time = (_hx_tmp1 * this->frameTime);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,rewind,(void))

void Animation_obj::updateTrack( ::Dynamic anim){
            	HX_STACKFRAME(&_hx_pos_a72200f6c6c62f0b_98_updateTrack)
HXLINE(  99)		if (hx::IsNull( anim )) {
HXLINE(  99)			return;
            		}
HXLINE( 101)		 ::Dynamic track =  ::Dynamic(anim->__Field(HX_("tracks",88,2b,7d,45),hx::paccDynamic))->__GetItem((int)0);
HXLINE( 103)		if ((this->frameIndex == (int)-1)) {
HXLINE( 103)			this->rewind(track);
            		}
HXLINE( 107)		int sign;
HXDLIN( 107)		if ((this->speed > (int)0)) {
HXLINE( 107)			sign = (int)1;
            		}
            		else {
HXLINE( 107)			sign = (int)-1;
            		}
HXLINE( 108)		while(true){
HXLINE( 108)			 ::kha::arrays::Uint32ArrayPrivate frameValues = ( ( ::kha::arrays::Uint32ArrayPrivate)(track->__Field(HX_("frames",a6,af,85,ac),hx::paccDynamic)) );
HXDLIN( 108)			bool _hx_tmp;
HXDLIN( 108)			if ((this->speed > (int)0)) {
HXLINE( 108)				int _hx_tmp1 = (this->frameIndex + (int)1);
HXDLIN( 108)				if ((_hx_tmp1 < frameValues->self.length())) {
HXLINE( 108)					Float _hx_tmp2 = this->time;
HXDLIN( 108)					int _hx_tmp3 = frameValues->self.get((this->frameIndex + (int)1));
HXDLIN( 108)					_hx_tmp = (_hx_tmp2 > (_hx_tmp3 * this->frameTime));
            				}
            				else {
HXLINE( 108)					_hx_tmp = false;
            				}
            			}
            			else {
HXLINE( 108)				if (((this->frameIndex - (int)1) > (int)-1)) {
HXLINE( 108)					Float _hx_tmp4 = this->time;
HXDLIN( 108)					int _hx_tmp5 = frameValues->self.get((this->frameIndex - (int)1));
HXDLIN( 108)					_hx_tmp = (_hx_tmp4 < (_hx_tmp5 * this->frameTime));
            				}
            				else {
HXLINE( 108)					_hx_tmp = false;
            				}
            			}
HXDLIN( 108)			if (!(_hx_tmp)) {
HXLINE( 108)				goto _hx_goto_9;
            			}
HXDLIN( 108)			 ::iron::object::Animation _hx_tmp6 = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 108)			_hx_tmp6->frameIndex = (_hx_tmp6->frameIndex + sign);
            		}
            		_hx_goto_9:;
HXLINE( 112)		bool _hx_tmp7;
HXDLIN( 112)		bool _hx_tmp8;
HXDLIN( 112)		if (hx::IsNotNull( this->markerEvents )) {
HXLINE( 112)			_hx_tmp8 = hx::IsNotNull( ( (::Array< ::String >)(anim->__Field(HX_("marker_names",43,54,ba,46),hx::paccDynamic)) ) );
            		}
            		else {
HXLINE( 112)			_hx_tmp8 = false;
            		}
HXDLIN( 112)		if (_hx_tmp8) {
HXLINE( 112)			_hx_tmp7 = (this->frameIndex != this->lastFrameIndex);
            		}
            		else {
HXLINE( 112)			_hx_tmp7 = false;
            		}
HXDLIN( 112)		if (_hx_tmp7) {
HXLINE( 113)			{
HXLINE( 113)				int _g1 = (int)0;
HXDLIN( 113)				int _g = ( ( ::kha::arrays::Uint32ArrayPrivate)(anim->__Field(HX_("marker_frames",cb,d6,5b,2b),hx::paccDynamic)) )->self.length();
HXDLIN( 113)				while((_g1 < _g)){
HXLINE( 113)					_g1 = (_g1 + (int)1);
HXDLIN( 113)					int i = (_g1 - (int)1);
HXLINE( 114)					int _hx_tmp9 = this->frameIndex;
HXDLIN( 114)					if ((_hx_tmp9 == ( ( ::kha::arrays::Uint32ArrayPrivate)(anim->__Field(HX_("marker_frames",cb,d6,5b,2b),hx::paccDynamic)) )->self.get(i))) {
HXLINE( 115)						::Array< ::Dynamic> ar = ( (::Array< ::Dynamic>)(this->markerEvents->get(( (::String)( ::Dynamic(anim->__Field(HX_("marker_names",43,54,ba,46),hx::paccDynamic))->__GetItem(i)) ))) );
HXLINE( 116)						{
HXLINE( 116)							int _g2 = (int)0;
HXDLIN( 116)							while((_g2 < ar->length)){
HXLINE( 116)								 ::Dynamic f = ar->__get(_g2);
HXDLIN( 116)								_g2 = (_g2 + (int)1);
HXDLIN( 116)								f();
            							}
            						}
            					}
            				}
            			}
HXLINE( 119)			this->lastFrameIndex = this->frameIndex;
            		}
HXLINE( 123)		bool _hx_tmp10;
HXDLIN( 123)		if ((this->speed > (int)0)) {
HXLINE( 123)			int _hx_tmp11 = this->frameIndex;
HXDLIN( 123)			_hx_tmp10 = (_hx_tmp11 >= (( ( ::kha::arrays::Uint32ArrayPrivate)(track->__Field(HX_("frames",a6,af,85,ac),hx::paccDynamic)) )->self.length() - (int)1));
            		}
            		else {
HXLINE( 123)			_hx_tmp10 = (this->frameIndex <= (int)0);
            		}
HXDLIN( 123)		if (_hx_tmp10) {
HXLINE( 124)			bool _hx_tmp12;
HXDLIN( 124)			if (!(this->loop)) {
HXLINE( 124)				_hx_tmp12 = (this->blendTime > (int)0);
            			}
            			else {
HXLINE( 124)				_hx_tmp12 = true;
            			}
HXDLIN( 124)			if (_hx_tmp12) {
HXLINE( 124)				this->rewind(track);
            			}
            			else {
HXLINE( 125)				 ::iron::object::Animation _hx_tmp13 = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 125)				_hx_tmp13->frameIndex = (_hx_tmp13->frameIndex - sign);
HXDLIN( 125)				this->paused = true;
            			}
HXLINE( 126)			bool _hx_tmp14;
HXDLIN( 126)			if (hx::IsNotNull( this->onComplete )) {
HXLINE( 126)				_hx_tmp14 = (this->blendTime == (int)0);
            			}
            			else {
HXLINE( 126)				_hx_tmp14 = false;
            			}
HXDLIN( 126)			if (_hx_tmp14) {
HXLINE( 126)				this->onComplete();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,updateTrack,(void))

void Animation_obj::updateAnimSampled( ::Dynamic anim, ::iron::math::Mat4 targetMatrix){
            	HX_STACKFRAME(&_hx_pos_a72200f6c6c62f0b_131_updateAnimSampled)
HXLINE( 132)		if (hx::IsNull( anim )) {
HXLINE( 132)			return;
            		}
HXLINE( 133)		 ::Dynamic track =  ::Dynamic(anim->__Field(HX_("tracks",88,2b,7d,45),hx::paccDynamic))->__GetItem((int)0);
HXLINE( 134)		int sign;
HXDLIN( 134)		if ((this->speed > (int)0)) {
HXLINE( 134)			sign = (int)1;
            		}
            		else {
HXLINE( 134)			sign = (int)-1;
            		}
HXLINE( 136)		Float t = this->time;
HXLINE( 137)		int ti = this->frameIndex;
HXLINE( 138)		int t1 = ( ( ::kha::arrays::Uint32ArrayPrivate)(track->__Field(HX_("frames",a6,af,85,ac),hx::paccDynamic)) )->self.get(ti);
HXDLIN( 138)		float t11 = (t1 * this->frameTime);
HXLINE( 139)		 uint32array this1 = ( ( ::kha::arrays::Uint32ArrayPrivate)(track->__Field(HX_("frames",a6,af,85,ac),hx::paccDynamic)) )->self;
HXDLIN( 139)		int t2 = this1.get((ti + sign));
HXDLIN( 139)		float t21 = (t2 * this->frameTime);
HXLINE( 140)		Float s = ((Float)(t - t11) / (Float)(t21 - t11));
HXLINE( 142)		 ::iron::math::Mat4 _hx_tmp = ::iron::object::Animation_obj::m1;
HXDLIN( 142)		 ::kha::arrays::Float32ArrayPrivate track1 = ( ( ::kha::arrays::Float32ArrayPrivate)(track->__Field(HX_("values",e2,03,b7,4f),hx::paccDynamic)) );
HXDLIN( 142)		_hx_tmp->setF32(track1,(ti * (int)16));
HXLINE( 143)		 ::iron::math::Mat4 _hx_tmp1 = ::iron::object::Animation_obj::m2;
HXDLIN( 143)		 ::kha::arrays::Float32ArrayPrivate track2 = ( ( ::kha::arrays::Float32ArrayPrivate)(track->__Field(HX_("values",e2,03,b7,4f),hx::paccDynamic)) );
HXDLIN( 143)		_hx_tmp1->setF32(track2,((ti + sign) * (int)16));
HXLINE( 146)		::iron::object::Animation_obj::m1->decompose(::iron::object::Animation_obj::vpos,::iron::object::Animation_obj::q1,::iron::object::Animation_obj::vscl);
HXLINE( 147)		::iron::object::Animation_obj::m2->decompose(::iron::object::Animation_obj::vpos2,::iron::object::Animation_obj::q2,::iron::object::Animation_obj::vscl2);
HXLINE( 150)		 ::iron::math::Vec4 fp = ::iron::object::Animation_obj::vpos;
HXDLIN( 150)		 ::iron::math::Vec4 fp1 = ::iron::object::Animation_obj::vpos2;
HXDLIN( 150)		 ::iron::math::Vec4 fp2 = ::iron::math::Vec4_obj::lerp(fp,fp1,(((Float)1.0) - s));
HXLINE( 151)		 ::iron::math::Vec4 fs = ::iron::object::Animation_obj::vscl;
HXDLIN( 151)		 ::iron::math::Vec4 fs1 = ::iron::object::Animation_obj::vscl2;
HXDLIN( 151)		 ::iron::math::Vec4 fs2 = ::iron::math::Vec4_obj::lerp(fs,fs1,(((Float)1.0) - s));
HXLINE( 152)		 ::iron::math::Quat fq = ::iron::math::Quat_obj::lerp(::iron::object::Animation_obj::q1,::iron::object::Animation_obj::q2,s);
HXLINE( 155)		 ::iron::math::Mat4 m = targetMatrix;
HXLINE( 156)		fq->toMat(m);
HXLINE( 157)		m->scale(fs2);
HXLINE( 158)		m->self->_30 = fp2->x;
HXLINE( 159)		m->self->_31 = fp2->y;
HXLINE( 160)		m->self->_32 = fp2->z;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Animation_obj,updateAnimSampled,(void))

void Animation_obj::notifyOnMarker(::String name, ::Dynamic onMarker){
            	HX_GC_STACKFRAME(&_hx_pos_a72200f6c6c62f0b_167_notifyOnMarker)
HXLINE( 168)		if (hx::IsNull( this->markerEvents )) {
HXLINE( 168)			this->markerEvents =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
HXLINE( 169)		::Array< ::Dynamic> ar = ( (::Array< ::Dynamic>)(this->markerEvents->get(name)) );
HXLINE( 170)		if (hx::IsNull( ar )) {
HXLINE( 170)			ar = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN( 170)			this->markerEvents->set(name,ar);
            		}
HXLINE( 171)		ar->push(onMarker);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Animation_obj,notifyOnMarker,(void))

void Animation_obj::removeMarker(::String name, ::Dynamic onMarker){
            	HX_STACKFRAME(&_hx_pos_a72200f6c6c62f0b_175_removeMarker)
HXDLIN( 175)		( (::Array< ::Dynamic>)(this->markerEvents->get(name)) )->remove(onMarker);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Animation_obj,removeMarker,(void))

int Animation_obj::currentFrame(){
            	HX_STACKFRAME(&_hx_pos_a72200f6c6c62f0b_178_currentFrame)
HXDLIN( 178)		return ::Std_obj::_hx_int(((Float)this->time / (Float)this->frameTime));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,currentFrame,return )

int Animation_obj::totalFrames(){
            	HX_STACKFRAME(&_hx_pos_a72200f6c6c62f0b_179_totalFrames)
HXDLIN( 179)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,totalFrames,return )

 ::iron::math::Mat4 Animation_obj::m1;

 ::iron::math::Mat4 Animation_obj::m2;

 ::iron::math::Vec4 Animation_obj::vpos;

 ::iron::math::Vec4 Animation_obj::vpos2;

 ::iron::math::Vec4 Animation_obj::vscl;

 ::iron::math::Vec4 Animation_obj::vscl2;

 ::iron::math::Quat Animation_obj::q1;

 ::iron::math::Quat Animation_obj::q2;


hx::ObjectPtr< Animation_obj > Animation_obj::__new() {
	hx::ObjectPtr< Animation_obj > __this = new Animation_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Animation_obj > Animation_obj::__alloc(hx::Ctx *_hx_ctx) {
	Animation_obj *__this = (Animation_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Animation_obj), true, "iron.object.Animation"));
	*(void **)__this = Animation_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Animation_obj::Animation_obj()
{
}

void Animation_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Animation);
	HX_MARK_MEMBER_NAME(isSkinned,"isSkinned");
	HX_MARK_MEMBER_NAME(isSampled,"isSampled");
	HX_MARK_MEMBER_NAME(action,"action");
	HX_MARK_MEMBER_NAME(armature,"armature");
	HX_MARK_MEMBER_NAME(time,"time");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(loop,"loop");
	HX_MARK_MEMBER_NAME(frameIndex,"frameIndex");
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(paused,"paused");
	HX_MARK_MEMBER_NAME(frameTime,"frameTime");
	HX_MARK_MEMBER_NAME(blendTime,"blendTime");
	HX_MARK_MEMBER_NAME(blendCurrent,"blendCurrent");
	HX_MARK_MEMBER_NAME(blendAction,"blendAction");
	HX_MARK_MEMBER_NAME(lastFrameIndex,"lastFrameIndex");
	HX_MARK_MEMBER_NAME(markerEvents,"markerEvents");
	HX_MARK_END_CLASS();
}

void Animation_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(isSkinned,"isSkinned");
	HX_VISIT_MEMBER_NAME(isSampled,"isSampled");
	HX_VISIT_MEMBER_NAME(action,"action");
	HX_VISIT_MEMBER_NAME(armature,"armature");
	HX_VISIT_MEMBER_NAME(time,"time");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(loop,"loop");
	HX_VISIT_MEMBER_NAME(frameIndex,"frameIndex");
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
	HX_VISIT_MEMBER_NAME(paused,"paused");
	HX_VISIT_MEMBER_NAME(frameTime,"frameTime");
	HX_VISIT_MEMBER_NAME(blendTime,"blendTime");
	HX_VISIT_MEMBER_NAME(blendCurrent,"blendCurrent");
	HX_VISIT_MEMBER_NAME(blendAction,"blendAction");
	HX_VISIT_MEMBER_NAME(lastFrameIndex,"lastFrameIndex");
	HX_VISIT_MEMBER_NAME(markerEvents,"markerEvents");
}

hx::Val Animation_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { return hx::Val( time ); }
		if (HX_FIELD_EQ(inName,"loop") ) { return hx::Val( loop ); }
		if (HX_FIELD_EQ(inName,"play") ) { return hx::Val( play_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { return hx::Val( speed ); }
		if (HX_FIELD_EQ(inName,"pause") ) { return hx::Val( pause_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"action") ) { return hx::Val( action ); }
		if (HX_FIELD_EQ(inName,"paused") ) { return hx::Val( paused ); }
		if (HX_FIELD_EQ(inName,"resume") ) { return hx::Val( resume_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return hx::Val( remove_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"rewind") ) { return hx::Val( rewind_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"armature") ) { return hx::Val( armature ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isSkinned") ) { return hx::Val( isSkinned ); }
		if (HX_FIELD_EQ(inName,"isSampled") ) { return hx::Val( isSampled ); }
		if (HX_FIELD_EQ(inName,"frameTime") ) { return hx::Val( frameTime ); }
		if (HX_FIELD_EQ(inName,"blendTime") ) { return hx::Val( blendTime ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameIndex") ) { return hx::Val( frameIndex ); }
		if (HX_FIELD_EQ(inName,"onComplete") ) { return hx::Val( onComplete ); }
		if (HX_FIELD_EQ(inName,"isTrackEnd") ) { return hx::Val( isTrackEnd_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"blendAction") ) { return hx::Val( blendAction ); }
		if (HX_FIELD_EQ(inName,"updateTrack") ) { return hx::Val( updateTrack_dyn() ); }
		if (HX_FIELD_EQ(inName,"totalFrames") ) { return hx::Val( totalFrames_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"blendCurrent") ) { return hx::Val( blendCurrent ); }
		if (HX_FIELD_EQ(inName,"markerEvents") ) { return hx::Val( markerEvents ); }
		if (HX_FIELD_EQ(inName,"removeMarker") ) { return hx::Val( removeMarker_dyn() ); }
		if (HX_FIELD_EQ(inName,"currentFrame") ) { return hx::Val( currentFrame_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"lastFrameIndex") ) { return hx::Val( lastFrameIndex ); }
		if (HX_FIELD_EQ(inName,"notifyOnMarker") ) { return hx::Val( notifyOnMarker_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"checkFrameIndex") ) { return hx::Val( checkFrameIndex_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"updateAnimSampled") ) { return hx::Val( updateAnimSampled_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Animation_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"m1") ) { outValue = ( m1 ); return true; }
		if (HX_FIELD_EQ(inName,"m2") ) { outValue = ( m2 ); return true; }
		if (HX_FIELD_EQ(inName,"q1") ) { outValue = ( q1 ); return true; }
		if (HX_FIELD_EQ(inName,"q2") ) { outValue = ( q2 ); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"vpos") ) { outValue = ( vpos ); return true; }
		if (HX_FIELD_EQ(inName,"vscl") ) { outValue = ( vscl ); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"vpos2") ) { outValue = ( vpos2 ); return true; }
		if (HX_FIELD_EQ(inName,"vscl2") ) { outValue = ( vscl2 ); return true; }
	}
	return false;
}

hx::Val Animation_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loop") ) { loop=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"action") ) { action=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"armature") ) { armature=inValue.Cast<  ::iron::data::Armature >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isSkinned") ) { isSkinned=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isSampled") ) { isSampled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frameTime") ) { frameTime=inValue.Cast< float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blendTime") ) { blendTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"frameIndex") ) { frameIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"blendAction") ) { blendAction=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"blendCurrent") ) { blendCurrent=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"markerEvents") ) { markerEvents=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"lastFrameIndex") ) { lastFrameIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Animation_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"m1") ) { m1=ioValue.Cast<  ::iron::math::Mat4 >(); return true; }
		if (HX_FIELD_EQ(inName,"m2") ) { m2=ioValue.Cast<  ::iron::math::Mat4 >(); return true; }
		if (HX_FIELD_EQ(inName,"q1") ) { q1=ioValue.Cast<  ::iron::math::Quat >(); return true; }
		if (HX_FIELD_EQ(inName,"q2") ) { q2=ioValue.Cast<  ::iron::math::Quat >(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"vpos") ) { vpos=ioValue.Cast<  ::iron::math::Vec4 >(); return true; }
		if (HX_FIELD_EQ(inName,"vscl") ) { vscl=ioValue.Cast<  ::iron::math::Vec4 >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"vpos2") ) { vpos2=ioValue.Cast<  ::iron::math::Vec4 >(); return true; }
		if (HX_FIELD_EQ(inName,"vscl2") ) { vscl2=ioValue.Cast<  ::iron::math::Vec4 >(); return true; }
	}
	return false;
}

void Animation_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("isSkinned","\x26","\xa3","\x6e","\x38"));
	outFields->push(HX_HCSTRING("isSampled","\x30","\x42","\xc8","\x87"));
	outFields->push(HX_HCSTRING("action","\xb6","\x3b","\x46","\x16"));
	outFields->push(HX_HCSTRING("armature","\x79","\xa4","\x76","\xec"));
	outFields->push(HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"));
	outFields->push(HX_HCSTRING("speed","\x87","\x97","\x69","\x81"));
	outFields->push(HX_HCSTRING("loop","\x64","\xa6","\xb7","\x47"));
	outFields->push(HX_HCSTRING("frameIndex","\xa5","\xcf","\x3a","\xa1"));
	outFields->push(HX_HCSTRING("paused","\xae","\x40","\x84","\xef"));
	outFields->push(HX_HCSTRING("frameTime","\xda","\x8a","\x7d","\x3a"));
	outFields->push(HX_HCSTRING("blendTime","\xfe","\xdc","\xd3","\x10"));
	outFields->push(HX_HCSTRING("blendCurrent","\xe8","\xf7","\x22","\xfb"));
	outFields->push(HX_HCSTRING("blendAction","\xe7","\x2a","\xb8","\xca"));
	outFields->push(HX_HCSTRING("lastFrameIndex","\x9b","\x65","\xc1","\x14"));
	outFields->push(HX_HCSTRING("markerEvents","\x73","\x40","\x4d","\x7f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Animation_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Animation_obj,isSkinned),HX_HCSTRING("isSkinned","\x26","\xa3","\x6e","\x38")},
	{hx::fsBool,(int)offsetof(Animation_obj,isSampled),HX_HCSTRING("isSampled","\x30","\x42","\xc8","\x87")},
	{hx::fsString,(int)offsetof(Animation_obj,action),HX_HCSTRING("action","\xb6","\x3b","\x46","\x16")},
	{hx::fsObject /*::iron::data::Armature*/ ,(int)offsetof(Animation_obj,armature),HX_HCSTRING("armature","\x79","\xa4","\x76","\xec")},
	{hx::fsFloat,(int)offsetof(Animation_obj,time),HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c")},
	{hx::fsFloat,(int)offsetof(Animation_obj,speed),HX_HCSTRING("speed","\x87","\x97","\x69","\x81")},
	{hx::fsBool,(int)offsetof(Animation_obj,loop),HX_HCSTRING("loop","\x64","\xa6","\xb7","\x47")},
	{hx::fsInt,(int)offsetof(Animation_obj,frameIndex),HX_HCSTRING("frameIndex","\xa5","\xcf","\x3a","\xa1")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Animation_obj,onComplete),HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d")},
	{hx::fsBool,(int)offsetof(Animation_obj,paused),HX_HCSTRING("paused","\xae","\x40","\x84","\xef")},
	{hx::fsObject /*::cpp::Float32*/ ,(int)offsetof(Animation_obj,frameTime),HX_HCSTRING("frameTime","\xda","\x8a","\x7d","\x3a")},
	{hx::fsFloat,(int)offsetof(Animation_obj,blendTime),HX_HCSTRING("blendTime","\xfe","\xdc","\xd3","\x10")},
	{hx::fsFloat,(int)offsetof(Animation_obj,blendCurrent),HX_HCSTRING("blendCurrent","\xe8","\xf7","\x22","\xfb")},
	{hx::fsString,(int)offsetof(Animation_obj,blendAction),HX_HCSTRING("blendAction","\xe7","\x2a","\xb8","\xca")},
	{hx::fsInt,(int)offsetof(Animation_obj,lastFrameIndex),HX_HCSTRING("lastFrameIndex","\x9b","\x65","\xc1","\x14")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Animation_obj,markerEvents),HX_HCSTRING("markerEvents","\x73","\x40","\x4d","\x7f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Animation_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::iron::math::Mat4*/ ,(void *) &Animation_obj::m1,HX_HCSTRING("m1","\x24","\x5f","\x00","\x00")},
	{hx::fsObject /*::iron::math::Mat4*/ ,(void *) &Animation_obj::m2,HX_HCSTRING("m2","\x25","\x5f","\x00","\x00")},
	{hx::fsObject /*::iron::math::Vec4*/ ,(void *) &Animation_obj::vpos,HX_HCSTRING("vpos","\xde","\x8a","\x54","\x4e")},
	{hx::fsObject /*::iron::math::Vec4*/ ,(void *) &Animation_obj::vpos2,HX_HCSTRING("vpos2","\x94","\xf7","\xa4","\x3b")},
	{hx::fsObject /*::iron::math::Vec4*/ ,(void *) &Animation_obj::vscl,HX_HCSTRING("vscl","\x26","\xc7","\x56","\x4e")},
	{hx::fsObject /*::iron::math::Vec4*/ ,(void *) &Animation_obj::vscl2,HX_HCSTRING("vscl2","\x4c","\x7a","\x97","\x3d")},
	{hx::fsObject /*::iron::math::Quat*/ ,(void *) &Animation_obj::q1,HX_HCSTRING("q1","\xa0","\x62","\x00","\x00")},
	{hx::fsObject /*::iron::math::Quat*/ ,(void *) &Animation_obj::q2,HX_HCSTRING("q2","\xa1","\x62","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Animation_obj_sMemberFields[] = {
	HX_HCSTRING("isSkinned","\x26","\xa3","\x6e","\x38"),
	HX_HCSTRING("isSampled","\x30","\x42","\xc8","\x87"),
	HX_HCSTRING("action","\xb6","\x3b","\x46","\x16"),
	HX_HCSTRING("armature","\x79","\xa4","\x76","\xec"),
	HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"),
	HX_HCSTRING("speed","\x87","\x97","\x69","\x81"),
	HX_HCSTRING("loop","\x64","\xa6","\xb7","\x47"),
	HX_HCSTRING("frameIndex","\xa5","\xcf","\x3a","\xa1"),
	HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"),
	HX_HCSTRING("paused","\xae","\x40","\x84","\xef"),
	HX_HCSTRING("frameTime","\xda","\x8a","\x7d","\x3a"),
	HX_HCSTRING("blendTime","\xfe","\xdc","\xd3","\x10"),
	HX_HCSTRING("blendCurrent","\xe8","\xf7","\x22","\xfb"),
	HX_HCSTRING("blendAction","\xe7","\x2a","\xb8","\xca"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("resume","\xad","\x69","\x84","\x08"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("isTrackEnd","\x1a","\xa8","\x51","\xfa"),
	HX_HCSTRING("checkFrameIndex","\x8d","\x36","\x94","\x1a"),
	HX_HCSTRING("rewind","\xfb","\x29","\x20","\x0b"),
	HX_HCSTRING("updateTrack","\xc2","\xf7","\xb7","\xfb"),
	HX_HCSTRING("updateAnimSampled","\x60","\x67","\x49","\x09"),
	HX_HCSTRING("lastFrameIndex","\x9b","\x65","\xc1","\x14"),
	HX_HCSTRING("markerEvents","\x73","\x40","\x4d","\x7f"),
	HX_HCSTRING("notifyOnMarker","\x22","\x74","\x7d","\x50"),
	HX_HCSTRING("removeMarker","\x1e","\x11","\x9e","\x29"),
	HX_HCSTRING("currentFrame","\x34","\x5d","\x8f","\x4d"),
	HX_HCSTRING("totalFrames","\x8a","\xa2","\xbb","\x72"),
	::String(null()) };

static void Animation_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Animation_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Animation_obj::m1,"m1");
	HX_MARK_MEMBER_NAME(Animation_obj::m2,"m2");
	HX_MARK_MEMBER_NAME(Animation_obj::vpos,"vpos");
	HX_MARK_MEMBER_NAME(Animation_obj::vpos2,"vpos2");
	HX_MARK_MEMBER_NAME(Animation_obj::vscl,"vscl");
	HX_MARK_MEMBER_NAME(Animation_obj::vscl2,"vscl2");
	HX_MARK_MEMBER_NAME(Animation_obj::q1,"q1");
	HX_MARK_MEMBER_NAME(Animation_obj::q2,"q2");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Animation_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Animation_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Animation_obj::m1,"m1");
	HX_VISIT_MEMBER_NAME(Animation_obj::m2,"m2");
	HX_VISIT_MEMBER_NAME(Animation_obj::vpos,"vpos");
	HX_VISIT_MEMBER_NAME(Animation_obj::vpos2,"vpos2");
	HX_VISIT_MEMBER_NAME(Animation_obj::vscl,"vscl");
	HX_VISIT_MEMBER_NAME(Animation_obj::vscl2,"vscl2");
	HX_VISIT_MEMBER_NAME(Animation_obj::q1,"q1");
	HX_VISIT_MEMBER_NAME(Animation_obj::q2,"q2");
};

#endif

hx::Class Animation_obj::__mClass;

static ::String Animation_obj_sStaticFields[] = {
	HX_HCSTRING("m1","\x24","\x5f","\x00","\x00"),
	HX_HCSTRING("m2","\x25","\x5f","\x00","\x00"),
	HX_HCSTRING("vpos","\xde","\x8a","\x54","\x4e"),
	HX_HCSTRING("vpos2","\x94","\xf7","\xa4","\x3b"),
	HX_HCSTRING("vscl","\x26","\xc7","\x56","\x4e"),
	HX_HCSTRING("vscl2","\x4c","\x7a","\x97","\x3d"),
	HX_HCSTRING("q1","\xa0","\x62","\x00","\x00"),
	HX_HCSTRING("q2","\xa1","\x62","\x00","\x00"),
	::String(null())
};

void Animation_obj::__register()
{
	hx::Object *dummy = new Animation_obj;
	Animation_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("iron.object.Animation","\x5b","\xde","\xae","\x6a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Animation_obj::__GetStatic;
	__mClass->mSetStaticField = &Animation_obj::__SetStatic;
	__mClass->mMarkFunc = Animation_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Animation_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Animation_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Animation_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Animation_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Animation_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Animation_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Animation_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a72200f6c6c62f0b_18_boot)
HXDLIN(  18)		m1 = ::iron::math::Mat4_obj::identity();
            	}
{
            	HX_STACKFRAME(&_hx_pos_a72200f6c6c62f0b_19_boot)
HXDLIN(  19)		m2 = ::iron::math::Mat4_obj::identity();
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_a72200f6c6c62f0b_20_boot)
HXDLIN(  20)		vpos =  ::iron::math::Vec4_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_a72200f6c6c62f0b_21_boot)
HXDLIN(  21)		vpos2 =  ::iron::math::Vec4_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_a72200f6c6c62f0b_22_boot)
HXDLIN(  22)		vscl =  ::iron::math::Vec4_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_a72200f6c6c62f0b_23_boot)
HXDLIN(  23)		vscl2 =  ::iron::math::Vec4_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_a72200f6c6c62f0b_24_boot)
HXDLIN(  24)		q1 =  ::iron::math::Quat_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_a72200f6c6c62f0b_25_boot)
HXDLIN(  25)		q2 =  ::iron::math::Quat_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            	}
}

} // end namespace iron
} // end namespace object

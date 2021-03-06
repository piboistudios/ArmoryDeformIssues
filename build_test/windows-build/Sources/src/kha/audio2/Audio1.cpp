// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_c5728fd05c542abe
#define INCLUDED_c5728fd05c542abe
#include "cpp_float32array.h"
#endif
#ifndef INCLUDED_cpp_vm_Mutex
#include <cpp/vm/Mutex.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
#ifndef INCLUDED_kha_Sound
#include <kha/Sound.h>
#endif
#ifndef INCLUDED_kha_arrays_Float32ArrayPrivate
#include <kha/arrays/Float32ArrayPrivate.h>
#endif
#ifndef INCLUDED_kha_audio1_AudioChannel
#include <kha/audio1/AudioChannel.h>
#endif
#ifndef INCLUDED_kha_audio2_Audio
#include <kha/audio2/Audio.h>
#endif
#ifndef INCLUDED_kha_audio2_Audio1
#include <kha/audio2/Audio1.h>
#endif
#ifndef INCLUDED_kha_audio2_AudioChannel
#include <kha/audio2/AudioChannel.h>
#endif
#ifndef INCLUDED_kha_audio2_Buffer
#include <kha/audio2/Buffer.h>
#endif
#ifndef INCLUDED_kha_audio2_StreamChannel
#include <kha/audio2/StreamChannel.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_54e6e67d0b7cf5ea_22__init,"kha.audio2.Audio1","_init",0x394948c4,"kha.audio2.Audio1._init","kha/audio2/Audio1.hx",22,0x063d6bfb)
HX_LOCAL_STACK_FRAME(_hx_pos_54e6e67d0b7cf5ea_36_max,"kha.audio2.Audio1","max",0xdc426d39,"kha.audio2.Audio1.max","kha/audio2/Audio1.hx",36,0x063d6bfb)
HX_LOCAL_STACK_FRAME(_hx_pos_54e6e67d0b7cf5ea_40_min,"kha.audio2.Audio1","min",0xdc427427,"kha.audio2.Audio1.min","kha/audio2/Audio1.hx",40,0x063d6bfb)
HX_LOCAL_STACK_FRAME(_hx_pos_54e6e67d0b7cf5ea_43_mix,"kha.audio2.Audio1","mix",0xdc427431,"kha.audio2.Audio1.mix","kha/audio2/Audio1.hx",43,0x063d6bfb)
HX_LOCAL_STACK_FRAME(_hx_pos_54e6e67d0b7cf5ea_89_play,"kha.audio2.Audio1","play",0xdfe10dbf,"kha.audio2.Audio1.play","kha/audio2/Audio1.hx",89,0x063d6bfb)
HX_LOCAL_STACK_FRAME(_hx_pos_54e6e67d0b7cf5ea_108__playAgain,"kha.audio2.Audio1","_playAgain",0x44c12898,"kha.audio2.Audio1._playAgain","kha/audio2/Audio1.hx",108,0x063d6bfb)
HX_LOCAL_STACK_FRAME(_hx_pos_54e6e67d0b7cf5ea_123_stream,"kha.audio2.Audio1","stream",0x3e03bd0b,"kha.audio2.Audio1.stream","kha/audio2/Audio1.hx",123,0x063d6bfb)
HX_LOCAL_STACK_FRAME(_hx_pos_54e6e67d0b7cf5ea_9_boot,"kha.audio2.Audio1","boot",0xd6a263fd,"kha.audio2.Audio1.boot","kha/audio2/Audio1.hx",9,0x063d6bfb)
namespace kha{
namespace audio2{

void Audio1_obj::__construct() { }

Dynamic Audio1_obj::__CreateEmpty() { return new Audio1_obj; }

void *Audio1_obj::_hx_vtable = 0;

Dynamic Audio1_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Audio1_obj > _hx_result = new Audio1_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Audio1_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7fc4c0c3;
}

int Audio1_obj::channelCount;

::Array< ::Dynamic> Audio1_obj::soundChannels;

::Array< ::Dynamic> Audio1_obj::streamChannels;

::Array< ::Dynamic> Audio1_obj::internalSoundChannels;

::Array< ::Dynamic> Audio1_obj::internalStreamChannels;

 ::kha::arrays::Float32ArrayPrivate Audio1_obj::sampleCache1;

 ::kha::arrays::Float32ArrayPrivate Audio1_obj::sampleCache2;

 ::cpp::vm::Mutex Audio1_obj::mutex;

void Audio1_obj::_init(){
            	HX_GC_STACKFRAME(&_hx_pos_54e6e67d0b7cf5ea_22__init)
HXLINE(  24)		::kha::audio2::Audio1_obj::mutex =  ::cpp::vm::Mutex_obj::__alloc( HX_CTX );
HXLINE(  26)		::Array< ::Dynamic> this1 = ::Array_obj< ::Dynamic>::__new((int)16);
HXDLIN(  26)		::kha::audio2::Audio1_obj::soundChannels = this1;
HXLINE(  27)		::Array< ::Dynamic> this2 = ::Array_obj< ::Dynamic>::__new((int)16);
HXDLIN(  27)		::kha::audio2::Audio1_obj::streamChannels = this2;
HXLINE(  28)		::Array< ::Dynamic> this3 = ::Array_obj< ::Dynamic>::__new((int)16);
HXDLIN(  28)		::kha::audio2::Audio1_obj::internalSoundChannels = this3;
HXLINE(  29)		::Array< ::Dynamic> this4 = ::Array_obj< ::Dynamic>::__new((int)16);
HXDLIN(  29)		::kha::audio2::Audio1_obj::internalStreamChannels = this4;
HXLINE(  30)		 ::kha::arrays::Float32ArrayPrivate this5 =  ::kha::arrays::Float32ArrayPrivate_obj::__alloc( HX_CTX ,(int)512);
HXDLIN(  30)		::kha::audio2::Audio1_obj::sampleCache1 = this5;
HXLINE(  31)		 ::kha::arrays::Float32ArrayPrivate this6 =  ::kha::arrays::Float32ArrayPrivate_obj::__alloc( HX_CTX ,(int)512);
HXDLIN(  31)		::kha::audio2::Audio1_obj::sampleCache2 = this6;
HXLINE(  32)		::kha::audio2::Audio_obj::audioCallback = ::kha::audio2::Audio1_obj::mix_dyn();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Audio1_obj,_init,(void))

Float Audio1_obj::max(Float a,Float b){
            	HX_STACKFRAME(&_hx_pos_54e6e67d0b7cf5ea_36_max)
HXDLIN(  36)		if ((a > b)) {
HXDLIN(  36)			return a;
            		}
            		else {
HXDLIN(  36)			return b;
            		}
HXDLIN(  36)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Audio1_obj,max,return )

Float Audio1_obj::min(Float a,Float b){
            	HX_STACKFRAME(&_hx_pos_54e6e67d0b7cf5ea_40_min)
HXDLIN(  40)		if ((a < b)) {
HXDLIN(  40)			return a;
            		}
            		else {
HXDLIN(  40)			return b;
            		}
HXDLIN(  40)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Audio1_obj,min,return )

void Audio1_obj::mix(int samples, ::kha::audio2::Buffer buffer){
            	HX_GC_STACKFRAME(&_hx_pos_54e6e67d0b7cf5ea_43_mix)
HXLINE(  44)		if ((::kha::audio2::Audio1_obj::sampleCache1->self.length() < samples)) {
HXLINE(  45)			 ::kha::arrays::Float32ArrayPrivate this1 =  ::kha::arrays::Float32ArrayPrivate_obj::__alloc( HX_CTX ,samples);
HXDLIN(  45)			::kha::audio2::Audio1_obj::sampleCache1 = this1;
HXLINE(  46)			 ::kha::arrays::Float32ArrayPrivate this2 =  ::kha::arrays::Float32ArrayPrivate_obj::__alloc( HX_CTX ,samples);
HXDLIN(  46)			::kha::audio2::Audio1_obj::sampleCache2 = this2;
            		}
HXLINE(  48)		{
HXLINE(  48)			int _g1 = (int)0;
HXDLIN(  48)			int _g = samples;
HXDLIN(  48)			while((_g1 < _g)){
HXLINE(  48)				_g1 = (_g1 + (int)1);
HXDLIN(  48)				int i = (_g1 - (int)1);
HXLINE(  49)				::kha::audio2::Audio1_obj::sampleCache2->self.set(i,(int)0);
            			}
            		}
HXLINE(  53)		::kha::audio2::Audio1_obj::mutex->acquire();
HXLINE(  55)		{
HXLINE(  55)			int _g2 = (int)0;
HXDLIN(  55)			while((_g2 < (int)16)){
HXLINE(  55)				_g2 = (_g2 + (int)1);
HXDLIN(  55)				int i1 = (_g2 - (int)1);
HXLINE(  56)				{
HXLINE(  56)					::Array< ::Dynamic> this3 = ::kha::audio2::Audio1_obj::internalSoundChannels;
HXDLIN(  56)					 ::kha::audio2::AudioChannel val = ( ( ::kha::audio2::AudioChannel)(_hx_array_unsafe_get(::kha::audio2::Audio1_obj::soundChannels,i1)) );
HXDLIN(  56)					this3->__unsafe_set(i1,val);
            				}
            			}
            		}
HXLINE(  58)		{
HXLINE(  58)			int _g3 = (int)0;
HXDLIN(  58)			while((_g3 < (int)16)){
HXLINE(  58)				_g3 = (_g3 + (int)1);
HXDLIN(  58)				int i2 = (_g3 - (int)1);
HXLINE(  59)				{
HXLINE(  59)					::Array< ::Dynamic> this4 = ::kha::audio2::Audio1_obj::internalStreamChannels;
HXDLIN(  59)					 ::kha::audio2::StreamChannel val1 = ( ( ::kha::audio2::StreamChannel)(_hx_array_unsafe_get(::kha::audio2::Audio1_obj::streamChannels,i2)) );
HXDLIN(  59)					this4->__unsafe_set(i2,val1);
            				}
            			}
            		}
HXLINE(  62)		::kha::audio2::Audio1_obj::mutex->release();
HXLINE(  65)		{
HXLINE(  65)			int _g4 = (int)0;
HXDLIN(  65)			::Array< ::Dynamic> _g11 = ::kha::audio2::Audio1_obj::internalSoundChannels;
HXDLIN(  65)			while((_g4 < _g11->length)){
HXLINE(  65)				 ::kha::audio2::AudioChannel channel = ( ( ::kha::audio2::AudioChannel)(_hx_array_unsafe_get(_g11,_g4)) );
HXDLIN(  65)				_g4 = (_g4 + (int)1);
HXLINE(  66)				bool _hx_tmp;
HXDLIN(  66)				if (hx::IsNotNull( channel )) {
HXLINE(  66)					_hx_tmp = channel->get_finished();
            				}
            				else {
HXLINE(  66)					_hx_tmp = true;
            				}
HXDLIN(  66)				if (_hx_tmp) {
HXLINE(  66)					continue;
            				}
HXLINE(  67)				channel->nextSamples(::kha::audio2::Audio1_obj::sampleCache1,samples,buffer->samplesPerSecond);
HXLINE(  68)				{
HXLINE(  68)					int _g31 = (int)0;
HXDLIN(  68)					int _g21 = samples;
HXDLIN(  68)					while((_g31 < _g21)){
HXLINE(  68)						_g31 = (_g31 + (int)1);
HXDLIN(  68)						int i3 = (_g31 - (int)1);
HXLINE(  69)						{
HXLINE(  69)							int _g41 = i3;
HXDLIN(  69)							 ::kha::arrays::Float32ArrayPrivate _g5 = ::kha::audio2::Audio1_obj::sampleCache2;
HXDLIN(  69)							{
HXLINE(  69)								float value = _g5->self.get(_g41);
HXDLIN(  69)								float value1 = ::kha::audio2::Audio1_obj::sampleCache1->self.get(i3);
HXDLIN(  69)								float value2 = (value + (value1 * channel->get_volume()));
HXDLIN(  69)								_g5->self.set(_g41,value2);
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE(  72)		{
HXLINE(  72)			int _g6 = (int)0;
HXDLIN(  72)			::Array< ::Dynamic> _g12 = ::kha::audio2::Audio1_obj::internalStreamChannels;
HXDLIN(  72)			while((_g6 < _g12->length)){
HXLINE(  72)				 ::kha::audio2::StreamChannel channel1 = ( ( ::kha::audio2::StreamChannel)(_hx_array_unsafe_get(_g12,_g6)) );
HXDLIN(  72)				_g6 = (_g6 + (int)1);
HXLINE(  73)				bool _hx_tmp1;
HXDLIN(  73)				if (hx::IsNotNull( channel1 )) {
HXLINE(  73)					_hx_tmp1 = channel1->get_finished();
            				}
            				else {
HXLINE(  73)					_hx_tmp1 = true;
            				}
HXDLIN(  73)				if (_hx_tmp1) {
HXLINE(  73)					continue;
            				}
HXLINE(  74)				channel1->nextSamples(::kha::audio2::Audio1_obj::sampleCache1,samples,buffer->samplesPerSecond);
HXLINE(  75)				{
HXLINE(  75)					int _g32 = (int)0;
HXDLIN(  75)					int _g22 = samples;
HXDLIN(  75)					while((_g32 < _g22)){
HXLINE(  75)						_g32 = (_g32 + (int)1);
HXDLIN(  75)						int i4 = (_g32 - (int)1);
HXLINE(  76)						{
HXLINE(  76)							int _g42 = i4;
HXDLIN(  76)							 ::kha::arrays::Float32ArrayPrivate _g51 = ::kha::audio2::Audio1_obj::sampleCache2;
HXDLIN(  76)							{
HXLINE(  76)								float value3 = _g51->self.get(_g42);
HXDLIN(  76)								float value4 = ::kha::audio2::Audio1_obj::sampleCache1->self.get(i4);
HXDLIN(  76)								float value5 = (value3 + (value4 * channel1->get_volume()));
HXDLIN(  76)								_g51->self.set(_g42,value5);
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE(  80)		{
HXLINE(  80)			int _g13 = (int)0;
HXDLIN(  80)			int _g7 = samples;
HXDLIN(  80)			while((_g13 < _g7)){
HXLINE(  80)				_g13 = (_g13 + (int)1);
HXDLIN(  80)				int i5 = (_g13 - (int)1);
HXLINE(  81)				{
HXLINE(  81)					 ::kha::arrays::Float32ArrayPrivate this5 = buffer->data;
HXDLIN(  81)					int index = buffer->writeLocation;
HXDLIN(  81)					Float a = ::kha::audio2::Audio1_obj::sampleCache2->self.get(i5);
HXDLIN(  81)					Float a1;
HXDLIN(  81)					if ((a < ((Float)1.0))) {
HXLINE(  81)						a1 = a;
            					}
            					else {
HXLINE(  81)						a1 = ((Float)1.0);
            					}
HXDLIN(  81)					float value6;
HXDLIN(  81)					if ((a1 > ((Float)-1.0))) {
HXLINE(  81)						value6 = a1;
            					}
            					else {
HXLINE(  81)						value6 = ((Float)-1.0);
            					}
HXDLIN(  81)					this5->self.set(index,value6);
            				}
HXLINE(  82)				 ::kha::audio2::Buffer buffer1 = buffer;
HXDLIN(  82)				buffer1->writeLocation = (buffer1->writeLocation + (int)1);
HXLINE(  83)				if ((buffer->writeLocation >= buffer->size)) {
HXLINE(  84)					buffer->writeLocation = (int)0;
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Audio1_obj,mix,(void))

::Dynamic Audio1_obj::play( ::kha::Sound sound,hx::Null< bool >  __o_loop){
bool loop = __o_loop.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_54e6e67d0b7cf5ea_89_play)
HXLINE(  91)		::kha::audio2::Audio1_obj::mutex->acquire();
HXLINE(  93)		 ::kha::audio2::AudioChannel channel = null();
HXLINE(  94)		{
HXLINE(  94)			int _g = (int)0;
HXDLIN(  94)			while((_g < (int)16)){
HXLINE(  94)				_g = (_g + (int)1);
HXDLIN(  94)				int i = (_g - (int)1);
HXLINE(  95)				bool _hx_tmp;
HXDLIN(  95)				if (hx::IsNotNull( ( ( ::kha::audio2::AudioChannel)(_hx_array_unsafe_get(::kha::audio2::Audio1_obj::soundChannels,i)) ) )) {
HXLINE(  95)					_hx_tmp = ( ( ::kha::audio2::AudioChannel)(_hx_array_unsafe_get(::kha::audio2::Audio1_obj::soundChannels,i)) )->get_finished();
            				}
            				else {
HXLINE(  95)					_hx_tmp = true;
            				}
HXDLIN(  95)				if (_hx_tmp) {
HXLINE(  96)					channel =  ::kha::audio2::AudioChannel_obj::__alloc( HX_CTX ,loop);
HXLINE(  97)					channel->data = sound->uncompressedData;
HXLINE(  98)					::kha::audio2::Audio1_obj::soundChannels->__unsafe_set(i,channel);
HXLINE(  99)					goto _hx_goto_12;
            				}
            			}
            			_hx_goto_12:;
            		}
HXLINE( 103)		::kha::audio2::Audio1_obj::mutex->release();
HXLINE( 105)		return channel;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Audio1_obj,play,return )

void Audio1_obj::_playAgain( ::kha::audio2::AudioChannel channel){
            	HX_STACKFRAME(&_hx_pos_54e6e67d0b7cf5ea_108__playAgain)
HXLINE( 110)		::kha::audio2::Audio1_obj::mutex->acquire();
HXLINE( 112)		{
HXLINE( 112)			int _g = (int)0;
HXDLIN( 112)			while((_g < (int)16)){
HXLINE( 112)				_g = (_g + (int)1);
HXDLIN( 112)				int i = (_g - (int)1);
HXLINE( 113)				bool _hx_tmp;
HXDLIN( 113)				bool _hx_tmp1;
HXDLIN( 113)				if (hx::IsNotNull( ( ( ::kha::audio2::AudioChannel)(_hx_array_unsafe_get(::kha::audio2::Audio1_obj::soundChannels,i)) ) )) {
HXLINE( 113)					_hx_tmp1 = ( ( ::kha::audio2::AudioChannel)(_hx_array_unsafe_get(::kha::audio2::Audio1_obj::soundChannels,i)) )->get_finished();
            				}
            				else {
HXLINE( 113)					_hx_tmp1 = true;
            				}
HXDLIN( 113)				if (!(_hx_tmp1)) {
HXLINE( 113)					_hx_tmp = hx::IsEq( ( ( ::kha::audio2::AudioChannel)(_hx_array_unsafe_get(::kha::audio2::Audio1_obj::soundChannels,i)) ),channel );
            				}
            				else {
HXLINE( 113)					_hx_tmp = true;
            				}
HXDLIN( 113)				if (_hx_tmp) {
HXLINE( 114)					::kha::audio2::Audio1_obj::soundChannels->__unsafe_set(i,channel);
HXLINE( 115)					goto _hx_goto_14;
            				}
            			}
            			_hx_goto_14:;
            		}
HXLINE( 119)		::kha::audio2::Audio1_obj::mutex->release();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Audio1_obj,_playAgain,(void))

::Dynamic Audio1_obj::stream( ::kha::Sound sound,hx::Null< bool >  __o_loop){
bool loop = __o_loop.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_54e6e67d0b7cf5ea_123_stream)
HXLINE( 124)		{
HXLINE( 126)			::Dynamic hardwareChannel = ::kha::audio2::Audio_obj::stream(sound,loop);
HXLINE( 127)			if (hx::IsNotNull( hardwareChannel )) {
HXLINE( 127)				return hardwareChannel;
            			}
            		}
HXLINE( 131)		::kha::audio2::Audio1_obj::mutex->acquire();
HXLINE( 133)		 ::kha::audio2::StreamChannel channel = null();
HXLINE( 134)		{
HXLINE( 134)			int _g = (int)0;
HXDLIN( 134)			while((_g < (int)16)){
HXLINE( 134)				_g = (_g + (int)1);
HXDLIN( 134)				int i = (_g - (int)1);
HXLINE( 135)				bool _hx_tmp;
HXDLIN( 135)				if (hx::IsNotNull( ( ( ::kha::audio2::StreamChannel)(_hx_array_unsafe_get(::kha::audio2::Audio1_obj::streamChannels,i)) ) )) {
HXLINE( 135)					_hx_tmp = ( ( ::kha::audio2::StreamChannel)(_hx_array_unsafe_get(::kha::audio2::Audio1_obj::streamChannels,i)) )->get_finished();
            				}
            				else {
HXLINE( 135)					_hx_tmp = true;
            				}
HXDLIN( 135)				if (_hx_tmp) {
HXLINE( 136)					channel =  ::kha::audio2::StreamChannel_obj::__alloc( HX_CTX ,sound->compressedData,loop);
HXLINE( 137)					::kha::audio2::Audio1_obj::streamChannels->__unsafe_set(i,channel);
HXLINE( 138)					goto _hx_goto_16;
            				}
            			}
            			_hx_goto_16:;
            		}
HXLINE( 142)		::kha::audio2::Audio1_obj::mutex->release();
HXLINE( 144)		return channel;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Audio1_obj,stream,return )


Audio1_obj::Audio1_obj()
{
}

bool Audio1_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"max") ) { outValue = max_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"min") ) { outValue = min_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"mix") ) { outValue = mix_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { outValue = play_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mutex") ) { outValue = ( mutex ); return true; }
		if (HX_FIELD_EQ(inName,"_init") ) { outValue = _init_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"stream") ) { outValue = stream_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_playAgain") ) { outValue = _playAgain_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sampleCache1") ) { outValue = ( sampleCache1 ); return true; }
		if (HX_FIELD_EQ(inName,"sampleCache2") ) { outValue = ( sampleCache2 ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"soundChannels") ) { outValue = ( soundChannels ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"streamChannels") ) { outValue = ( streamChannels ); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"internalSoundChannels") ) { outValue = ( internalSoundChannels ); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"internalStreamChannels") ) { outValue = ( internalStreamChannels ); return true; }
	}
	return false;
}

bool Audio1_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"mutex") ) { mutex=ioValue.Cast<  ::cpp::vm::Mutex >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sampleCache1") ) { sampleCache1=ioValue.Cast<  ::kha::arrays::Float32ArrayPrivate >(); return true; }
		if (HX_FIELD_EQ(inName,"sampleCache2") ) { sampleCache2=ioValue.Cast<  ::kha::arrays::Float32ArrayPrivate >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"soundChannels") ) { soundChannels=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"streamChannels") ) { streamChannels=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"internalSoundChannels") ) { internalSoundChannels=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"internalStreamChannels") ) { internalStreamChannels=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Audio1_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Audio1_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Audio1_obj::channelCount,HX_HCSTRING("channelCount","\x0c","\x11","\x16","\x4f")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Audio1_obj::soundChannels,HX_HCSTRING("soundChannels","\x3f","\xda","\x0c","\x08")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Audio1_obj::streamChannels,HX_HCSTRING("streamChannels","\xf0","\xfa","\xb5","\x1f")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Audio1_obj::internalSoundChannels,HX_HCSTRING("internalSoundChannels","\xc2","\x40","\x9f","\xb5")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Audio1_obj::internalStreamChannels,HX_HCSTRING("internalStreamChannels","\x0d","\x47","\x3d","\x52")},
	{hx::fsObject /*::kha::arrays::Float32ArrayPrivate*/ ,(void *) &Audio1_obj::sampleCache1,HX_HCSTRING("sampleCache1","\x79","\xaf","\x5e","\xf5")},
	{hx::fsObject /*::kha::arrays::Float32ArrayPrivate*/ ,(void *) &Audio1_obj::sampleCache2,HX_HCSTRING("sampleCache2","\x7a","\xaf","\x5e","\xf5")},
	{hx::fsObject /*::cpp::vm::Mutex*/ ,(void *) &Audio1_obj::mutex,HX_HCSTRING("mutex","\x7f","\x8f","\x5b","\x10")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Audio1_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Audio1_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Audio1_obj::channelCount,"channelCount");
	HX_MARK_MEMBER_NAME(Audio1_obj::soundChannels,"soundChannels");
	HX_MARK_MEMBER_NAME(Audio1_obj::streamChannels,"streamChannels");
	HX_MARK_MEMBER_NAME(Audio1_obj::internalSoundChannels,"internalSoundChannels");
	HX_MARK_MEMBER_NAME(Audio1_obj::internalStreamChannels,"internalStreamChannels");
	HX_MARK_MEMBER_NAME(Audio1_obj::sampleCache1,"sampleCache1");
	HX_MARK_MEMBER_NAME(Audio1_obj::sampleCache2,"sampleCache2");
	HX_MARK_MEMBER_NAME(Audio1_obj::mutex,"mutex");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Audio1_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Audio1_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Audio1_obj::channelCount,"channelCount");
	HX_VISIT_MEMBER_NAME(Audio1_obj::soundChannels,"soundChannels");
	HX_VISIT_MEMBER_NAME(Audio1_obj::streamChannels,"streamChannels");
	HX_VISIT_MEMBER_NAME(Audio1_obj::internalSoundChannels,"internalSoundChannels");
	HX_VISIT_MEMBER_NAME(Audio1_obj::internalStreamChannels,"internalStreamChannels");
	HX_VISIT_MEMBER_NAME(Audio1_obj::sampleCache1,"sampleCache1");
	HX_VISIT_MEMBER_NAME(Audio1_obj::sampleCache2,"sampleCache2");
	HX_VISIT_MEMBER_NAME(Audio1_obj::mutex,"mutex");
};

#endif

hx::Class Audio1_obj::__mClass;

static ::String Audio1_obj_sStaticFields[] = {
	HX_HCSTRING("channelCount","\x0c","\x11","\x16","\x4f"),
	HX_HCSTRING("soundChannels","\x3f","\xda","\x0c","\x08"),
	HX_HCSTRING("streamChannels","\xf0","\xfa","\xb5","\x1f"),
	HX_HCSTRING("internalSoundChannels","\xc2","\x40","\x9f","\xb5"),
	HX_HCSTRING("internalStreamChannels","\x0d","\x47","\x3d","\x52"),
	HX_HCSTRING("sampleCache1","\x79","\xaf","\x5e","\xf5"),
	HX_HCSTRING("sampleCache2","\x7a","\xaf","\x5e","\xf5"),
	HX_HCSTRING("mutex","\x7f","\x8f","\x5b","\x10"),
	HX_HCSTRING("_init","\xef","\x56","\xcc","\xf8"),
	HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"),
	HX_HCSTRING("min","\x92","\x11","\x53","\x00"),
	HX_HCSTRING("mix","\x9c","\x11","\x53","\x00"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("_playAgain","\x8d","\xde","\xc3","\x9a"),
	HX_HCSTRING("stream","\x80","\x14","\x2d","\x11"),
	::String(null())
};

void Audio1_obj::__register()
{
	hx::Object *dummy = new Audio1_obj;
	Audio1_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.audio2.Audio1","\x83","\x94","\xaf","\x7e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Audio1_obj::__GetStatic;
	__mClass->mSetStaticField = &Audio1_obj::__SetStatic;
	__mClass->mMarkFunc = Audio1_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Audio1_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Audio1_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Audio1_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Audio1_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Audio1_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Audio1_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_54e6e67d0b7cf5ea_9_boot)
HXDLIN(   9)		channelCount = (int)16;
            	}
}

} // end namespace kha
} // end namespace audio2

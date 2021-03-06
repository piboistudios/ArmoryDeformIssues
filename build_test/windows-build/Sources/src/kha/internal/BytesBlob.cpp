// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
#ifndef INCLUDED_kha_internal_BytesBlob
#include <kha/internal/BytesBlob.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bc4afe38f0b9accd_13_new,"kha.internal.BytesBlob","new",0x44ca8653,"kha.internal.BytesBlob.new","kha/internal/BytesBlob.hx",13,0x0af0ac5d)
HX_LOCAL_STACK_FRAME(_hx_pos_bc4afe38f0b9accd_25_sub,"kha.internal.BytesBlob","sub",0x44ce5f73,"kha.internal.BytesBlob.sub","kha/internal/BytesBlob.hx",25,0x0af0ac5d)
HX_LOCAL_STACK_FRAME(_hx_pos_bc4afe38f0b9accd_31_get_length,"kha.internal.BytesBlob","get_length",0x5b6b431c,"kha.internal.BytesBlob.get_length","kha/internal/BytesBlob.hx",31,0x0af0ac5d)
HX_LOCAL_STACK_FRAME(_hx_pos_bc4afe38f0b9accd_35_writeU8,"kha.internal.BytesBlob","writeU8",0xd40a1855,"kha.internal.BytesBlob.writeU8","kha/internal/BytesBlob.hx",35,0x0af0ac5d)
HX_LOCAL_STACK_FRAME(_hx_pos_bc4afe38f0b9accd_38_readU8,"kha.internal.BytesBlob","readU8",0xaa18db06,"kha.internal.BytesBlob.readU8","kha/internal/BytesBlob.hx",38,0x0af0ac5d)
HX_LOCAL_STACK_FRAME(_hx_pos_bc4afe38f0b9accd_44_readS8,"kha.internal.BytesBlob","readS8",0xaa18d948,"kha.internal.BytesBlob.readS8","kha/internal/BytesBlob.hx",44,0x0af0ac5d)
HX_LOCAL_STACK_FRAME(_hx_pos_bc4afe38f0b9accd_52_readU16BE,"kha.internal.BytesBlob","readU16BE",0x762201da,"kha.internal.BytesBlob.readU16BE","kha/internal/BytesBlob.hx",52,0x0af0ac5d)
HX_LOCAL_STACK_FRAME(_hx_pos_bc4afe38f0b9accd_59_readU16LE,"kha.internal.BytesBlob","readU16LE",0x76220a90,"kha.internal.BytesBlob.readU16LE","kha/internal/BytesBlob.hx",59,0x0af0ac5d)
HX_LOCAL_STACK_FRAME(_hx_pos_bc4afe38f0b9accd_66_readU32LE,"kha.internal.BytesBlob","readU32LE",0x77716eca,"kha.internal.BytesBlob.readU32LE","kha/internal/BytesBlob.hx",66,0x0af0ac5d)
HX_LOCAL_STACK_FRAME(_hx_pos_bc4afe38f0b9accd_76_readU32BE,"kha.internal.BytesBlob","readU32BE",0x77716614,"kha.internal.BytesBlob.readU32BE","kha/internal/BytesBlob.hx",76,0x0af0ac5d)
HX_LOCAL_STACK_FRAME(_hx_pos_bc4afe38f0b9accd_86_readS16BE,"kha.internal.BytesBlob","readS16BE",0x4f54d8d8,"kha.internal.BytesBlob.readS16BE","kha/internal/BytesBlob.hx",86,0x0af0ac5d)
HX_LOCAL_STACK_FRAME(_hx_pos_bc4afe38f0b9accd_96_readS16LE,"kha.internal.BytesBlob","readS16LE",0x4f54e18e,"kha.internal.BytesBlob.readS16LE","kha/internal/BytesBlob.hx",96,0x0af0ac5d)
HX_LOCAL_STACK_FRAME(_hx_pos_bc4afe38f0b9accd_106_readS32LE,"kha.internal.BytesBlob","readS32LE",0x50a445c8,"kha.internal.BytesBlob.readS32LE","kha/internal/BytesBlob.hx",106,0x0af0ac5d)
HX_LOCAL_STACK_FRAME(_hx_pos_bc4afe38f0b9accd_118_readS32BE,"kha.internal.BytesBlob","readS32BE",0x50a43d12,"kha.internal.BytesBlob.readS32BE","kha/internal/BytesBlob.hx",118,0x0af0ac5d)
HX_LOCAL_STACK_FRAME(_hx_pos_bc4afe38f0b9accd_131_readF32LE,"kha.internal.BytesBlob","readF32LE",0xd46ebb3b,"kha.internal.BytesBlob.readF32LE","kha/internal/BytesBlob.hx",131,0x0af0ac5d)
HX_LOCAL_STACK_FRAME(_hx_pos_bc4afe38f0b9accd_135_readF32BE,"kha.internal.BytesBlob","readF32BE",0xd46eb285,"kha.internal.BytesBlob.readF32BE","kha/internal/BytesBlob.hx",135,0x0af0ac5d)
HX_LOCAL_STACK_FRAME(_hx_pos_bc4afe38f0b9accd_156_toString,"kha.internal.BytesBlob","toString",0xc940a9d9,"kha.internal.BytesBlob.toString","kha/internal/BytesBlob.hx",156,0x0af0ac5d)
HX_LOCAL_STACK_FRAME(_hx_pos_bc4afe38f0b9accd_173_readUtf8Char,"kha.internal.BytesBlob","readUtf8Char",0x14a78dca,"kha.internal.BytesBlob.readUtf8Char","kha/internal/BytesBlob.hx",173,0x0af0ac5d)
HX_LOCAL_STACK_FRAME(_hx_pos_bc4afe38f0b9accd_199_readUtf8Block,"kha.internal.BytesBlob","readUtf8Block",0x6d3d5bd9,"kha.internal.BytesBlob.readUtf8Block","kha/internal/BytesBlob.hx",199,0x0af0ac5d)
HX_LOCAL_STACK_FRAME(_hx_pos_bc4afe38f0b9accd_217_readUtf8String,"kha.internal.BytesBlob","readUtf8String",0x91b8fcc5,"kha.internal.BytesBlob.readUtf8String","kha/internal/BytesBlob.hx",217,0x0af0ac5d)
HX_LOCAL_STACK_FRAME(_hx_pos_bc4afe38f0b9accd_230_toBytes,"kha.internal.BytesBlob","toBytes",0xb2f08063,"kha.internal.BytesBlob.toBytes","kha/internal/BytesBlob.hx",230,0x0af0ac5d)
HX_LOCAL_STACK_FRAME(_hx_pos_bc4afe38f0b9accd_234_unload,"kha.internal.BytesBlob","unload",0x1313e4ec,"kha.internal.BytesBlob.unload","kha/internal/BytesBlob.hx",234,0x0af0ac5d)
HX_LOCAL_STACK_FRAME(_hx_pos_bc4afe38f0b9accd_17_fromBytes,"kha.internal.BytesBlob","fromBytes",0x98ed20d4,"kha.internal.BytesBlob.fromBytes","kha/internal/BytesBlob.hx",17,0x0af0ac5d)
HX_LOCAL_STACK_FRAME(_hx_pos_bc4afe38f0b9accd_21_alloc,"kha.internal.BytesBlob","alloc",0x7999fd28,"kha.internal.BytesBlob.alloc","kha/internal/BytesBlob.hx",21,0x0af0ac5d)
HX_LOCAL_STACK_FRAME(_hx_pos_bc4afe38f0b9accd_138_readF32,"kha.internal.BytesBlob","readF32",0x2b9b6442,"kha.internal.BytesBlob.readF32","kha/internal/BytesBlob.hx",138,0x0af0ac5d)
HX_LOCAL_STACK_FRAME(_hx_pos_bc4afe38f0b9accd_159_bit,"kha.internal.BytesBlob","bit",0x44c16ec0,"kha.internal.BytesBlob.bit","kha/internal/BytesBlob.hx",159,0x0af0ac5d)
HX_LOCAL_STACK_FRAME(_hx_pos_bc4afe38f0b9accd_211_toText,"kha.internal.BytesBlob","toText",0x303a7bb5,"kha.internal.BytesBlob.toText","kha/internal/BytesBlob.hx",211,0x0af0ac5d)
HX_LOCAL_STACK_FRAME(_hx_pos_bc4afe38f0b9accd_8_boot,"kha.internal.BytesBlob","boot",0xe48402df,"kha.internal.BytesBlob.boot","kha/internal/BytesBlob.hx",8,0x0af0ac5d)
namespace kha{
namespace internal{

void BytesBlob_obj::__construct( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_bc4afe38f0b9accd_13_new)
HXDLIN(  13)		this->bytes = bytes;
            	}

Dynamic BytesBlob_obj::__CreateEmpty() { return new BytesBlob_obj; }

void *BytesBlob_obj::_hx_vtable = 0;

Dynamic BytesBlob_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BytesBlob_obj > _hx_result = new BytesBlob_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool BytesBlob_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4186df07;
}

static ::kha::Resource_obj _hx_kha_internal_BytesBlob__hx_kha_Resource= {
	( void (hx::Object::*)())&::kha::internal::BytesBlob_obj::unload,
};

void *BytesBlob_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xf962acd2: return &_hx_kha_internal_BytesBlob__hx_kha_Resource;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::kha::internal::BytesBlob BytesBlob_obj::sub(int start,int length){
            	HX_GC_STACKFRAME(&_hx_pos_bc4afe38f0b9accd_25_sub)
HXDLIN(  25)		return  ::kha::internal::BytesBlob_obj::__alloc( HX_CTX ,this->bytes->sub(start,length));
            	}


HX_DEFINE_DYNAMIC_FUNC2(BytesBlob_obj,sub,return )

int BytesBlob_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_bc4afe38f0b9accd_31_get_length)
HXDLIN(  31)		return this->bytes->length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BytesBlob_obj,get_length,return )

void BytesBlob_obj::writeU8(int position,int value){
            	HX_STACKFRAME(&_hx_pos_bc4afe38f0b9accd_35_writeU8)
HXDLIN(  35)		this->bytes->b[position] = value;
            	}


HX_DEFINE_DYNAMIC_FUNC2(BytesBlob_obj,writeU8,(void))

int BytesBlob_obj::readU8(int position){
            	HX_STACKFRAME(&_hx_pos_bc4afe38f0b9accd_38_readU8)
HXLINE(  39)		int byte = this->bytes->b->__get(position);
HXLINE(  40)		position = (position + (int)1);
HXLINE(  41)		return byte;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BytesBlob_obj,readU8,return )

int BytesBlob_obj::readS8(int position){
            	HX_STACKFRAME(&_hx_pos_bc4afe38f0b9accd_44_readS8)
HXLINE(  45)		int byte = this->bytes->b->__get(position);
HXLINE(  46)		position = (position + (int)1);
HXLINE(  47)		int sign;
HXDLIN(  47)		if ((((int)byte & (int)(int)128) == (int)0)) {
HXLINE(  47)			sign = (int)1;
            		}
            		else {
HXLINE(  47)			sign = (int)-1;
            		}
HXLINE(  48)		byte = ((int)byte & (int)(int)127);
HXLINE(  49)		return (sign * byte);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BytesBlob_obj,readS8,return )

int BytesBlob_obj::readU16BE(int position){
            	HX_STACKFRAME(&_hx_pos_bc4afe38f0b9accd_52_readU16BE)
HXLINE(  53)		int first = this->bytes->b->__get(position);
HXLINE(  54)		::Array< unsigned char > _this = this->bytes->b;
HXDLIN(  54)		int second = _this->__get((position + (int)1));
HXLINE(  55)		position = (position + (int)2);
HXLINE(  56)		return ((first * (int)256) + second);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BytesBlob_obj,readU16BE,return )

int BytesBlob_obj::readU16LE(int position){
            	HX_STACKFRAME(&_hx_pos_bc4afe38f0b9accd_59_readU16LE)
HXLINE(  60)		int first = this->bytes->b->__get(position);
HXLINE(  61)		::Array< unsigned char > _this = this->bytes->b;
HXDLIN(  61)		int second = _this->__get((position + (int)1));
HXLINE(  62)		position = (position + (int)2);
HXLINE(  63)		return ((second * (int)256) + first);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BytesBlob_obj,readU16LE,return )

int BytesBlob_obj::readU32LE(int position){
            	HX_STACKFRAME(&_hx_pos_bc4afe38f0b9accd_66_readU32LE)
HXLINE(  67)		int fourth = this->bytes->b->__get(position);
HXLINE(  68)		::Array< unsigned char > _this = this->bytes->b;
HXDLIN(  68)		int third = _this->__get((position + (int)1));
HXLINE(  69)		::Array< unsigned char > _this1 = this->bytes->b;
HXDLIN(  69)		int second = _this1->__get((position + (int)2));
HXLINE(  70)		::Array< unsigned char > _this2 = this->bytes->b;
HXDLIN(  70)		int first = _this2->__get((position + (int)3));
HXLINE(  71)		position = (position + (int)4);
HXLINE(  73)		return (((fourth + (third * (int)256)) + ((second * (int)256) * (int)256)) + (((first * (int)256) * (int)256) * (int)256));
            	}


HX_DEFINE_DYNAMIC_FUNC1(BytesBlob_obj,readU32LE,return )

int BytesBlob_obj::readU32BE(int position){
            	HX_STACKFRAME(&_hx_pos_bc4afe38f0b9accd_76_readU32BE)
HXLINE(  77)		int fourth = this->bytes->b->__get(position);
HXLINE(  78)		::Array< unsigned char > _this = this->bytes->b;
HXDLIN(  78)		int third = _this->__get((position + (int)1));
HXLINE(  79)		::Array< unsigned char > _this1 = this->bytes->b;
HXDLIN(  79)		int second = _this1->__get((position + (int)2));
HXLINE(  80)		::Array< unsigned char > _this2 = this->bytes->b;
HXDLIN(  80)		int first = _this2->__get((position + (int)3));
HXLINE(  81)		position = (position + (int)4);
HXLINE(  83)		return (((first + (second * (int)256)) + ((third * (int)256) * (int)256)) + (((fourth * (int)256) * (int)256) * (int)256));
            	}


HX_DEFINE_DYNAMIC_FUNC1(BytesBlob_obj,readU32BE,return )

int BytesBlob_obj::readS16BE(int position){
            	HX_STACKFRAME(&_hx_pos_bc4afe38f0b9accd_86_readS16BE)
HXLINE(  87)		int first = this->bytes->b->__get(position);
HXLINE(  88)		::Array< unsigned char > _this = this->bytes->b;
HXDLIN(  88)		int second = _this->__get((position + (int)1));
HXLINE(  89)		position = (position + (int)2);
HXLINE(  90)		int sign;
HXDLIN(  90)		if ((((int)first & (int)(int)128) == (int)0)) {
HXLINE(  90)			sign = (int)1;
            		}
            		else {
HXLINE(  90)			sign = (int)-1;
            		}
HXLINE(  91)		first = ((int)first & (int)(int)127);
HXLINE(  92)		if ((sign == (int)-1)) {
HXLINE(  92)			return (((int)-32767 + (first * (int)256)) + second);
            		}
            		else {
HXLINE(  93)			return ((first * (int)256) + second);
            		}
HXLINE(  92)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BytesBlob_obj,readS16BE,return )

int BytesBlob_obj::readS16LE(int position){
            	HX_STACKFRAME(&_hx_pos_bc4afe38f0b9accd_96_readS16LE)
HXLINE(  97)		int first = this->bytes->b->__get(position);
HXLINE(  98)		::Array< unsigned char > _this = this->bytes->b;
HXDLIN(  98)		int second = _this->__get((position + (int)1));
HXLINE(  99)		int sign;
HXDLIN(  99)		if ((((int)second & (int)(int)128) == (int)0)) {
HXLINE(  99)			sign = (int)1;
            		}
            		else {
HXLINE(  99)			sign = (int)-1;
            		}
HXLINE( 100)		second = ((int)second & (int)(int)127);
HXLINE( 101)		position = (position + (int)2);
HXLINE( 102)		if ((sign == (int)-1)) {
HXLINE( 102)			return (((int)-32767 + (second * (int)256)) + first);
            		}
            		else {
HXLINE( 103)			return ((second * (int)256) + first);
            		}
HXLINE( 102)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BytesBlob_obj,readS16LE,return )

int BytesBlob_obj::readS32LE(int position){
            	HX_STACKFRAME(&_hx_pos_bc4afe38f0b9accd_106_readS32LE)
HXLINE( 107)		int fourth = this->bytes->b->__get(position);
HXLINE( 108)		::Array< unsigned char > _this = this->bytes->b;
HXDLIN( 108)		int third = _this->__get((position + (int)1));
HXLINE( 109)		::Array< unsigned char > _this1 = this->bytes->b;
HXDLIN( 109)		int second = _this1->__get((position + (int)2));
HXLINE( 110)		::Array< unsigned char > _this2 = this->bytes->b;
HXDLIN( 110)		int first = _this2->__get((position + (int)3));
HXLINE( 111)		int sign;
HXDLIN( 111)		if ((((int)first & (int)(int)128) == (int)0)) {
HXLINE( 111)			sign = (int)1;
            		}
            		else {
HXLINE( 111)			sign = (int)-1;
            		}
HXLINE( 112)		first = ((int)first & (int)(int)127);
HXLINE( 113)		position = (position + (int)4);
HXLINE( 114)		if ((sign == (int)-1)) {
HXLINE( 114)			return (((((int)-2147483647 + fourth) + (third * (int)256)) + ((second * (int)256) * (int)256)) + (((first * (int)256) * (int)256) * (int)256));
            		}
            		else {
HXLINE( 115)			return (((fourth + (third * (int)256)) + ((second * (int)256) * (int)256)) + (((first * (int)256) * (int)256) * (int)256));
            		}
HXLINE( 114)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BytesBlob_obj,readS32LE,return )

int BytesBlob_obj::readS32BE(int position){
            	HX_STACKFRAME(&_hx_pos_bc4afe38f0b9accd_118_readS32BE)
HXLINE( 119)		int fourth = this->bytes->b->__get(position);
HXLINE( 120)		::Array< unsigned char > _this = this->bytes->b;
HXDLIN( 120)		int third = _this->__get((position + (int)1));
HXLINE( 121)		::Array< unsigned char > _this1 = this->bytes->b;
HXDLIN( 121)		int second = _this1->__get((position + (int)2));
HXLINE( 122)		::Array< unsigned char > _this2 = this->bytes->b;
HXDLIN( 122)		int first = _this2->__get((position + (int)3));
HXLINE( 123)		int sign;
HXDLIN( 123)		if ((((int)fourth & (int)(int)128) == (int)0)) {
HXLINE( 123)			sign = (int)1;
            		}
            		else {
HXLINE( 123)			sign = (int)-1;
            		}
HXLINE( 124)		fourth = ((int)fourth & (int)(int)127);
HXLINE( 125)		position = (position + (int)4);
HXLINE( 126)		if ((sign == (int)-1)) {
HXLINE( 126)			return (((((int)-2147483647 + first) + (second * (int)256)) + ((third * (int)256) * (int)256)) + (((fourth * (int)256) * (int)256) * (int)256));
            		}
HXLINE( 127)		return (((first + (second * (int)256)) + ((third * (int)256) * (int)256)) + (((fourth * (int)256) * (int)256) * (int)256));
            	}


HX_DEFINE_DYNAMIC_FUNC1(BytesBlob_obj,readS32BE,return )

Float BytesBlob_obj::readF32LE(int position){
            	HX_STACKFRAME(&_hx_pos_bc4afe38f0b9accd_131_readF32LE)
HXDLIN( 131)		return ::kha::internal::BytesBlob_obj::readF32(this->readS32LE(position));
            	}


HX_DEFINE_DYNAMIC_FUNC1(BytesBlob_obj,readF32LE,return )

Float BytesBlob_obj::readF32BE(int position){
            	HX_STACKFRAME(&_hx_pos_bc4afe38f0b9accd_135_readF32BE)
HXDLIN( 135)		return ::kha::internal::BytesBlob_obj::readF32(this->readS32BE(position));
            	}


HX_DEFINE_DYNAMIC_FUNC1(BytesBlob_obj,readF32BE,return )

::String BytesBlob_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_bc4afe38f0b9accd_156_toString)
HXDLIN( 156)		return this->bytes->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BytesBlob_obj,toString,return )

int BytesBlob_obj::readUtf8Char( ::Dynamic position){
            	HX_STACKFRAME(&_hx_pos_bc4afe38f0b9accd_173_readUtf8Char)
HXLINE( 174)		int position1 = ( (int)(position->__Field(HX_("value",71,7f,b8,31),hx::paccDynamic)) );
HXDLIN( 174)		if ((position1 >= this->get_length())) {
HXLINE( 174)			return (int)-1;
            		}
HXLINE( 175)		int c = this->readU8(( (int)(position->__Field(HX_("value",71,7f,b8,31),hx::paccDynamic)) ));
HXLINE( 176)		++hx::FieldRef((position).mPtr,HX_("value",71,7f,b8,31));
HXLINE( 177)		int value = (int)0;
HXLINE( 178)		if (!(::kha::internal::BytesBlob_obj::bit(c,(int)7))) {
HXLINE( 179)			value = c;
            		}
            		else {
HXLINE( 181)			bool _hx_tmp;
HXDLIN( 181)			bool _hx_tmp1;
HXDLIN( 181)			if (::kha::internal::BytesBlob_obj::bit(c,(int)7)) {
HXLINE( 181)				_hx_tmp1 = ::kha::internal::BytesBlob_obj::bit(c,(int)6);
            			}
            			else {
HXLINE( 181)				_hx_tmp1 = false;
            			}
HXDLIN( 181)			if (_hx_tmp1) {
HXLINE( 181)				_hx_tmp = !(::kha::internal::BytesBlob_obj::bit(c,(int)5));
            			}
            			else {
HXLINE( 181)				_hx_tmp = false;
            			}
HXDLIN( 181)			if (_hx_tmp) {
HXLINE( 182)				int a = ((int)c & (int)(int)31);
HXLINE( 183)				int c2 = this->readU8(( (int)(position->__Field(HX_("value",71,7f,b8,31),hx::paccDynamic)) ));
HXLINE( 184)				++hx::FieldRef((position).mPtr,HX_("value",71,7f,b8,31));
HXLINE( 185)				int b = ((int)c2 & (int)(int)63);
HXLINE( 186)				value = ((int)((int)a << (int)(int)6) | (int)b);
            			}
            			else {
HXLINE( 188)				bool _hx_tmp2;
HXDLIN( 188)				bool _hx_tmp3;
HXDLIN( 188)				bool _hx_tmp4;
HXDLIN( 188)				if (::kha::internal::BytesBlob_obj::bit(c,(int)7)) {
HXLINE( 188)					_hx_tmp4 = ::kha::internal::BytesBlob_obj::bit(c,(int)6);
            				}
            				else {
HXLINE( 188)					_hx_tmp4 = false;
            				}
HXDLIN( 188)				if (_hx_tmp4) {
HXLINE( 188)					_hx_tmp3 = ::kha::internal::BytesBlob_obj::bit(c,(int)5);
            				}
            				else {
HXLINE( 188)					_hx_tmp3 = false;
            				}
HXDLIN( 188)				if (_hx_tmp3) {
HXLINE( 188)					_hx_tmp2 = !(::kha::internal::BytesBlob_obj::bit(c,(int)4));
            				}
            				else {
HXLINE( 188)					_hx_tmp2 = false;
            				}
HXDLIN( 188)				if (_hx_tmp2) {
HXLINE( 190)					 ::Dynamic position2 = position;
HXDLIN( 190)					position2->__SetField(HX_("value",71,7f,b8,31),(( (int)(position2->__Field(HX_("value",71,7f,b8,31),hx::paccDynamic)) ) + (int)2),hx::paccDynamic);
            				}
            				else {
HXLINE( 192)					bool _hx_tmp5;
HXDLIN( 192)					bool _hx_tmp6;
HXDLIN( 192)					bool _hx_tmp7;
HXDLIN( 192)					bool _hx_tmp8;
HXDLIN( 192)					if (::kha::internal::BytesBlob_obj::bit(c,(int)7)) {
HXLINE( 192)						_hx_tmp8 = ::kha::internal::BytesBlob_obj::bit(c,(int)6);
            					}
            					else {
HXLINE( 192)						_hx_tmp8 = false;
            					}
HXDLIN( 192)					if (_hx_tmp8) {
HXLINE( 192)						_hx_tmp7 = ::kha::internal::BytesBlob_obj::bit(c,(int)5);
            					}
            					else {
HXLINE( 192)						_hx_tmp7 = false;
            					}
HXDLIN( 192)					if (_hx_tmp7) {
HXLINE( 192)						_hx_tmp6 = ::kha::internal::BytesBlob_obj::bit(c,(int)4);
            					}
            					else {
HXLINE( 192)						_hx_tmp6 = false;
            					}
HXDLIN( 192)					if (_hx_tmp6) {
HXLINE( 192)						_hx_tmp5 = !(::kha::internal::BytesBlob_obj::bit(c,(int)3));
            					}
            					else {
HXLINE( 192)						_hx_tmp5 = false;
            					}
HXDLIN( 192)					if (_hx_tmp5) {
HXLINE( 194)						 ::Dynamic position3 = position;
HXDLIN( 194)						position3->__SetField(HX_("value",71,7f,b8,31),(( (int)(position3->__Field(HX_("value",71,7f,b8,31),hx::paccDynamic)) ) + (int)3),hx::paccDynamic);
            					}
            				}
            			}
            		}
HXLINE( 196)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BytesBlob_obj,readUtf8Char,return )

::String BytesBlob_obj::readUtf8Block(::Array< int > buffer, ::Dynamic position){
            	HX_STACKFRAME(&_hx_pos_bc4afe38f0b9accd_199_readUtf8Block)
HXLINE( 200)		int bufferindex = (int)0;
HXLINE( 201)		int position1 = ( (int)(position->__Field(HX_("value",71,7f,b8,31),hx::paccDynamic)) );
HXDLIN( 201)		if ((position1 >= this->get_length())) {
HXLINE( 201)			return HX_("",00,00,00,00);
            		}
HXLINE( 202)		while((bufferindex < (int)2000)){
HXLINE( 203)			int c = this->readUtf8Char(position);
HXLINE( 204)			if ((c < (int)0)) {
HXLINE( 204)				goto _hx_goto_18;
            			}
HXLINE( 205)			buffer->__unsafe_set(bufferindex,c);
HXLINE( 206)			bufferindex = (bufferindex + (int)1);
            		}
            		_hx_goto_18:;
HXLINE( 208)		return ::kha::internal::BytesBlob_obj::toText(buffer,bufferindex);
            	}


HX_DEFINE_DYNAMIC_FUNC2(BytesBlob_obj,readUtf8Block,return )

::String BytesBlob_obj::readUtf8String(){
            	HX_STACKFRAME(&_hx_pos_bc4afe38f0b9accd_217_readUtf8String)
HXLINE( 218)		::Array< int > this1 = ::Array_obj< int >::__new((int)2000);
HXDLIN( 218)		::Array< int > buffer = this1;
HXLINE( 219)		::String text = HX_("",00,00,00,00);
HXLINE( 220)		int start = (int)0;
HXLINE( 221)		bool _hx_tmp;
HXDLIN( 221)		bool _hx_tmp1;
HXDLIN( 221)		bool _hx_tmp2;
HXDLIN( 221)		if ((this->get_length() >= (int)3)) {
HXLINE( 221)			_hx_tmp2 = (this->bytes->b->__get((int)0) == (int)239);
            		}
            		else {
HXLINE( 221)			_hx_tmp2 = false;
            		}
HXDLIN( 221)		if (_hx_tmp2) {
HXLINE( 221)			_hx_tmp1 = (this->bytes->b->__get((int)1) == (int)187);
            		}
            		else {
HXLINE( 221)			_hx_tmp1 = false;
            		}
HXDLIN( 221)		if (_hx_tmp1) {
HXLINE( 221)			_hx_tmp = (this->bytes->b->__get((int)2) == (int)191);
            		}
            		else {
HXLINE( 221)			_hx_tmp = false;
            		}
HXDLIN( 221)		if (_hx_tmp) {
HXLINE( 222)			start = (int)3;
            		}
HXLINE( 224)		 ::Dynamic position =  ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("value",71,7f,b8,31),start));
HXLINE( 225)		while(true){
HXLINE( 225)			int position1 = ( (int)(position->__Field(HX_("value",71,7f,b8,31),hx::paccDynamic)) );
HXDLIN( 225)			if (!((position1 < this->get_length()))) {
HXLINE( 225)				goto _hx_goto_20;
            			}
HXDLIN( 225)			text = (text + this->readUtf8Block(buffer,position));
            		}
            		_hx_goto_20:;
HXLINE( 226)		return text;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BytesBlob_obj,readUtf8String,return )

 ::haxe::io::Bytes BytesBlob_obj::toBytes(){
            	HX_STACKFRAME(&_hx_pos_bc4afe38f0b9accd_230_toBytes)
HXDLIN( 230)		return this->bytes;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BytesBlob_obj,toBytes,return )

void BytesBlob_obj::unload(){
            	HX_STACKFRAME(&_hx_pos_bc4afe38f0b9accd_234_unload)
HXDLIN( 234)		this->bytes = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BytesBlob_obj,unload,(void))

int BytesBlob_obj::bufferSize;

 ::kha::internal::BytesBlob BytesBlob_obj::fromBytes( ::haxe::io::Bytes bytes){
            	HX_GC_STACKFRAME(&_hx_pos_bc4afe38f0b9accd_17_fromBytes)
HXDLIN(  17)		return  ::kha::internal::BytesBlob_obj::__alloc( HX_CTX ,bytes);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytesBlob_obj,fromBytes,return )

 ::kha::internal::BytesBlob BytesBlob_obj::alloc(int size){
            	HX_GC_STACKFRAME(&_hx_pos_bc4afe38f0b9accd_21_alloc)
HXDLIN(  21)		return  ::kha::internal::BytesBlob_obj::__alloc( HX_CTX ,::haxe::io::Bytes_obj::alloc(size));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytesBlob_obj,alloc,return )

Float BytesBlob_obj::readF32(int i){
            	HX_STACKFRAME(&_hx_pos_bc4afe38f0b9accd_138_readF32)
HXLINE( 139)		Float sign;
HXDLIN( 139)		if ((((int)i & (int)(int)-2147483648) == (int)0)) {
HXLINE( 139)			sign = (int)1;
            		}
            		else {
HXLINE( 139)			sign = (int)-1;
            		}
HXLINE( 140)		int exp = ((int)((int)i >> (int)(int)23) & (int)(int)255);
HXLINE( 141)		int man = ((int)i & (int)(int)8388607);
HXLINE( 142)		switch((int)(exp)){
            			case (int)0: {
HXLINE( 145)				return ((Float)0.0);
            			}
            			break;
            			case (int)255: {
HXLINE( 147)				if ((man != (int)0)) {
HXLINE( 147)					return ::Math_obj::NaN;
            				}
            				else {
HXLINE( 148)					if ((sign > (int)0)) {
HXLINE( 148)						return ::Math_obj::POSITIVE_INFINITY;
            					}
            					else {
HXLINE( 149)						return ::Math_obj::NEGATIVE_INFINITY;
            					}
            				}
            			}
            			break;
            			default:{
HXLINE( 151)				return ((sign * ((Float)(man + (int)8388608) / (Float)((Float)8388608.0))) * ::Math_obj::pow((int)2,(exp - (int)127)));
            			}
            		}
HXLINE( 142)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BytesBlob_obj,readF32,return )

bool BytesBlob_obj::bit(int value,int position){
            	HX_STACKFRAME(&_hx_pos_bc4afe38f0b9accd_159_bit)
HXLINE( 160)		bool b = (((int)hx::UShr(value,position) & (int)(int)1) == (int)1);
HXLINE( 161)		if (b) {
HXLINE( 162)			int a = (int)3;
HXLINE( 163)			a = (a + (int)1);
HXLINE( 164)			return true;
            		}
            		else {
HXLINE( 167)			int c = (int)4;
HXLINE( 168)			c = (c - (int)1);
HXLINE( 169)			return false;
            		}
HXLINE( 161)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BytesBlob_obj,bit,return )

::String BytesBlob_obj::toText(::Array< int > chars,int length){
            	HX_STACKFRAME(&_hx_pos_bc4afe38f0b9accd_211_toText)
HXLINE( 212)		::String value = HX_("",00,00,00,00);
HXLINE( 213)		{
HXLINE( 213)			int _g1 = (int)0;
HXDLIN( 213)			int _g = length;
HXDLIN( 213)			while((_g1 < _g)){
HXLINE( 213)				_g1 = (_g1 + (int)1);
HXDLIN( 213)				int i = (_g1 - (int)1);
HXDLIN( 213)				value = (value + ::String::fromCharCode(( (int)(_hx_array_unsafe_get(chars,i)) )));
            			}
            		}
HXLINE( 214)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BytesBlob_obj,toText,return )


hx::ObjectPtr< BytesBlob_obj > BytesBlob_obj::__new( ::haxe::io::Bytes bytes) {
	hx::ObjectPtr< BytesBlob_obj > __this = new BytesBlob_obj();
	__this->__construct(bytes);
	return __this;
}

hx::ObjectPtr< BytesBlob_obj > BytesBlob_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::io::Bytes bytes) {
	BytesBlob_obj *__this = (BytesBlob_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(BytesBlob_obj), true, "kha.internal.BytesBlob"));
	*(void **)__this = BytesBlob_obj::_hx_vtable;
	__this->__construct(bytes);
	return __this;
}

BytesBlob_obj::BytesBlob_obj()
{
}

void BytesBlob_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BytesBlob);
	HX_MARK_MEMBER_NAME(bytes,"bytes");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void BytesBlob_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bytes,"bytes");
	HX_VISIT_MEMBER_NAME(length,"length");
}

hx::Val BytesBlob_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"sub") ) { return hx::Val( sub_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { return hx::Val( bytes ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return hx::Val( inCallProp == hx::paccAlways ? get_length() : length ); }
		if (HX_FIELD_EQ(inName,"readU8") ) { return hx::Val( readU8_dyn() ); }
		if (HX_FIELD_EQ(inName,"readS8") ) { return hx::Val( readS8_dyn() ); }
		if (HX_FIELD_EQ(inName,"unload") ) { return hx::Val( unload_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"writeU8") ) { return hx::Val( writeU8_dyn() ); }
		if (HX_FIELD_EQ(inName,"toBytes") ) { return hx::Val( toBytes_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readU16BE") ) { return hx::Val( readU16BE_dyn() ); }
		if (HX_FIELD_EQ(inName,"readU16LE") ) { return hx::Val( readU16LE_dyn() ); }
		if (HX_FIELD_EQ(inName,"readU32LE") ) { return hx::Val( readU32LE_dyn() ); }
		if (HX_FIELD_EQ(inName,"readU32BE") ) { return hx::Val( readU32BE_dyn() ); }
		if (HX_FIELD_EQ(inName,"readS16BE") ) { return hx::Val( readS16BE_dyn() ); }
		if (HX_FIELD_EQ(inName,"readS16LE") ) { return hx::Val( readS16LE_dyn() ); }
		if (HX_FIELD_EQ(inName,"readS32LE") ) { return hx::Val( readS32LE_dyn() ); }
		if (HX_FIELD_EQ(inName,"readS32BE") ) { return hx::Val( readS32BE_dyn() ); }
		if (HX_FIELD_EQ(inName,"readF32LE") ) { return hx::Val( readF32LE_dyn() ); }
		if (HX_FIELD_EQ(inName,"readF32BE") ) { return hx::Val( readF32BE_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return hx::Val( get_length_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"readUtf8Char") ) { return hx::Val( readUtf8Char_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"readUtf8Block") ) { return hx::Val( readUtf8Block_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"readUtf8String") ) { return hx::Val( readUtf8String_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool BytesBlob_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bit") ) { outValue = bit_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { outValue = alloc_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"toText") ) { outValue = toText_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"readF32") ) { outValue = readF32_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true; }
	}
	return false;
}

hx::Val BytesBlob_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { bytes=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BytesBlob_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo BytesBlob_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::io::Bytes*/ ,(int)offsetof(BytesBlob_obj,bytes),HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd")},
	{hx::fsInt,(int)offsetof(BytesBlob_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo BytesBlob_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &BytesBlob_obj::bufferSize,HX_HCSTRING("bufferSize","\xe1","\x09","\x64","\x9d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String BytesBlob_obj_sMemberFields[] = {
	HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"),
	HX_HCSTRING("sub","\x80","\xa9","\x57","\x00"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("writeU8","\xe2","\xec","\x35","\xab"),
	HX_HCSTRING("readU8","\x19","\x97","\x91","\xfc"),
	HX_HCSTRING("readS8","\x5b","\x95","\x91","\xfc"),
	HX_HCSTRING("readU16BE","\xa7","\xd3","\x55","\x4f"),
	HX_HCSTRING("readU16LE","\x5d","\xdc","\x55","\x4f"),
	HX_HCSTRING("readU32LE","\x97","\x40","\xa5","\x50"),
	HX_HCSTRING("readU32BE","\xe1","\x37","\xa5","\x50"),
	HX_HCSTRING("readS16BE","\xa5","\xaa","\x88","\x28"),
	HX_HCSTRING("readS16LE","\x5b","\xb3","\x88","\x28"),
	HX_HCSTRING("readS32LE","\x95","\x17","\xd8","\x29"),
	HX_HCSTRING("readS32BE","\xdf","\x0e","\xd8","\x29"),
	HX_HCSTRING("readF32LE","\x08","\x8d","\xa2","\xad"),
	HX_HCSTRING("readF32BE","\x52","\x84","\xa2","\xad"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("readUtf8Char","\x1d","\x1a","\x6d","\x6a"),
	HX_HCSTRING("readUtf8Block","\x26","\x98","\x52","\x24"),
	HX_HCSTRING("readUtf8String","\xd8","\x83","\x38","\x0d"),
	HX_HCSTRING("toBytes","\xf0","\x54","\x1c","\x8a"),
	HX_HCSTRING("unload","\xff","\xa0","\x8c","\x65"),
	::String(null()) };

static void BytesBlob_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BytesBlob_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BytesBlob_obj::bufferSize,"bufferSize");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BytesBlob_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BytesBlob_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BytesBlob_obj::bufferSize,"bufferSize");
};

#endif

hx::Class BytesBlob_obj::__mClass;

static ::String BytesBlob_obj_sStaticFields[] = {
	HX_HCSTRING("bufferSize","\xe1","\x09","\x64","\x9d"),
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("alloc","\x75","\xa4","\x93","\x21"),
	HX_HCSTRING("readF32","\xcf","\x38","\xc7","\x02"),
	HX_HCSTRING("bit","\xcd","\xb8","\x4a","\x00"),
	HX_HCSTRING("toText","\xc8","\x37","\xb3","\x82"),
	::String(null())
};

void BytesBlob_obj::__register()
{
	hx::Object *dummy = new BytesBlob_obj;
	BytesBlob_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.internal.BytesBlob","\xe1","\x60","\x36","\xce");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BytesBlob_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = BytesBlob_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(BytesBlob_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(BytesBlob_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BytesBlob_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BytesBlob_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BytesBlob_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BytesBlob_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void BytesBlob_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_bc4afe38f0b9accd_8_boot)
HXDLIN(   8)		bufferSize = (int)2000;
            	}
}

} // end namespace kha
} // end namespace internal

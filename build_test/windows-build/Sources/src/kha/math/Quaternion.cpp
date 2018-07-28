// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_kha_math_Matrix4
#include <kha/math/Matrix4.h>
#endif
#ifndef INCLUDED_kha_math_Quaternion
#include <kha/math/Quaternion.h>
#endif
#ifndef INCLUDED_kha_math_Vector3
#include <kha/math/Vector3.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_002fcb5d014f4211_10_new,"kha.math.Quaternion","new",0xc02c67cc,"kha.math.Quaternion.new","kha/math/Quaternion.hx",10,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_29_slerp,"kha.math.Quaternion","slerp",0x578312d6,"kha.math.Quaternion.slerp","kha/math/Quaternion.hx",29,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_56_rotated,"kha.math.Quaternion","rotated",0x2dd40715,"kha.math.Quaternion.rotated","kha/math/Quaternion.hx",56,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_67_scaled,"kha.math.Quaternion","scaled",0x09e8beae,"kha.math.Quaternion.scaled","kha/math/Quaternion.hx",67,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_70_scale,"kha.math.Quaternion","scale",0x518d18f6,"kha.math.Quaternion.scale","kha/math/Quaternion.hx",70,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_77_matrix,"kha.math.Quaternion","matrix",0x898b0a55,"kha.math.Quaternion.matrix","kha/math/Quaternion.hx",77,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_102_get,"kha.math.Quaternion","get",0xc0271802,"kha.math.Quaternion.get","kha/math/Quaternion.hx",102,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_106_set,"kha.math.Quaternion","set",0xc030330e,"kha.math.Quaternion.set","kha/math/Quaternion.hx",106,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_116_get_x,"kha.math.Quaternion","get_x",0x6a1eefbb,"kha.math.Quaternion.get_x","kha/math/Quaternion.hx",116,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_120_set_x,"kha.math.Quaternion","set_x",0x52ede5c7,"kha.math.Quaternion.set_x","kha/math/Quaternion.hx",120,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_124_get_y,"kha.math.Quaternion","get_y",0x6a1eefbc,"kha.math.Quaternion.get_y","kha/math/Quaternion.hx",124,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_128_set_y,"kha.math.Quaternion","set_y",0x52ede5c8,"kha.math.Quaternion.set_y","kha/math/Quaternion.hx",128,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_132_get_z,"kha.math.Quaternion","get_z",0x6a1eefbd,"kha.math.Quaternion.get_z","kha/math/Quaternion.hx",132,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_136_set_z,"kha.math.Quaternion","set_z",0x52ede5c9,"kha.math.Quaternion.set_z","kha/math/Quaternion.hx",136,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_140_get_w,"kha.math.Quaternion","get_w",0x6a1eefba,"kha.math.Quaternion.get_w","kha/math/Quaternion.hx",140,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_144_set_w,"kha.math.Quaternion","set_w",0x52ede5c6,"kha.math.Quaternion.set_w","kha/math/Quaternion.hx",144,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_149_get_length,"kha.math.Quaternion","get_length",0xdd4f72c3,"kha.math.Quaternion.get_length","kha/math/Quaternion.hx",149,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_152_set_length,"kha.math.Quaternion","set_length",0xe0cd1137,"kha.math.Quaternion.set_length","kha/math/Quaternion.hx",152,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_162_addVector,"kha.math.Quaternion","addVector",0x3573d630,"kha.math.Quaternion.addVector","kha/math/Quaternion.hx",162,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_176_add,"kha.math.Quaternion","add",0xc022898d,"kha.math.Quaternion.add","kha/math/Quaternion.hx",176,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_180_sub,"kha.math.Quaternion","sub",0xc03040ec,"kha.math.Quaternion.sub","kha/math/Quaternion.hx",180,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_184_mult,"kha.math.Quaternion","mult",0x66114f04,"kha.math.Quaternion.mult","kha/math/Quaternion.hx",184,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_194_normalize,"kha.math.Quaternion","normalize",0x919327f9,"kha.math.Quaternion.normalize","kha/math/Quaternion.hx",194,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_198_dot,"kha.math.Quaternion","dot",0xc024d9f5,"kha.math.Quaternion.dot","kha/math/Quaternion.hx",198,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_214_getEulerAngles,"kha.math.Quaternion","getEulerAngles",0xb1f632a7,"kha.math.Quaternion.getEulerAngles","kha/math/Quaternion.hx",214,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_19_fromAxisAngle,"kha.math.Quaternion","fromAxisAngle",0x7d600314,"kha.math.Quaternion.fromAxisAngle","kha/math/Quaternion.hx",19,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_210_boot,"kha.math.Quaternion","boot",0x5ec76b46,"kha.math.Quaternion.boot","kha/math/Quaternion.hx",210,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_211_boot,"kha.math.Quaternion","boot",0x5ec76b46,"kha.math.Quaternion.boot","kha/math/Quaternion.hx",211,0x3ed4fcc4)
HX_LOCAL_STACK_FRAME(_hx_pos_002fcb5d014f4211_212_boot,"kha.math.Quaternion","boot",0x5ec76b46,"kha.math.Quaternion.boot","kha/math/Quaternion.hx",212,0x3ed4fcc4)
namespace kha{
namespace math{

void Quaternion_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z,hx::Null< Float >  __o_w){
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
Float z = __o_z.Default(0);
Float w = __o_w.Default(1);
            	HX_STACKFRAME(&_hx_pos_002fcb5d014f4211_10_new)
HXLINE(  11)		this->values = ::Array_obj< Float >::__new();
HXLINE(  12)		this->values->push(x);
HXLINE(  13)		this->values->push(y);
HXLINE(  14)		this->values->push(z);
HXLINE(  15)		this->values->push(w);
            	}

Dynamic Quaternion_obj::__CreateEmpty() { return new Quaternion_obj; }

void *Quaternion_obj::_hx_vtable = 0;

Dynamic Quaternion_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Quaternion_obj > _hx_result = new Quaternion_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Quaternion_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x153119aa;
}

 ::kha::math::Quaternion Quaternion_obj::slerp(Float t, ::kha::math::Quaternion q){
            	HX_STACKFRAME(&_hx_pos_002fcb5d014f4211_29_slerp)
HXLINE(  30)		Float epsilon = ((Float)0.0005);
HXLINE(  32)		Float dot = this->dot(q);
HXLINE(  34)		if ((dot > ((int)1 - epsilon))) {
HXLINE(  35)			 ::kha::math::Quaternion result = q->add(this->sub(q)->scaled(t));
HXLINE(  36)			result->normalize();
HXLINE(  37)			return result;
            		}
HXLINE(  39)		if ((dot < (int)0)) {
HXLINE(  39)			dot = (int)0;
            		}
HXLINE(  40)		if ((dot > (int)1)) {
HXLINE(  40)			dot = (int)1;
            		}
HXLINE(  42)		Float theta0 = ::Math_obj::acos(dot);
HXLINE(  43)		Float theta = (theta0 * t);
HXLINE(  45)		 ::kha::math::Quaternion q2 = q->sub(this->scaled(dot));
HXLINE(  46)		q2->normalize();
HXLINE(  48)		 ::kha::math::Quaternion result1 = this->scaled(::Math_obj::cos(theta));
HXDLIN(  48)		 ::kha::math::Quaternion result2 = result1->add(q2->scaled(::Math_obj::sin(theta)));
HXLINE(  50)		result2->normalize();
HXLINE(  52)		return result2;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Quaternion_obj,slerp,return )

 ::kha::math::Quaternion Quaternion_obj::rotated( ::kha::math::Quaternion b){
            	HX_GC_STACKFRAME(&_hx_pos_002fcb5d014f4211_56_rotated)
HXLINE(  57)		 ::kha::math::Quaternion q =  ::kha::math::Quaternion_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  58)		Float _hx_tmp = this->get_w();
HXDLIN(  58)		Float _hx_tmp1 = (_hx_tmp * b->get_w());
HXDLIN(  58)		Float _hx_tmp2 = this->get_x();
HXDLIN(  58)		Float _hx_tmp3 = (_hx_tmp1 - (_hx_tmp2 * b->get_x()));
HXDLIN(  58)		Float _hx_tmp4 = this->get_y();
HXDLIN(  58)		Float _hx_tmp5 = (_hx_tmp3 - (_hx_tmp4 * b->get_y()));
HXDLIN(  58)		Float _hx_tmp6 = this->get_z();
HXDLIN(  58)		q->set_w((_hx_tmp5 - (_hx_tmp6 * b->get_z())));
HXLINE(  59)		Float _hx_tmp7 = this->get_w();
HXDLIN(  59)		Float _hx_tmp8 = (_hx_tmp7 * b->get_x());
HXDLIN(  59)		Float _hx_tmp9 = this->get_x();
HXDLIN(  59)		Float _hx_tmp10 = (_hx_tmp8 + (_hx_tmp9 * b->get_w()));
HXDLIN(  59)		Float _hx_tmp11 = this->get_y();
HXDLIN(  59)		Float _hx_tmp12 = (_hx_tmp10 + (_hx_tmp11 * b->get_z()));
HXDLIN(  59)		Float _hx_tmp13 = this->get_z();
HXDLIN(  59)		q->set_x((_hx_tmp12 - (_hx_tmp13 * b->get_y())));
HXLINE(  60)		Float _hx_tmp14 = this->get_w();
HXDLIN(  60)		Float _hx_tmp15 = (_hx_tmp14 * b->get_y());
HXDLIN(  60)		Float _hx_tmp16 = this->get_y();
HXDLIN(  60)		Float _hx_tmp17 = (_hx_tmp15 + (_hx_tmp16 * b->get_w()));
HXDLIN(  60)		Float _hx_tmp18 = this->get_z();
HXDLIN(  60)		Float _hx_tmp19 = (_hx_tmp17 + (_hx_tmp18 * b->get_x()));
HXDLIN(  60)		Float _hx_tmp20 = this->get_x();
HXDLIN(  60)		q->set_y((_hx_tmp19 - (_hx_tmp20 * b->get_z())));
HXLINE(  61)		Float _hx_tmp21 = this->get_w();
HXDLIN(  61)		Float _hx_tmp22 = (_hx_tmp21 * b->get_z());
HXDLIN(  61)		Float _hx_tmp23 = this->get_z();
HXDLIN(  61)		Float _hx_tmp24 = (_hx_tmp22 + (_hx_tmp23 * b->get_w()));
HXDLIN(  61)		Float _hx_tmp25 = this->get_x();
HXDLIN(  61)		Float _hx_tmp26 = (_hx_tmp24 + (_hx_tmp25 * b->get_y()));
HXDLIN(  61)		Float _hx_tmp27 = this->get_y();
HXDLIN(  61)		q->set_z((_hx_tmp26 - (_hx_tmp27 * b->get_x())));
HXLINE(  62)		q->normalize();
HXLINE(  63)		return q;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,rotated,return )

 ::kha::math::Quaternion Quaternion_obj::scaled(Float scale){
            	HX_GC_STACKFRAME(&_hx_pos_002fcb5d014f4211_67_scaled)
HXDLIN(  67)		Float _hx_tmp = (this->get_x() * scale);
HXDLIN(  67)		Float _hx_tmp1 = (this->get_y() * scale);
HXDLIN(  67)		Float _hx_tmp2 = (this->get_z() * scale);
HXDLIN(  67)		return  ::kha::math::Quaternion_obj::__alloc( HX_CTX ,_hx_tmp,_hx_tmp1,_hx_tmp2,(this->get_w() * scale));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,scaled,return )

void Quaternion_obj::scale(Float scale){
            	HX_STACKFRAME(&_hx_pos_002fcb5d014f4211_70_scale)
HXLINE(  71)		this->set_x((this->get_x() * scale));
HXLINE(  72)		this->set_y((this->get_y() * scale));
HXLINE(  73)		this->set_z((this->get_z() * scale));
HXLINE(  74)		this->set_w((this->get_w() * scale));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,scale,(void))

 ::kha::math::Matrix4 Quaternion_obj::matrix(){
            	HX_GC_STACKFRAME(&_hx_pos_002fcb5d014f4211_77_matrix)
HXLINE(  78)		Float s = ((Float)2.0);
HXLINE(  80)		Float xs = (this->get_x() * s);
HXLINE(  81)		Float ys = (this->get_y() * s);
HXLINE(  82)		Float zs = (this->get_z() * s);
HXLINE(  83)		Float wx = (this->get_w() * xs);
HXLINE(  84)		Float wy = (this->get_w() * ys);
HXLINE(  85)		Float wz = (this->get_w() * zs);
HXLINE(  86)		Float xx = (this->get_x() * xs);
HXLINE(  87)		Float xy = (this->get_x() * ys);
HXLINE(  88)		Float xz = (this->get_x() * zs);
HXLINE(  89)		Float yy = (this->get_y() * ys);
HXLINE(  90)		Float yz = (this->get_y() * zs);
HXLINE(  91)		Float zz = (this->get_z() * zs);
HXLINE(  93)		return  ::kha::math::Matrix4_obj::__alloc( HX_CTX ,((int)1 - (yy + zz)),(xy - wz),(xz + wy),(int)0,(xy + wz),((int)1 - (xx + zz)),(yz - wx),(int)0,(xz - wy),(yz + wx),((int)1 - (xx + yy)),(int)0,(int)0,(int)0,(int)0,(int)1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,matrix,return )

Float Quaternion_obj::get(int index){
            	HX_STACKFRAME(&_hx_pos_002fcb5d014f4211_102_get)
HXDLIN( 102)		return this->values->__get(index);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,get,return )

void Quaternion_obj::set(int index,Float value){
            	HX_STACKFRAME(&_hx_pos_002fcb5d014f4211_106_set)
HXDLIN( 106)		this->values[index] = value;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Quaternion_obj,set,(void))

Float Quaternion_obj::get_x(){
            	HX_STACKFRAME(&_hx_pos_002fcb5d014f4211_116_get_x)
HXDLIN( 116)		return this->values->__get((int)0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,get_x,return )

Float Quaternion_obj::set_x(Float value){
            	HX_STACKFRAME(&_hx_pos_002fcb5d014f4211_120_set_x)
HXDLIN( 120)		return (this->values[(int)0] = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,set_x,return )

Float Quaternion_obj::get_y(){
            	HX_STACKFRAME(&_hx_pos_002fcb5d014f4211_124_get_y)
HXDLIN( 124)		return this->values->__get((int)1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,get_y,return )

Float Quaternion_obj::set_y(Float value){
            	HX_STACKFRAME(&_hx_pos_002fcb5d014f4211_128_set_y)
HXDLIN( 128)		return (this->values[(int)1] = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,set_y,return )

Float Quaternion_obj::get_z(){
            	HX_STACKFRAME(&_hx_pos_002fcb5d014f4211_132_get_z)
HXDLIN( 132)		return this->values->__get((int)2);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,get_z,return )

Float Quaternion_obj::set_z(Float value){
            	HX_STACKFRAME(&_hx_pos_002fcb5d014f4211_136_set_z)
HXDLIN( 136)		return (this->values[(int)2] = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,set_z,return )

Float Quaternion_obj::get_w(){
            	HX_STACKFRAME(&_hx_pos_002fcb5d014f4211_140_get_w)
HXDLIN( 140)		return this->values->__get((int)3);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,get_w,return )

Float Quaternion_obj::set_w(Float value){
            	HX_STACKFRAME(&_hx_pos_002fcb5d014f4211_144_set_w)
HXDLIN( 144)		return (this->values[(int)3] = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,set_w,return )

Float Quaternion_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_002fcb5d014f4211_149_get_length)
HXDLIN( 149)		Float _hx_tmp = this->get_x();
HXDLIN( 149)		Float _hx_tmp1 = (_hx_tmp * this->get_x());
HXDLIN( 149)		Float _hx_tmp2 = this->get_y();
HXDLIN( 149)		Float _hx_tmp3 = (_hx_tmp1 + (_hx_tmp2 * this->get_y()));
HXDLIN( 149)		Float _hx_tmp4 = this->get_z();
HXDLIN( 149)		Float _hx_tmp5 = (_hx_tmp3 + (_hx_tmp4 * this->get_z()));
HXDLIN( 149)		Float _hx_tmp6 = this->get_w();
HXDLIN( 149)		return ::Math_obj::sqrt((_hx_tmp5 + (_hx_tmp6 * this->get_w())));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,get_length,return )

Float Quaternion_obj::set_length(Float length){
            	HX_STACKFRAME(&_hx_pos_002fcb5d014f4211_152_set_length)
HXLINE( 153)		if ((this->get_length() == (int)0)) {
HXLINE( 153)			return (int)0;
            		}
HXLINE( 154)		Float mul = ((Float)length / (Float)this->get_length());
HXLINE( 155)		{
HXLINE( 155)			 ::kha::math::Quaternion _g = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 155)			_g->set_x((_g->get_x() * mul));
            		}
HXLINE( 156)		{
HXLINE( 156)			 ::kha::math::Quaternion _g1 = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 156)			_g1->set_y((_g1->get_y() * mul));
            		}
HXLINE( 157)		{
HXLINE( 157)			 ::kha::math::Quaternion _g2 = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 157)			_g2->set_z((_g2->get_z() * mul));
            		}
HXLINE( 158)		return length;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,set_length,return )

 ::kha::math::Quaternion Quaternion_obj::addVector( ::kha::math::Vector3 vec){
            	HX_GC_STACKFRAME(&_hx_pos_002fcb5d014f4211_162_addVector)
HXLINE( 163)		Float result = this->get_x();
HXDLIN( 163)		Float result1 = this->get_y();
HXDLIN( 163)		Float result2 = this->get_z();
HXDLIN( 163)		 ::kha::math::Quaternion result3 =  ::kha::math::Quaternion_obj::__alloc( HX_CTX ,result,result1,result2,this->get_w());
HXLINE( 164)		 ::kha::math::Quaternion q1 =  ::kha::math::Quaternion_obj::__alloc( HX_CTX ,(int)0,vec->x,vec->y,vec->z);
HXLINE( 166)		q1 = q1->mult(result3);
HXLINE( 168)		{
HXLINE( 168)			 ::kha::math::Quaternion _g = result3;
HXDLIN( 168)			Float _hx_tmp = _g->get_x();
HXDLIN( 168)			_g->set_x((_hx_tmp + (q1->get_x() * ((Float)0.5))));
            		}
HXLINE( 169)		{
HXLINE( 169)			 ::kha::math::Quaternion _g1 = result3;
HXDLIN( 169)			Float _hx_tmp1 = _g1->get_y();
HXDLIN( 169)			_g1->set_y((_hx_tmp1 + (q1->get_y() * ((Float)0.5))));
            		}
HXLINE( 170)		{
HXLINE( 170)			 ::kha::math::Quaternion _g2 = result3;
HXDLIN( 170)			Float _hx_tmp2 = _g2->get_z();
HXDLIN( 170)			_g2->set_z((_hx_tmp2 + (q1->get_z() * ((Float)0.5))));
            		}
HXLINE( 171)		{
HXLINE( 171)			 ::kha::math::Quaternion _g3 = result3;
HXDLIN( 171)			Float _hx_tmp3 = _g3->get_w();
HXDLIN( 171)			_g3->set_w((_hx_tmp3 + (q1->get_w() * ((Float)0.5))));
            		}
HXLINE( 172)		return result3;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,addVector,return )

 ::kha::math::Quaternion Quaternion_obj::add( ::kha::math::Quaternion q){
            	HX_GC_STACKFRAME(&_hx_pos_002fcb5d014f4211_176_add)
HXDLIN( 176)		Float _hx_tmp = this->get_x();
HXDLIN( 176)		Float _hx_tmp1 = (_hx_tmp + q->get_x());
HXDLIN( 176)		Float _hx_tmp2 = this->get_y();
HXDLIN( 176)		Float _hx_tmp3 = (_hx_tmp2 + q->get_y());
HXDLIN( 176)		Float _hx_tmp4 = this->get_z();
HXDLIN( 176)		Float _hx_tmp5 = (_hx_tmp4 + q->get_z());
HXDLIN( 176)		Float _hx_tmp6 = this->get_w();
HXDLIN( 176)		return  ::kha::math::Quaternion_obj::__alloc( HX_CTX ,_hx_tmp1,_hx_tmp3,_hx_tmp5,(_hx_tmp6 + q->get_w()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,add,return )

 ::kha::math::Quaternion Quaternion_obj::sub( ::kha::math::Quaternion q){
            	HX_GC_STACKFRAME(&_hx_pos_002fcb5d014f4211_180_sub)
HXDLIN( 180)		Float _hx_tmp = this->get_x();
HXDLIN( 180)		Float _hx_tmp1 = (_hx_tmp - q->get_x());
HXDLIN( 180)		Float _hx_tmp2 = this->get_y();
HXDLIN( 180)		Float _hx_tmp3 = (_hx_tmp2 - q->get_y());
HXDLIN( 180)		Float _hx_tmp4 = this->get_z();
HXDLIN( 180)		Float _hx_tmp5 = (_hx_tmp4 - q->get_z());
HXDLIN( 180)		Float _hx_tmp6 = this->get_w();
HXDLIN( 180)		return  ::kha::math::Quaternion_obj::__alloc( HX_CTX ,_hx_tmp1,_hx_tmp3,_hx_tmp5,(_hx_tmp6 - q->get_w()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,sub,return )

 ::kha::math::Quaternion Quaternion_obj::mult( ::kha::math::Quaternion r){
            	HX_GC_STACKFRAME(&_hx_pos_002fcb5d014f4211_184_mult)
HXLINE( 185)		 ::kha::math::Quaternion q =  ::kha::math::Quaternion_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 186)		Float _hx_tmp = this->get_w();
HXDLIN( 186)		Float _hx_tmp1 = (_hx_tmp * r->get_x());
HXDLIN( 186)		Float _hx_tmp2 = this->get_x();
HXDLIN( 186)		Float _hx_tmp3 = (_hx_tmp1 + (_hx_tmp2 * r->get_w()));
HXDLIN( 186)		Float _hx_tmp4 = this->get_y();
HXDLIN( 186)		Float _hx_tmp5 = (_hx_tmp3 + (_hx_tmp4 * r->get_z()));
HXDLIN( 186)		Float _hx_tmp6 = this->get_z();
HXDLIN( 186)		q->set_x((_hx_tmp5 - (_hx_tmp6 * r->get_y())));
HXLINE( 187)		Float _hx_tmp7 = this->get_w();
HXDLIN( 187)		Float _hx_tmp8 = (_hx_tmp7 * r->get_y());
HXDLIN( 187)		Float _hx_tmp9 = this->get_x();
HXDLIN( 187)		Float _hx_tmp10 = (_hx_tmp8 - (_hx_tmp9 * r->get_z()));
HXDLIN( 187)		Float _hx_tmp11 = this->get_y();
HXDLIN( 187)		Float _hx_tmp12 = (_hx_tmp10 + (_hx_tmp11 * r->get_w()));
HXDLIN( 187)		Float _hx_tmp13 = this->get_z();
HXDLIN( 187)		q->set_y((_hx_tmp12 + (_hx_tmp13 * r->get_x())));
HXLINE( 188)		Float _hx_tmp14 = this->get_w();
HXDLIN( 188)		Float _hx_tmp15 = (_hx_tmp14 * r->get_z());
HXDLIN( 188)		Float _hx_tmp16 = this->get_x();
HXDLIN( 188)		Float _hx_tmp17 = (_hx_tmp15 + (_hx_tmp16 * r->get_y()));
HXDLIN( 188)		Float _hx_tmp18 = this->get_y();
HXDLIN( 188)		Float _hx_tmp19 = (_hx_tmp17 - (_hx_tmp18 * r->get_x()));
HXDLIN( 188)		Float _hx_tmp20 = this->get_z();
HXDLIN( 188)		q->set_z((_hx_tmp19 + (_hx_tmp20 * r->get_w())));
HXLINE( 189)		Float _hx_tmp21 = this->get_w();
HXDLIN( 189)		Float _hx_tmp22 = (_hx_tmp21 * r->get_w());
HXDLIN( 189)		Float _hx_tmp23 = this->get_x();
HXDLIN( 189)		Float _hx_tmp24 = (_hx_tmp22 - (_hx_tmp23 * r->get_x()));
HXDLIN( 189)		Float _hx_tmp25 = this->get_y();
HXDLIN( 189)		Float _hx_tmp26 = (_hx_tmp24 - (_hx_tmp25 * r->get_y()));
HXDLIN( 189)		Float _hx_tmp27 = this->get_z();
HXDLIN( 189)		q->set_w((_hx_tmp26 - (_hx_tmp27 * r->get_z())));
HXLINE( 190)		return q;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,mult,return )

void Quaternion_obj::normalize(){
            	HX_STACKFRAME(&_hx_pos_002fcb5d014f4211_194_normalize)
HXDLIN( 194)		this->scale(((Float)((Float)1.0) / (Float)this->get_length()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Quaternion_obj,normalize,(void))

Float Quaternion_obj::dot( ::kha::math::Quaternion q){
            	HX_STACKFRAME(&_hx_pos_002fcb5d014f4211_198_dot)
HXDLIN( 198)		Float _hx_tmp = this->get_x();
HXDLIN( 198)		Float _hx_tmp1 = (_hx_tmp * q->get_x());
HXDLIN( 198)		Float _hx_tmp2 = this->get_y();
HXDLIN( 198)		Float _hx_tmp3 = (_hx_tmp1 + (_hx_tmp2 * q->get_y()));
HXDLIN( 198)		Float _hx_tmp4 = this->get_z();
HXDLIN( 198)		Float _hx_tmp5 = (_hx_tmp3 + (_hx_tmp4 * q->get_z()));
HXDLIN( 198)		Float _hx_tmp6 = this->get_w();
HXDLIN( 198)		return (_hx_tmp5 + (_hx_tmp6 * q->get_w()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Quaternion_obj,dot,return )

 ::kha::math::Vector3 Quaternion_obj::getEulerAngles(int A1,int A2,int A3,hx::Null< int >  __o_S,hx::Null< int >  __o_D){
int S = __o_S.Default(1);
int D = __o_D.Default(1);
            	HX_GC_STACKFRAME(&_hx_pos_002fcb5d014f4211_214_getEulerAngles)
HXLINE( 215)		 ::kha::math::Vector3 result =  ::kha::math::Vector3_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE( 217)		::Array< Float > Q = ::Array_obj< Float >::__new();
HXLINE( 218)		Q[(int)0] = this->get_x();
HXLINE( 219)		Q[(int)1] = this->get_y();
HXLINE( 220)		Q[(int)2] = this->get_z();
HXLINE( 222)		Float ww = this->get_w();
HXDLIN( 222)		Float ww1 = (ww * this->get_w());
HXLINE( 224)		Float Q11 = (Q->__get(A1) * Q->__get(A1));
HXLINE( 225)		Float Q22 = (Q->__get(A2) * Q->__get(A2));
HXLINE( 226)		Float Q33 = (Q->__get(A3) * Q->__get(A3));
HXLINE( 228)		Float psign = (int)-1;
HXLINE( 230)		Float SingularityRadius = ((Float)0.0000001);
HXLINE( 231)		Float PiOver2 = ((Float)::Math_obj::PI / (Float)((Float)2.0));
HXLINE( 234)		bool _hx_tmp;
HXDLIN( 234)		if ((hx::Mod((A1 + (int)1),(int)3) == A2)) {
HXLINE( 234)			_hx_tmp = (hx::Mod((A2 + (int)1),(int)3) == A3);
            		}
            		else {
HXLINE( 234)			_hx_tmp = false;
            		}
HXDLIN( 234)		if (_hx_tmp) {
HXLINE( 235)			psign = (int)1;
            		}
HXLINE( 238)		Float s2 = (psign * this->get_w());
HXDLIN( 238)		Float s21 = (s2 * Q->__get(A2));
HXDLIN( 238)		Float s22 = ((psign * ((Float)2.0)) * (s21 + (Q->__get(A1) * Q->__get(A3))));
HXLINE( 240)		if ((s22 < ((int)-1 + SingularityRadius))) {
HXLINE( 241)			result->x = (int)0;
HXLINE( 242)			result->y = ((-(S) * D) * PiOver2);
HXLINE( 243)			Float _hx_tmp1 = ((psign * Q->__get(A1)) * Q->__get(A2));
HXDLIN( 243)			Float _hx_tmp2 = this->get_w();
HXDLIN( 243)			Float _hx_tmp3 = ((int)2 * (_hx_tmp1 + (_hx_tmp2 * Q->__get(A3))));
HXDLIN( 243)			result->z = ((S * D) * ::Math_obj::atan2(_hx_tmp3,(((ww1 + Q22) - Q11) - Q33)));
            		}
            		else {
HXLINE( 245)			if ((s22 > ((int)1 - SingularityRadius))) {
HXLINE( 246)				result->x = (int)0;
HXLINE( 247)				result->y = ((S * D) * PiOver2);
HXLINE( 248)				Float _hx_tmp4 = ((psign * Q->__get(A1)) * Q->__get(A2));
HXDLIN( 248)				Float _hx_tmp5 = this->get_w();
HXDLIN( 248)				Float _hx_tmp6 = ((int)2 * (_hx_tmp4 + (_hx_tmp5 * Q->__get(A3))));
HXDLIN( 248)				result->z = ((S * D) * ::Math_obj::atan2(_hx_tmp6,(((ww1 + Q22) - Q11) - Q33)));
            			}
            			else {
HXLINE( 251)				Float _hx_tmp7 = this->get_w();
HXDLIN( 251)				Float _hx_tmp8 = (_hx_tmp7 * Q->__get(A1));
HXDLIN( 251)				Float _hx_tmp9 = ((int)-2 * (_hx_tmp8 - ((psign * Q->__get(A2)) * Q->__get(A3))));
HXDLIN( 251)				result->x = ((-(S) * D) * ::Math_obj::atan2(_hx_tmp9,(((ww1 + Q33) - Q11) - Q22)));
HXLINE( 252)				result->y = ((S * D) * ::Math_obj::asin(s22));
HXLINE( 253)				Float _hx_tmp10 = this->get_w();
HXDLIN( 253)				Float _hx_tmp11 = (_hx_tmp10 * Q->__get(A3));
HXDLIN( 253)				Float _hx_tmp12 = ((int)2 * (_hx_tmp11 - ((psign * Q->__get(A1)) * Q->__get(A2))));
HXDLIN( 253)				result->z = ((S * D) * ::Math_obj::atan2(_hx_tmp12,(((ww1 + Q11) - Q22) - Q33)));
            			}
            		}
HXLINE( 256)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC5(Quaternion_obj,getEulerAngles,return )

 ::kha::math::Quaternion Quaternion_obj::fromAxisAngle( ::kha::math::Vector3 axis,Float radians){
            	HX_GC_STACKFRAME(&_hx_pos_002fcb5d014f4211_19_fromAxisAngle)
HXLINE(  20)		 ::kha::math::Quaternion q =  ::kha::math::Quaternion_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  21)		q->set_w(::Math_obj::cos(((Float)radians / (Float)((Float)2.0))));
HXLINE(  22)		q->set_x(q->set_y(q->set_z(::Math_obj::sin(((Float)radians / (Float)((Float)2.0))))));
HXLINE(  23)		{
HXLINE(  23)			 ::kha::math::Quaternion _g = q;
HXDLIN(  23)			Float _hx_tmp = _g->get_x();
HXDLIN(  23)			_g->set_x((_hx_tmp * axis->x));
            		}
HXLINE(  24)		{
HXLINE(  24)			 ::kha::math::Quaternion _g1 = q;
HXDLIN(  24)			Float _hx_tmp1 = _g1->get_y();
HXDLIN(  24)			_g1->set_y((_hx_tmp1 * axis->y));
            		}
HXLINE(  25)		{
HXLINE(  25)			 ::kha::math::Quaternion _g2 = q;
HXDLIN(  25)			Float _hx_tmp2 = _g2->get_z();
HXDLIN(  25)			_g2->set_z((_hx_tmp2 * axis->z));
            		}
HXLINE(  26)		return q;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Quaternion_obj,fromAxisAngle,return )

int Quaternion_obj::AXIS_X;

int Quaternion_obj::AXIS_Y;

int Quaternion_obj::AXIS_Z;


hx::ObjectPtr< Quaternion_obj > Quaternion_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z,hx::Null< Float >  __o_w) {
	hx::ObjectPtr< Quaternion_obj > __this = new Quaternion_obj();
	__this->__construct(__o_x,__o_y,__o_z,__o_w);
	return __this;
}

hx::ObjectPtr< Quaternion_obj > Quaternion_obj::__alloc(hx::Ctx *_hx_ctx,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z,hx::Null< Float >  __o_w) {
	Quaternion_obj *__this = (Quaternion_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Quaternion_obj), true, "kha.math.Quaternion"));
	*(void **)__this = Quaternion_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y,__o_z,__o_w);
	return __this;
}

Quaternion_obj::Quaternion_obj()
{
}

void Quaternion_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Quaternion);
	HX_MARK_MEMBER_NAME(values,"values");
	HX_MARK_END_CLASS();
}

void Quaternion_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(values,"values");
}

hx::Val Quaternion_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_x() ); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_y() ); }
		if (HX_FIELD_EQ(inName,"z") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_z() ); }
		if (HX_FIELD_EQ(inName,"w") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_w() ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"add") ) { return hx::Val( add_dyn() ); }
		if (HX_FIELD_EQ(inName,"sub") ) { return hx::Val( sub_dyn() ); }
		if (HX_FIELD_EQ(inName,"dot") ) { return hx::Val( dot_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mult") ) { return hx::Val( mult_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"slerp") ) { return hx::Val( slerp_dyn() ); }
		if (HX_FIELD_EQ(inName,"scale") ) { return hx::Val( scale_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return hx::Val( get_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return hx::Val( set_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return hx::Val( get_y_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return hx::Val( set_y_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_z") ) { return hx::Val( get_z_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_z") ) { return hx::Val( set_z_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_w") ) { return hx::Val( get_w_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_w") ) { return hx::Val( set_w_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"values") ) { return hx::Val( values ); }
		if (HX_FIELD_EQ(inName,"scaled") ) { return hx::Val( scaled_dyn() ); }
		if (HX_FIELD_EQ(inName,"matrix") ) { return hx::Val( matrix_dyn() ); }
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_length() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"rotated") ) { return hx::Val( rotated_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addVector") ) { return hx::Val( addVector_dyn() ); }
		if (HX_FIELD_EQ(inName,"normalize") ) { return hx::Val( normalize_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return hx::Val( get_length_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_length") ) { return hx::Val( set_length_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getEulerAngles") ) { return hx::Val( getEulerAngles_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Quaternion_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"fromAxisAngle") ) { outValue = fromAxisAngle_dyn(); return true; }
	}
	return false;
}

hx::Val Quaternion_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_x(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_y(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"z") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_z(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"w") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_w(inValue.Cast< Float >()) ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"values") ) { values=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_length(inValue.Cast< Float >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Quaternion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("z","\x7a","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("w","\x77","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Quaternion_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(Quaternion_obj,values),HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Quaternion_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Quaternion_obj::AXIS_X,HX_HCSTRING("AXIS_X","\xfa","\x61","\xf5","\xd8")},
	{hx::fsInt,(void *) &Quaternion_obj::AXIS_Y,HX_HCSTRING("AXIS_Y","\xfb","\x61","\xf5","\xd8")},
	{hx::fsInt,(void *) &Quaternion_obj::AXIS_Z,HX_HCSTRING("AXIS_Z","\xfc","\x61","\xf5","\xd8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Quaternion_obj_sMemberFields[] = {
	HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f"),
	HX_HCSTRING("slerp","\x6a","\xc8","\xc4","\x7e"),
	HX_HCSTRING("rotated","\xa9","\x49","\x1d","\xf1"),
	HX_HCSTRING("scaled","\x9a","\xea","\x25","\x3c"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_z","\x51","\xa5","\x60","\x91"),
	HX_HCSTRING("set_z","\x5d","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_w","\x4e","\xa5","\x60","\x91"),
	HX_HCSTRING("set_w","\x5a","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("set_length","\x23","\xa3","\x0c","\x93"),
	HX_HCSTRING("addVector","\xc4","\xe5","\x81","\x4f"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("sub","\x80","\xa9","\x57","\x00"),
	HX_HCSTRING("mult","\xf0","\x67","\x65","\x48"),
	HX_HCSTRING("normalize","\x8d","\x37","\xa1","\xab"),
	HX_HCSTRING("dot","\x89","\x42","\x4c","\x00"),
	HX_HCSTRING("getEulerAngles","\x93","\x2a","\x63","\xec"),
	::String(null()) };

static void Quaternion_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Quaternion_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Quaternion_obj::AXIS_X,"AXIS_X");
	HX_MARK_MEMBER_NAME(Quaternion_obj::AXIS_Y,"AXIS_Y");
	HX_MARK_MEMBER_NAME(Quaternion_obj::AXIS_Z,"AXIS_Z");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Quaternion_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Quaternion_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::AXIS_X,"AXIS_X");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::AXIS_Y,"AXIS_Y");
	HX_VISIT_MEMBER_NAME(Quaternion_obj::AXIS_Z,"AXIS_Z");
};

#endif

hx::Class Quaternion_obj::__mClass;

static ::String Quaternion_obj_sStaticFields[] = {
	HX_HCSTRING("fromAxisAngle","\xa8","\x6c","\x6f","\xf0"),
	HX_HCSTRING("AXIS_X","\xfa","\x61","\xf5","\xd8"),
	HX_HCSTRING("AXIS_Y","\xfb","\x61","\xf5","\xd8"),
	HX_HCSTRING("AXIS_Z","\xfc","\x61","\xf5","\xd8"),
	::String(null())
};

void Quaternion_obj::__register()
{
	hx::Object *dummy = new Quaternion_obj;
	Quaternion_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.math.Quaternion","\xda","\xd1","\x59","\xbc");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Quaternion_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Quaternion_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Quaternion_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Quaternion_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Quaternion_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Quaternion_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Quaternion_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Quaternion_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Quaternion_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_002fcb5d014f4211_210_boot)
HXDLIN( 210)		AXIS_X = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_002fcb5d014f4211_211_boot)
HXDLIN( 211)		AXIS_Y = (int)1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_002fcb5d014f4211_212_boot)
HXDLIN( 212)		AXIS_Z = (int)2;
            	}
}

} // end namespace kha
} // end namespace math

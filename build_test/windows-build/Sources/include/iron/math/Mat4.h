// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_iron_math_Mat4
#define INCLUDED_iron_math_Mat4

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(iron,math,Mat4)
HX_DECLARE_CLASS2(iron,math,Quat)
HX_DECLARE_CLASS2(iron,math,Vec4)
HX_DECLARE_CLASS2(kha,arrays,Float32ArrayPrivate)
HX_DECLARE_CLASS2(kha,math,FastMatrix4)
HX_DECLARE_CLASS2(kha,math,FastVector4)

namespace iron{
namespace math{


class HXCPP_CLASS_ATTRIBUTES Mat4_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Mat4_obj OBJ_;
		Mat4_obj();

	public:
		enum { _hx_ClassId = 0x118e08a8 };

		void __construct(float _00,float _10,float _20,float _30,float _01,float _11,float _21,float _31,float _02,float _12,float _22,float _32,float _03,float _13,float _23,float _33);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="iron.math.Mat4")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"iron.math.Mat4"); }
		static hx::ObjectPtr< Mat4_obj > __new(float _00,float _10,float _20,float _30,float _01,float _11,float _21,float _31,float _02,float _12,float _22,float _32,float _03,float _13,float _23,float _33);
		static hx::ObjectPtr< Mat4_obj > __alloc(hx::Ctx *_hx_ctx,float _00,float _10,float _20,float _30,float _01,float _11,float _21,float _31,float _02,float _12,float _22,float _32,float _03,float _13,float _23,float _33);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Mat4_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Mat4","\xb4","\x6d","\x2f","\x33"); }

		static void __boot();
		static  ::iron::math::Vec4 helpVec;
		static  ::iron::math::Mat4 helpMat;
		static  ::iron::math::Mat4 identity();
		static ::Dynamic identity_dyn();

		static  ::iron::math::Mat4 fromArray(::Array< float > a,hx::Null< int >  offset);
		static ::Dynamic fromArray_dyn();

		static  ::iron::math::Mat4 fromFloat32Array( ::kha::arrays::Float32ArrayPrivate a,hx::Null< int >  offset);
		static ::Dynamic fromFloat32Array_dyn();

		static  ::iron::math::Mat4 persp(float fovY,float aspect,float zn,float zf);
		static ::Dynamic persp_dyn();

		static  ::iron::math::Mat4 ortho(float left,float right,float bottom,float top,float _hx_near,float _hx_far);
		static ::Dynamic ortho_dyn();

		static  ::iron::math::Mat4 lookAt( ::iron::math::Vec4 eye, ::iron::math::Vec4 center, ::iron::math::Vec4 up);
		static ::Dynamic lookAt_dyn();

		 ::kha::math::FastMatrix4 self;
		 ::iron::math::Mat4 compose( ::iron::math::Vec4 location, ::iron::math::Quat quaternion, ::iron::math::Vec4 sc);
		::Dynamic compose_dyn();

		 ::iron::math::Mat4 decompose( ::iron::math::Vec4 location, ::iron::math::Quat quaternion, ::iron::math::Vec4 scale);
		::Dynamic decompose_dyn();

		 ::iron::math::Mat4 setLocation( ::iron::math::Vec4 v);
		::Dynamic setLocation_dyn();

		 ::iron::math::Mat4 fromQuaternion( ::iron::math::Quat q);
		::Dynamic fromQuaternion_dyn();

		::Array< float > toArray();
		::Dynamic toArray_dyn();

		 ::iron::math::Mat4 setIdentity();
		::Dynamic setIdentity_dyn();

		void initTranslate(hx::Null< Float >  x,hx::Null< Float >  y,hx::Null< Float >  z);
		::Dynamic initTranslate_dyn();

		void translate(hx::Null< Float >  x,hx::Null< Float >  y,hx::Null< Float >  z);
		::Dynamic translate_dyn();

		void scale( ::iron::math::Vec4 v);
		::Dynamic scale_dyn();

		void multmat3x4( ::iron::math::Mat4 a, ::iron::math::Mat4 b);
		::Dynamic multmat3x4_dyn();

		 ::iron::math::Mat4 multmat( ::iron::math::Mat4 m);
		::Dynamic multmat_dyn();

		 ::iron::math::Mat4 multmat2( ::iron::math::Mat4 m);
		::Dynamic multmat2_dyn();

		 ::iron::math::Mat4 multmats( ::iron::math::Mat4 a, ::iron::math::Mat4 b);
		::Dynamic multmats_dyn();

		 ::iron::math::Mat4 getInverse( ::iron::math::Mat4 m);
		::Dynamic getInverse_dyn();

		void transpose();
		::Dynamic transpose_dyn();

		void transpose3x3();
		::Dynamic transpose3x3_dyn();

		 ::iron::math::Mat4 clone();
		::Dynamic clone_dyn();

		void init(float _00,float _10,float _20,float _30,float _01,float _11,float _21,float _31,float _02,float _12,float _22,float _32,float _03,float _13,float _23,float _33);
		::Dynamic init_dyn();

		void set(::Array< float > a,hx::Null< int >  offset);
		::Dynamic set_dyn();

		void setF32( ::kha::arrays::Float32ArrayPrivate a,hx::Null< int >  offset);
		::Dynamic setF32_dyn();

		 ::iron::math::Mat4 setFrom( ::iron::math::Mat4 m);
		::Dynamic setFrom_dyn();

		 ::iron::math::Vec4 getLoc();
		::Dynamic getLoc_dyn();

		 ::iron::math::Vec4 getScale();
		::Dynamic getScale_dyn();

		 ::iron::math::Mat4 mult(Float s);
		::Dynamic mult_dyn();

		 ::iron::math::Mat4 toRotation();
		::Dynamic toRotation_dyn();

		 ::iron::math::Quat getQuat();
		::Dynamic getQuat_dyn();

		 ::iron::math::Mat4 setLookAt( ::iron::math::Vec4 eye, ::iron::math::Vec4 center, ::iron::math::Vec4 up);
		::Dynamic setLookAt_dyn();

		void applyQuat( ::iron::math::Quat q);
		::Dynamic applyQuat_dyn();

		void write( ::kha::arrays::Float32ArrayPrivate ar,hx::Null< int >  offset);
		::Dynamic write_dyn();

		 ::kha::math::FastVector4 multvec( ::kha::math::FastVector4 value);
		::Dynamic multvec_dyn();

		 ::iron::math::Vec4 right();
		::Dynamic right_dyn();

		 ::iron::math::Vec4 up();
		::Dynamic up_dyn();

		 ::iron::math::Vec4 look();
		::Dynamic look_dyn();

		float get__00();
		::Dynamic get__00_dyn();

		float set__00(float f);
		::Dynamic set__00_dyn();

		float get__01();
		::Dynamic get__01_dyn();

		float set__01(float f);
		::Dynamic set__01_dyn();

		float get__02();
		::Dynamic get__02_dyn();

		float set__02(float f);
		::Dynamic set__02_dyn();

		float get__03();
		::Dynamic get__03_dyn();

		float set__03(float f);
		::Dynamic set__03_dyn();

		float get__10();
		::Dynamic get__10_dyn();

		float set__10(float f);
		::Dynamic set__10_dyn();

		float get__11();
		::Dynamic get__11_dyn();

		float set__11(float f);
		::Dynamic set__11_dyn();

		float get__12();
		::Dynamic get__12_dyn();

		float set__12(float f);
		::Dynamic set__12_dyn();

		float get__13();
		::Dynamic get__13_dyn();

		float set__13(float f);
		::Dynamic set__13_dyn();

		float get__20();
		::Dynamic get__20_dyn();

		float set__20(float f);
		::Dynamic set__20_dyn();

		float get__21();
		::Dynamic get__21_dyn();

		float set__21(float f);
		::Dynamic set__21_dyn();

		float get__22();
		::Dynamic get__22_dyn();

		float set__22(float f);
		::Dynamic set__22_dyn();

		float get__23();
		::Dynamic get__23_dyn();

		float set__23(float f);
		::Dynamic set__23_dyn();

		float get__30();
		::Dynamic get__30_dyn();

		float set__30(float f);
		::Dynamic set__30_dyn();

		float get__31();
		::Dynamic get__31_dyn();

		float set__31(float f);
		::Dynamic set__31_dyn();

		float get__32();
		::Dynamic get__32_dyn();

		float set__32(float f);
		::Dynamic set__32_dyn();

		float get__33();
		::Dynamic get__33_dyn();

		float set__33(float f);
		::Dynamic set__33_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace iron
} // end namespace math

#endif /* INCLUDED_iron_math_Mat4 */ 

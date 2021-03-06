// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_iron_math_Mat3
#define INCLUDED_iron_math_Mat3

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(iron,math,Mat3)
HX_DECLARE_CLASS2(iron,math,Mat4)
HX_DECLARE_CLASS2(kha,math,FastMatrix3)

namespace iron{
namespace math{


class HXCPP_CLASS_ATTRIBUTES Mat3_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Mat3_obj OBJ_;
		Mat3_obj();

	public:
		enum { _hx_ClassId = 0x118e08a7 };

		void __construct(float _00,float _10,float _20,float _01,float _11,float _21,float _02,float _12,float _22);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="iron.math.Mat3")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"iron.math.Mat3"); }
		static hx::ObjectPtr< Mat3_obj > __new(float _00,float _10,float _20,float _01,float _11,float _21,float _02,float _12,float _22);
		static hx::ObjectPtr< Mat3_obj > __alloc(hx::Ctx *_hx_ctx,float _00,float _10,float _20,float _01,float _11,float _21,float _02,float _12,float _22);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Mat3_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Mat3","\xb3","\x6d","\x2f","\x33"); }

		static  ::iron::math::Mat3 identity();
		static ::Dynamic identity_dyn();

		 ::kha::math::FastMatrix3 self;
		void setFrom4( ::iron::math::Mat4 m);
		::Dynamic setFrom4_dyn();

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

};

} // end namespace iron
} // end namespace math

#endif /* INCLUDED_iron_math_Mat3 */ 

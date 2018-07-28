// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_iron_math_Vec2
#define INCLUDED_iron_math_Vec2

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(iron,math,Vec2)

namespace iron{
namespace math{


class HXCPP_CLASS_ATTRIBUTES Vec2_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Vec2_obj OBJ_;
		Vec2_obj();

	public:
		enum { _hx_ClassId = 0x1783ee72 };

		void __construct(hx::Null< float >  __o_x,hx::Null< float >  __o_y);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="iron.math.Vec2")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"iron.math.Vec2"); }
		static hx::ObjectPtr< Vec2_obj > __new(hx::Null< float >  __o_x,hx::Null< float >  __o_y);
		static hx::ObjectPtr< Vec2_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< float >  __o_x,hx::Null< float >  __o_y);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Vec2_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Vec2","\x7e","\x53","\x25","\x39"); }

		static  ::iron::math::Vec2 lerp( ::iron::math::Vec2 v1, ::iron::math::Vec2 v2,float t);
		static ::Dynamic lerp_dyn();

		static float distance( ::iron::math::Vec2 v1, ::iron::math::Vec2 v2);
		static ::Dynamic distance_dyn();

		static float distancef(float v1x,float v1y,float v2x,float v2y);
		static ::Dynamic distancef_dyn();

		static  ::iron::math::Vec2 xAxis();
		static ::Dynamic xAxis_dyn();

		static  ::iron::math::Vec2 yAxis();
		static ::Dynamic yAxis_dyn();

		static  ::iron::math::Vec2 one();
		static ::Dynamic one_dyn();

		static  ::iron::math::Vec2 zero();
		static ::Dynamic zero_dyn();

		static  ::iron::math::Vec2 back();
		static ::Dynamic back_dyn();

		static  ::iron::math::Vec2 forward();
		static ::Dynamic forward_dyn();

		static  ::iron::math::Vec2 left();
		static ::Dynamic left_dyn();

		static  ::iron::math::Vec2 right();
		static ::Dynamic right_dyn();

		static  ::iron::math::Vec2 negativeInfinity();
		static ::Dynamic negativeInfinity_dyn();

		static  ::iron::math::Vec2 positiveInfinity();
		static ::Dynamic positiveInfinity_dyn();

		float x;
		float y;
		float cross( ::iron::math::Vec2 v);
		::Dynamic cross_dyn();

		 ::iron::math::Vec2 set(float x,float y);
		::Dynamic set_dyn();

		 ::iron::math::Vec2 add( ::iron::math::Vec2 v);
		::Dynamic add_dyn();

		 ::iron::math::Vec2 addf(float x,float y);
		::Dynamic addf_dyn();

		 ::iron::math::Vec2 addvecs( ::iron::math::Vec2 a, ::iron::math::Vec2 b);
		::Dynamic addvecs_dyn();

		 ::iron::math::Vec2 subvecs( ::iron::math::Vec2 a, ::iron::math::Vec2 b);
		::Dynamic subvecs_dyn();

		 ::iron::math::Vec2 normalize();
		::Dynamic normalize_dyn();

		 ::iron::math::Vec2 mult(float f);
		::Dynamic mult_dyn();

		float dot( ::iron::math::Vec2 v);
		::Dynamic dot_dyn();

		 ::iron::math::Vec2 setFrom( ::iron::math::Vec2 v);
		::Dynamic setFrom_dyn();

		 ::iron::math::Vec2 clone();
		::Dynamic clone_dyn();

		bool equals( ::iron::math::Vec2 v);
		::Dynamic equals_dyn();

		float length();
		::Dynamic length_dyn();

		 ::iron::math::Vec2 normalizeTo(float newLength);
		::Dynamic normalizeTo_dyn();

		 ::iron::math::Vec2 sub( ::iron::math::Vec2 v);
		::Dynamic sub_dyn();

		float distanceTo( ::iron::math::Vec2 p);
		::Dynamic distanceTo_dyn();

		 ::iron::math::Vec2 clamp(float fmin,float fmax);
		::Dynamic clamp_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace iron
} // end namespace math

#endif /* INCLUDED_iron_math_Vec2 */ 

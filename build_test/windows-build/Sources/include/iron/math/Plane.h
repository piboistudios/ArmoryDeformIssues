// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_iron_math_Plane
#define INCLUDED_iron_math_Plane

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(iron,math,Plane)
HX_DECLARE_CLASS2(iron,math,Vec4)

namespace iron{
namespace math{


class HXCPP_CLASS_ATTRIBUTES Plane_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Plane_obj OBJ_;
		Plane_obj();

	public:
		enum { _hx_ClassId = 0x0c2468c8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="iron.math.Plane")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"iron.math.Plane"); }
		static hx::ObjectPtr< Plane_obj > __new();
		static hx::ObjectPtr< Plane_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Plane_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Plane","\x3c","\x6e","\xbb","\x57"); }

		 ::iron::math::Vec4 normal;
		Float constant;
		Float distanceToPoint( ::iron::math::Vec4 point);
		::Dynamic distanceToPoint_dyn();

		 ::iron::math::Plane set( ::iron::math::Vec4 normal, ::iron::math::Vec4 point);
		::Dynamic set_dyn();

};

} // end namespace iron
} // end namespace math

#endif /* INCLUDED_iron_math_Plane */ 
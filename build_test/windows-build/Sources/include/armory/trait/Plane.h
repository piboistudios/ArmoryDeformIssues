// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_armory_trait_Plane
#define INCLUDED_armory_trait_Plane

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(armory,trait,Line3)
HX_DECLARE_CLASS2(armory,trait,Plane)
HX_DECLARE_CLASS2(iron,math,Vec4)

namespace armory{
namespace trait{


class HXCPP_CLASS_ATTRIBUTES Plane_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Plane_obj OBJ_;
		Plane_obj();

	public:
		enum { _hx_ClassId = 0x1da832c8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="armory.trait.Plane")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"armory.trait.Plane"); }
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

		 ::armory::trait::Plane setFromCoplanarPoints( ::iron::math::Vec4 a, ::iron::math::Vec4 b, ::iron::math::Vec4 c);
		::Dynamic setFromCoplanarPoints_dyn();

		 ::armory::trait::Plane set( ::iron::math::Vec4 normal, ::iron::math::Vec4 point);
		::Dynamic set_dyn();

		 ::iron::math::Vec4 coplanarPoint( ::iron::math::Vec4 result);
		::Dynamic coplanarPoint_dyn();

		 ::iron::math::Vec4 intersectLine( ::armory::trait::Line3 line);
		::Dynamic intersectLine_dyn();

};

} // end namespace armory
} // end namespace trait

#endif /* INCLUDED_armory_trait_Plane */ 

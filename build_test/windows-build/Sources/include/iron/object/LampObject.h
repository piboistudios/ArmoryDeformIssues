// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_iron_object_LampObject
#define INCLUDED_iron_object_LampObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_iron_object_Object
#include <iron/object/Object.h>
#endif
HX_DECLARE_CLASS2(iron,data,Data)
HX_DECLARE_CLASS2(iron,data,LampData)
HX_DECLARE_CLASS2(iron,math,Mat4)
HX_DECLARE_CLASS2(iron,math,Vec4)
HX_DECLARE_CLASS2(iron,object,CameraObject)
HX_DECLARE_CLASS2(iron,object,FrustumPlane)
HX_DECLARE_CLASS2(iron,object,LampObject)
HX_DECLARE_CLASS2(iron,object,Object)
HX_DECLARE_CLASS2(kha,arrays,Float32ArrayPrivate)

namespace iron{
namespace object{


class HXCPP_CLASS_ATTRIBUTES LampObject_obj : public  ::iron::object::Object_obj
{
	public:
		typedef  ::iron::object::Object_obj super;
		typedef LampObject_obj OBJ_;
		LampObject_obj();

	public:
		enum { _hx_ClassId = 0x3a1da21e };

		void __construct( ::iron::data::LampData data);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="iron.object.LampObject")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"iron.object.LampObject"); }
		static hx::ObjectPtr< LampObject_obj > __new( ::iron::data::LampData data);
		static hx::ObjectPtr< LampObject_obj > __alloc(hx::Ctx *_hx_ctx, ::iron::data::LampData data);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LampObject_obj();

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
		::String __ToString() const { return HX_HCSTRING("LampObject","\x17","\xde","\x46","\xd9"); }

		static void __boot();
		static int cascadeCount;
		static Float cascadeSplitFactor;
		static ::Array< ::Dynamic> corners;
		static void setCorners();
		static ::Dynamic setCorners_dyn();

		static  ::iron::math::Mat4 m;
		static Float mix(Float a,Float b,Float f);
		static ::Dynamic mix_dyn();

		static  ::iron::math::Vec4 p1;
		static  ::iron::math::Vec4 p2;
		static  ::iron::math::Vec4 p3;
		 ::kha::arrays::Float32ArrayPrivate cascadeData;
		::Array< ::Dynamic> cascadeVP;
		::Array< ::Dynamic> camSlicedP;
		::Array< Float > cascadeSplit;
		 ::iron::data::LampData data;
		 ::iron::math::Mat4 V;
		 ::iron::math::Mat4 P;
		 ::iron::math::Mat4 VP;
		::Array< ::Dynamic> frustumPlanes;
		void remove();

		void buildMatrices( ::iron::object::CameraObject camera);
		::Dynamic buildMatrices_dyn();

		void setCascade( ::iron::object::CameraObject camera,int cascade);
		::Dynamic setCascade_dyn();

		void updateViewFrustum( ::iron::object::CameraObject camera);
		::Dynamic updateViewFrustum_dyn();

		void setCubeFace(int face, ::iron::object::CameraObject camera);
		::Dynamic setCubeFace_dyn();

		 ::iron::math::Mat4 bias;
		 ::kha::arrays::Float32ArrayPrivate getCascadeData();
		::Dynamic getCascadeData_dyn();

		 ::iron::math::Vec4 right();
		::Dynamic right_dyn();

		 ::iron::math::Vec4 up();
		::Dynamic up_dyn();

		 ::iron::math::Vec4 look();
		::Dynamic look_dyn();

		virtual ::String toString();

};

} // end namespace iron
} // end namespace object

#endif /* INCLUDED_iron_object_LampObject */ 

// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_iron_object_DecalObject
#define INCLUDED_iron_object_DecalObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_iron_object_Object
#include <iron/object/Object.h>
#endif
HX_DECLARE_CLASS2(iron,data,Data)
HX_DECLARE_CLASS2(iron,data,MaterialData)
HX_DECLARE_CLASS2(iron,object,CameraObject)
HX_DECLARE_CLASS2(iron,object,DecalObject)
HX_DECLARE_CLASS2(iron,object,LampObject)
HX_DECLARE_CLASS2(iron,object,Object)
HX_DECLARE_CLASS2(kha,graphics4,Graphics)

namespace iron{
namespace object{


class HXCPP_CLASS_ATTRIBUTES DecalObject_obj : public  ::iron::object::Object_obj
{
	public:
		typedef  ::iron::object::Object_obj super;
		typedef DecalObject_obj OBJ_;
		DecalObject_obj();

	public:
		enum { _hx_ClassId = 0x6b9505fd };

		void __construct( ::iron::data::MaterialData material);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="iron.object.DecalObject")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"iron.object.DecalObject"); }
		static hx::ObjectPtr< DecalObject_obj > __new( ::iron::data::MaterialData material);
		static hx::ObjectPtr< DecalObject_obj > __alloc(hx::Ctx *_hx_ctx, ::iron::data::MaterialData material);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DecalObject_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("DecalObject","\xac","\xad","\xd0","\x2c"); }

		 ::iron::data::MaterialData material;
		void remove();

		void render(::Dynamic g,::String context, ::iron::object::CameraObject camera, ::iron::object::LampObject lamp,::Array< ::String > bindParams);
		::Dynamic render_dyn();

};

} // end namespace iron
} // end namespace object

#endif /* INCLUDED_iron_object_DecalObject */ 

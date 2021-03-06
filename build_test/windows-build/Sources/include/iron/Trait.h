// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_iron_Trait
#define INCLUDED_iron_Trait

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(iron,Trait)
HX_DECLARE_CLASS2(iron,object,Object)
HX_DECLARE_CLASS2(kha,graphics2,Graphics)
HX_DECLARE_CLASS2(kha,graphics4,Graphics)

namespace iron{


class HXCPP_CLASS_ATTRIBUTES Trait_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Trait_obj OBJ_;
		Trait_obj();

	public:
		enum { _hx_ClassId = 0x7b609ac2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="iron.Trait")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"iron.Trait"); }
		static hx::ObjectPtr< Trait_obj > __new();
		static hx::ObjectPtr< Trait_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Trait_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Trait","\xae","\x03","\x4d","\xa9"); }

		::String name;
		 ::iron::object::Object object;
		::Array< ::Dynamic> _add;
		::Array< ::Dynamic> _init;
		::Array< ::Dynamic> _remove;
		::Array< ::Dynamic> _update;
		::Array< ::Dynamic> _lateUpdate;
		::Array< ::Dynamic> _render;
		::Array< ::Dynamic> _render2D;
		void remove();
		::Dynamic remove_dyn();

		void notifyOnAdd( ::Dynamic f);
		::Dynamic notifyOnAdd_dyn();

		void notifyOnInit( ::Dynamic f);
		::Dynamic notifyOnInit_dyn();

		void notifyOnRemove( ::Dynamic f);
		::Dynamic notifyOnRemove_dyn();

		void notifyOnUpdate( ::Dynamic f);
		::Dynamic notifyOnUpdate_dyn();

		void removeUpdate( ::Dynamic f);
		::Dynamic removeUpdate_dyn();

		void notifyOnLateUpdate( ::Dynamic f);
		::Dynamic notifyOnLateUpdate_dyn();

		void removeLateUpdate( ::Dynamic f);
		::Dynamic removeLateUpdate_dyn();

		void notifyOnRender( ::Dynamic f);
		::Dynamic notifyOnRender_dyn();

		void removeRender( ::Dynamic f);
		::Dynamic removeRender_dyn();

		void notifyOnRender2D( ::Dynamic f);
		::Dynamic notifyOnRender2D_dyn();

		void removeRender2D( ::Dynamic f);
		::Dynamic removeRender2D_dyn();

};

} // end namespace iron

#endif /* INCLUDED_iron_Trait */ 

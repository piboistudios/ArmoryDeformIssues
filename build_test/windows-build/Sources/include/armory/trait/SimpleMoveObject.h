// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_armory_trait_SimpleMoveObject
#define INCLUDED_armory_trait_SimpleMoveObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_iron_Trait
#include <iron/Trait.h>
#endif
HX_DECLARE_CLASS2(armory,trait,SimpleMoveObject)
HX_DECLARE_CLASS3(armory,trait,physics,RigidBody)
HX_DECLARE_CLASS1(iron,Trait)
HX_DECLARE_CLASS2(iron,math,Vec4)
HX_DECLARE_CLASS2(iron,_hx_system,Keyboard)
HX_DECLARE_CLASS2(iron,_hx_system,VirtualInput)

namespace armory{
namespace trait{


class HXCPP_CLASS_ATTRIBUTES SimpleMoveObject_obj : public  ::iron::Trait_obj
{
	public:
		typedef  ::iron::Trait_obj super;
		typedef SimpleMoveObject_obj OBJ_;
		SimpleMoveObject_obj();

	public:
		enum { _hx_ClassId = 0x7ebd37fe };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="armory.trait.SimpleMoveObject")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"armory.trait.SimpleMoveObject"); }
		static hx::ObjectPtr< SimpleMoveObject_obj > __new();
		static hx::ObjectPtr< SimpleMoveObject_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SimpleMoveObject_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("SimpleMoveObject","\xa2","\xcf","\x76","\x08"); }

		static void __boot();
		static  ::Dynamic __meta__;
		Float speed;
		 ::iron::_hx_system::Keyboard keyboard;
		 ::armory::trait::physics::RigidBody rb;
		void moveObject( ::iron::math::Vec4 vec);
		::Dynamic moveObject_dyn();

};

} // end namespace armory
} // end namespace trait

#endif /* INCLUDED_armory_trait_SimpleMoveObject */ 

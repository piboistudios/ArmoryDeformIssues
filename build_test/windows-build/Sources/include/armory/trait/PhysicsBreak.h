// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_armory_trait_PhysicsBreak
#define INCLUDED_armory_trait_PhysicsBreak

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_iron_Trait
#include <iron/Trait.h>
#endif
HX_DECLARE_CLASS2(armory,trait,PhysicsBreak)
HX_DECLARE_CLASS1(iron,Trait)

namespace armory{
namespace trait{


class HXCPP_CLASS_ATTRIBUTES PhysicsBreak_obj : public  ::iron::Trait_obj
{
	public:
		typedef  ::iron::Trait_obj super;
		typedef PhysicsBreak_obj OBJ_;
		PhysicsBreak_obj();

	public:
		enum { _hx_ClassId = 0x53fe9b8c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="armory.trait.PhysicsBreak")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"armory.trait.PhysicsBreak"); }
		static hx::ObjectPtr< PhysicsBreak_obj > __new();
		static hx::ObjectPtr< PhysicsBreak_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PhysicsBreak_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("PhysicsBreak","\x98","\x76","\x74","\x5d"); }

};

} // end namespace armory
} // end namespace trait

#endif /* INCLUDED_armory_trait_PhysicsBreak */ 

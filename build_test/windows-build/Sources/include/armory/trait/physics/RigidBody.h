// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_armory_trait_physics_RigidBody
#define INCLUDED_armory_trait_physics_RigidBody

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_iron_Trait
#include <iron/Trait.h>
#endif
HX_DECLARE_CLASS3(armory,trait,physics,RigidBody)
HX_DECLARE_CLASS1(iron,Trait)

namespace armory{
namespace trait{
namespace physics{


class HXCPP_CLASS_ATTRIBUTES RigidBody_obj : public  ::iron::Trait_obj
{
	public:
		typedef  ::iron::Trait_obj super;
		typedef RigidBody_obj OBJ_;
		RigidBody_obj();

	public:
		enum { _hx_ClassId = 0x0f348c9a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="armory.trait.physics.RigidBody")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"armory.trait.physics.RigidBody"); }
		static hx::ObjectPtr< RigidBody_obj > __new();
		static hx::ObjectPtr< RigidBody_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RigidBody_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("RigidBody","\xcd","\xc4","\xa6","\x7d"); }

};

} // end namespace armory
} // end namespace trait
} // end namespace physics

#endif /* INCLUDED_armory_trait_physics_RigidBody */ 
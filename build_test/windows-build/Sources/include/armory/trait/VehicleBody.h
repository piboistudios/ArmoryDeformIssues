// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_armory_trait_VehicleBody
#define INCLUDED_armory_trait_VehicleBody

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_iron_Trait
#include <iron/Trait.h>
#endif
HX_DECLARE_CLASS2(armory,trait,VehicleBody)
HX_DECLARE_CLASS1(iron,Trait)

namespace armory{
namespace trait{


class HXCPP_CLASS_ATTRIBUTES VehicleBody_obj : public  ::iron::Trait_obj
{
	public:
		typedef  ::iron::Trait_obj super;
		typedef VehicleBody_obj OBJ_;
		VehicleBody_obj();

	public:
		enum { _hx_ClassId = 0x1236a1da };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="armory.trait.VehicleBody")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"armory.trait.VehicleBody"); }
		static hx::ObjectPtr< VehicleBody_obj > __new();
		static hx::ObjectPtr< VehicleBody_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VehicleBody_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("VehicleBody","\x4e","\xec","\xa1","\xe6"); }

};

} // end namespace armory
} // end namespace trait

#endif /* INCLUDED_armory_trait_VehicleBody */ 

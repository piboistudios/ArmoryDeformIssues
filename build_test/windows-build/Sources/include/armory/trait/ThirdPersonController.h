// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_armory_trait_ThirdPersonController
#define INCLUDED_armory_trait_ThirdPersonController

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_armory_trait_internal_CameraController
#include <armory/trait/internal/CameraController.h>
#endif
HX_DECLARE_CLASS2(armory,trait,ThirdPersonController)
HX_DECLARE_CLASS3(armory,trait,internal,CameraController)
HX_DECLARE_CLASS1(iron,Trait)

namespace armory{
namespace trait{


class HXCPP_CLASS_ATTRIBUTES ThirdPersonController_obj : public  ::armory::trait::internal::CameraController_obj
{
	public:
		typedef  ::armory::trait::internal::CameraController_obj super;
		typedef ThirdPersonController_obj OBJ_;
		ThirdPersonController_obj();

	public:
		enum { _hx_ClassId = 0x1daa84e8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="armory.trait.ThirdPersonController")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"armory.trait.ThirdPersonController"); }
		static hx::ObjectPtr< ThirdPersonController_obj > __new();
		static hx::ObjectPtr< ThirdPersonController_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ThirdPersonController_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ThirdPersonController","\xf8","\xd5","\x38","\x39"); }

};

} // end namespace armory
} // end namespace trait

#endif /* INCLUDED_armory_trait_ThirdPersonController */ 

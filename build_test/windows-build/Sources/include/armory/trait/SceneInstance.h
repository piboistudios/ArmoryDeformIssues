// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_armory_trait_SceneInstance
#define INCLUDED_armory_trait_SceneInstance

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_iron_Trait
#include <iron/Trait.h>
#endif
HX_DECLARE_CLASS2(armory,trait,SceneInstance)
HX_DECLARE_CLASS1(iron,Trait)

namespace armory{
namespace trait{


class HXCPP_CLASS_ATTRIBUTES SceneInstance_obj : public  ::iron::Trait_obj
{
	public:
		typedef  ::iron::Trait_obj super;
		typedef SceneInstance_obj OBJ_;
		SceneInstance_obj();

	public:
		enum { _hx_ClassId = 0x00b26fd1 };

		void __construct(::String sceneName);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="armory.trait.SceneInstance")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"armory.trait.SceneInstance"); }
		static hx::ObjectPtr< SceneInstance_obj > __new(::String sceneName);
		static hx::ObjectPtr< SceneInstance_obj > __alloc(hx::Ctx *_hx_ctx,::String sceneName);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SceneInstance_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("SceneInstance","\xe1","\x30","\x01","\xef"); }

		::String safeFilename(::String s);
		::Dynamic safeFilename_dyn();

};

} // end namespace armory
} // end namespace trait

#endif /* INCLUDED_armory_trait_SceneInstance */ 

// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_armory_trait_internal_LoadingScreen
#define INCLUDED_armory_trait_internal_LoadingScreen

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(armory,trait,internal,LoadingScreen)
HX_DECLARE_CLASS2(kha,graphics2,Graphics)

namespace armory{
namespace trait{
namespace internal{


class HXCPP_CLASS_ATTRIBUTES LoadingScreen_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef LoadingScreen_obj OBJ_;
		LoadingScreen_obj();

	public:
		enum { _hx_ClassId = 0x6f740517 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="armory.trait.internal.LoadingScreen")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"armory.trait.internal.LoadingScreen"); }

		hx::ObjectPtr< LoadingScreen_obj > __new() {
			hx::ObjectPtr< LoadingScreen_obj > __this = new LoadingScreen_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< LoadingScreen_obj > __alloc(hx::Ctx *_hx_ctx) {
			LoadingScreen_obj *__this = (LoadingScreen_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(LoadingScreen_obj), false, "armory.trait.internal.LoadingScreen"));
			*(void **)__this = LoadingScreen_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LoadingScreen_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("LoadingScreen","\xe8","\xd2","\x48","\x78"); }

		static void render( ::kha::graphics2::Graphics g,int assetsLoaded,int assetsTotal);
		static ::Dynamic render_dyn();

};

} // end namespace armory
} // end namespace trait
} // end namespace internal

#endif /* INCLUDED_armory_trait_internal_LoadingScreen */ 
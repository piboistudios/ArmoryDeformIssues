// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_kha__Assets_SoundList
#define INCLUDED_kha__Assets_SoundList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS1(kha,Sound)
HX_DECLARE_CLASS2(kha,_Assets,SoundList)

namespace kha{
namespace _Assets{


class HXCPP_CLASS_ATTRIBUTES SoundList_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef SoundList_obj OBJ_;
		SoundList_obj();

	public:
		enum { _hx_ClassId = 0x33266407 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha._Assets.SoundList")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha._Assets.SoundList"); }
		static hx::ObjectPtr< SoundList_obj > __new();
		static hx::ObjectPtr< SoundList_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SoundList_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("SoundList","\xad","\xc8","\x53","\xf4"); }

		 ::kha::Sound get(::String name);
		::Dynamic get_dyn();

		::Array< ::String > names;
};

} // end namespace kha
} // end namespace _Assets

#endif /* INCLUDED_kha__Assets_SoundList */ 

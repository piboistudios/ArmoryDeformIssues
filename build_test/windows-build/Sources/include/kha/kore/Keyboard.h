// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_kha_kore_Keyboard
#define INCLUDED_kha_kore_Keyboard

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_input_Keyboard
#include <kha/input/Keyboard.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(kha,input,Keyboard)
HX_DECLARE_CLASS2(kha,kore,Keyboard)
HX_DECLARE_CLASS2(kha,network,Controller)


#include <Kore/pch.h>
#include <Kore/System.h>

namespace kha{
namespace kore{


class HXCPP_CLASS_ATTRIBUTES Keyboard_obj : public  ::kha::input::Keyboard_obj
{
	public:
		typedef  ::kha::input::Keyboard_obj super;
		typedef Keyboard_obj OBJ_;
		Keyboard_obj();

	public:
		enum { _hx_ClassId = 0x6eb26782 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.kore.Keyboard")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.kore.Keyboard"); }
		static hx::ObjectPtr< Keyboard_obj > __new();
		static hx::ObjectPtr< Keyboard_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Keyboard_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Keyboard","\xc7","\x78","\xdb","\x41"); }

		void show();

		void hide();

		void _receive( ::haxe::io::Bytes bytes);

};

} // end namespace kha
} // end namespace kore

#endif /* INCLUDED_kha_kore_Keyboard */ 

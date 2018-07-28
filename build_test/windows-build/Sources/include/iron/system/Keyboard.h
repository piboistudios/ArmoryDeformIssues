// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_iron_system_Keyboard
#define INCLUDED_iron_system_Keyboard

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_iron_system_VirtualInput
#include <iron/system/VirtualInput.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(iron,_hx_system,Keyboard)
HX_DECLARE_CLASS2(iron,_hx_system,VirtualInput)

namespace iron{
namespace _hx_system{


class HXCPP_CLASS_ATTRIBUTES Keyboard_obj : public  ::iron::_hx_system::VirtualInput_obj
{
	public:
		typedef  ::iron::_hx_system::VirtualInput_obj super;
		typedef Keyboard_obj OBJ_;
		Keyboard_obj();

	public:
		enum { _hx_ClassId = 0x128d6806 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="iron.system.Keyboard")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"iron.system.Keyboard"); }
		static hx::ObjectPtr< Keyboard_obj > __new();
		static hx::ObjectPtr< Keyboard_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Keyboard_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Keyboard","\xc7","\x78","\xdb","\x41"); }

		static void __boot();
		static ::Array< ::String > keys;
		static ::String keyCode(int key);
		static ::Dynamic keyCode_dyn();

		 ::haxe::ds::StringMap keysDown;
		 ::haxe::ds::StringMap keysStarted;
		 ::haxe::ds::StringMap keysReleased;
		::Array< ::String > keysFrame;
		void endFrame();
		::Dynamic endFrame_dyn();

		void reset();
		::Dynamic reset_dyn();

		bool down(::String key);
		::Dynamic down_dyn();

		bool started(::String key);
		::Dynamic started_dyn();

		bool released(::String key);
		::Dynamic released_dyn();

		void downListener(int code);
		::Dynamic downListener_dyn();

		void upListener(int code);
		::Dynamic upListener_dyn();

		void pressListener(::String _hx_char);
		::Dynamic pressListener_dyn();

};

} // end namespace iron
} // end namespace system

#endif /* INCLUDED_iron_system_Keyboard */ 

// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_iron_system_VirtualButton
#define INCLUDED_iron_system_VirtualButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_0070f08c40120be8_69_new)
HX_DECLARE_CLASS2(iron,_hx_system,VirtualButton)

namespace iron{
namespace _hx_system{


class HXCPP_CLASS_ATTRIBUTES VirtualButton_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef VirtualButton_obj OBJ_;
		VirtualButton_obj();

	public:
		enum { _hx_ClassId = 0x42e93666 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="iron.system.VirtualButton")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"iron.system.VirtualButton"); }

		hx::ObjectPtr< VirtualButton_obj > __new() {
			hx::ObjectPtr< VirtualButton_obj > __this = new VirtualButton_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< VirtualButton_obj > __alloc(hx::Ctx *_hx_ctx) {
			VirtualButton_obj *__this = (VirtualButton_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(VirtualButton_obj), false, "iron.system.VirtualButton"));
			*(void **)__this = VirtualButton_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_0070f08c40120be8_69_new)
HXLINE(  72)		( ( ::iron::_hx_system::VirtualButton)(__this) )->down = false;
HXLINE(  71)		( ( ::iron::_hx_system::VirtualButton)(__this) )->released = false;
HXLINE(  70)		( ( ::iron::_hx_system::VirtualButton)(__this) )->started = false;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VirtualButton_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("VirtualButton","\x3d","\x5e","\xed","\x98"); }

		bool started;
		bool released;
		bool down;
};

} // end namespace iron
} // end namespace system

#endif /* INCLUDED_iron_system_VirtualButton */ 

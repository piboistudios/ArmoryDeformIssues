// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_kha_DisplayImpl
#define INCLUDED_kha_DisplayImpl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,DisplayImpl)


namespace Kore { namespace Display {
	int count();
	int width(int);
	int height(int);
    int x(int);
    int y(int);
    bool isPrimary(int);
}}

namespace kha{


class HXCPP_CLASS_ATTRIBUTES DisplayImpl_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef DisplayImpl_obj OBJ_;
		DisplayImpl_obj();

	public:
		enum { _hx_ClassId = 0x4fe1a8be };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha.DisplayImpl")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"kha.DisplayImpl"); }

		hx::ObjectPtr< DisplayImpl_obj > __new() {
			hx::ObjectPtr< DisplayImpl_obj > __this = new DisplayImpl_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< DisplayImpl_obj > __alloc(hx::Ctx *_hx_ctx) {
			DisplayImpl_obj *__this = (DisplayImpl_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(DisplayImpl_obj), false, "kha.DisplayImpl"));
			*(void **)__this = DisplayImpl_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DisplayImpl_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("DisplayImpl","\x22","\xb6","\xdf","\x11"); }

		static int count();
		static ::Dynamic count_dyn();

		static int width(int index);
		static ::Dynamic width_dyn();

		static int height(int index);
		static ::Dynamic height_dyn();

		static int x(int index);
		static ::Dynamic x_dyn();

		static int y(int index);
		static ::Dynamic y_dyn();

		static bool isPrimary(int index);
		static ::Dynamic isPrimary_dyn();

};

} // end namespace kha

#endif /* INCLUDED_kha_DisplayImpl */ 

// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_kha_Display
#define INCLUDED_kha_Display

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Display)

namespace kha{


class HXCPP_CLASS_ATTRIBUTES Display_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Display_obj OBJ_;
		Display_obj();

	public:
		enum { _hx_ClassId = 0x3981cd22 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha.Display")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"kha.Display"); }

		hx::ObjectPtr< Display_obj > __new() {
			hx::ObjectPtr< Display_obj > __this = new Display_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Display_obj > __alloc(hx::Ctx *_hx_ctx) {
			Display_obj *__this = (Display_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Display_obj), false, "kha.Display"));
			*(void **)__this = Display_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Display_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Display","\x22","\x52","\x9b","\x88"); }

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

		static int get_count();
		static ::Dynamic get_count_dyn();

};

} // end namespace kha

#endif /* INCLUDED_kha_Display */ 

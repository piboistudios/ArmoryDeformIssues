// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_kha_graphics2_truetype_Stbtt__point
#define INCLUDED_kha_graphics2_truetype_Stbtt__point

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_82b7448f9e6055be_176_new)
HX_DECLARE_CLASS3(kha,graphics2,truetype,Stbtt__point)

namespace kha{
namespace graphics2{
namespace truetype{


class HXCPP_CLASS_ATTRIBUTES Stbtt__point_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Stbtt__point_obj OBJ_;
		Stbtt__point_obj();

	public:
		enum { _hx_ClassId = 0x44459c9e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha.graphics2.truetype.Stbtt__point")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"kha.graphics2.truetype.Stbtt__point"); }

		hx::ObjectPtr< Stbtt__point_obj > __new() {
			hx::ObjectPtr< Stbtt__point_obj > __this = new Stbtt__point_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Stbtt__point_obj > __alloc(hx::Ctx *_hx_ctx) {
			Stbtt__point_obj *__this = (Stbtt__point_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Stbtt__point_obj), false, "kha.graphics2.truetype.Stbtt__point"));
			*(void **)__this = Stbtt__point_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_82b7448f9e6055be_176_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Stbtt__point_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Stbtt__point","\x0f","\x5f","\x88","\x03"); }

		Float x;
		Float y;
};

} // end namespace kha
} // end namespace graphics2
} // end namespace truetype

#endif /* INCLUDED_kha_graphics2_truetype_Stbtt__point */ 

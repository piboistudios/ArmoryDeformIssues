// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_aligned_quad
#define INCLUDED_kha_graphics2_truetype_Stbtt_aligned_quad

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(kha,graphics2,truetype,Stbtt_aligned_quad)

namespace kha{
namespace graphics2{
namespace truetype{


class HXCPP_CLASS_ATTRIBUTES Stbtt_aligned_quad_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Stbtt_aligned_quad_obj OBJ_;
		Stbtt_aligned_quad_obj();

	public:
		enum { _hx_ClassId = 0x74f9d22b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha.graphics2.truetype.Stbtt_aligned_quad")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"kha.graphics2.truetype.Stbtt_aligned_quad"); }

		hx::ObjectPtr< Stbtt_aligned_quad_obj > __new() {
			hx::ObjectPtr< Stbtt_aligned_quad_obj > __this = new Stbtt_aligned_quad_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Stbtt_aligned_quad_obj > __alloc(hx::Ctx *_hx_ctx) {
			Stbtt_aligned_quad_obj *__this = (Stbtt_aligned_quad_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Stbtt_aligned_quad_obj), false, "kha.graphics2.truetype.Stbtt_aligned_quad"));
			*(void **)__this = Stbtt_aligned_quad_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Stbtt_aligned_quad_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Stbtt_aligned_quad","\xc0","\x95","\xc8","\x22"); }

		Float x0;
		Float y0;
		Float s0;
		Float t0;
		Float x1;
		Float y1;
		Float s1;
		Float t1;
};

} // end namespace kha
} // end namespace graphics2
} // end namespace truetype

#endif /* INCLUDED_kha_graphics2_truetype_Stbtt_aligned_quad */ 
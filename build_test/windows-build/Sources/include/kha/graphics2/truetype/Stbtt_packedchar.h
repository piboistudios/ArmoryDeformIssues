// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_kha_graphics2_truetype_Stbtt_packedchar
#define INCLUDED_kha_graphics2_truetype_Stbtt_packedchar

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(kha,graphics2,truetype,Stbtt_packedchar)

namespace kha{
namespace graphics2{
namespace truetype{


class HXCPP_CLASS_ATTRIBUTES Stbtt_packedchar_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Stbtt_packedchar_obj OBJ_;
		Stbtt_packedchar_obj();

	public:
		enum { _hx_ClassId = 0x464d7ddb };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha.graphics2.truetype.Stbtt_packedchar")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"kha.graphics2.truetype.Stbtt_packedchar"); }

		hx::ObjectPtr< Stbtt_packedchar_obj > __new() {
			hx::ObjectPtr< Stbtt_packedchar_obj > __this = new Stbtt_packedchar_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Stbtt_packedchar_obj > __alloc(hx::Ctx *_hx_ctx) {
			Stbtt_packedchar_obj *__this = (Stbtt_packedchar_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Stbtt_packedchar_obj), false, "kha.graphics2.truetype.Stbtt_packedchar"));
			*(void **)__this = Stbtt_packedchar_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Stbtt_packedchar_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Stbtt_packedchar","\xcc","\xcc","\x60","\x9b"); }

		int x0;
		int y0;
		int x1;
		int y1;
		Float xoff;
		Float yoff;
		Float xadvance;
		Float xoff2;
		Float yoff2;
};

} // end namespace kha
} // end namespace graphics2
} // end namespace truetype

#endif /* INCLUDED_kha_graphics2_truetype_Stbtt_packedchar */ 

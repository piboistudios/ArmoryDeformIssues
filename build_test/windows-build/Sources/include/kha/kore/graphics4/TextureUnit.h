// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_kha_kore_graphics4_TextureUnit
#define INCLUDED_kha_kore_graphics4_TextureUnit

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_graphics4_TextureUnit
#include <kha/graphics4/TextureUnit.h>
#endif
HX_DECLARE_CLASS2(kha,graphics4,TextureUnit)
HX_DECLARE_CLASS3(kha,kore,graphics4,TextureUnit)


#include <Kore/pch.h>
#include <Kore/Graphics4/Graphics.h>

namespace kha{
namespace kore{
namespace graphics4{


class HXCPP_CLASS_ATTRIBUTES TextureUnit_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef TextureUnit_obj OBJ_;
		TextureUnit_obj();

	public:
		enum { _hx_ClassId = 0x5f265b71 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha.kore.graphics4.TextureUnit")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"kha.kore.graphics4.TextureUnit"); }
		static hx::ObjectPtr< TextureUnit_obj > __new();
		static hx::ObjectPtr< TextureUnit_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextureUnit_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("TextureUnit","\xdf","\x60","\x5b","\xe8"); }

Kore::Graphics4::TextureUnit unit;
};

} // end namespace kha
} // end namespace kore
} // end namespace graphics4

#endif /* INCLUDED_kha_kore_graphics4_TextureUnit */ 

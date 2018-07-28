// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_kha_graphics4_GeometryShader
#define INCLUDED_kha_graphics4_GeometryShader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS2(kha,graphics4,GeometryShader)
HX_DECLARE_CLASS2(kha,internal,BytesBlob)


#include <Kore/pch.h>
#include <Kore/Graphics4/Graphics.h>

namespace kha{
namespace graphics4{


class HXCPP_CLASS_ATTRIBUTES GeometryShader_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef GeometryShader_obj OBJ_;
		GeometryShader_obj();

	public:
		enum { _hx_ClassId = 0x763a44fc };

		void __construct(::Array< ::Dynamic> sources,::Array< ::String > files);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha.graphics4.GeometryShader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"kha.graphics4.GeometryShader"); }
		static hx::ObjectPtr< GeometryShader_obj > __new(::Array< ::Dynamic> sources,::Array< ::String > files);
		static hx::ObjectPtr< GeometryShader_obj > __alloc(hx::Ctx *_hx_ctx,::Array< ::Dynamic> sources,::Array< ::String > files);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GeometryShader_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("GeometryShader","\x97","\xdb","\x4d","\xc8"); }

		void init( ::kha::internal::BytesBlob source,::String file);
		::Dynamic init_dyn();

		void _hx_delete();
		::Dynamic _hx_delete_dyn();

Kore::Graphics4::Shader* shader;
};

} // end namespace kha
} // end namespace graphics4

#endif /* INCLUDED_kha_graphics4_GeometryShader */ 

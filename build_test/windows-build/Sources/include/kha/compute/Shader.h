// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_kha_compute_Shader
#define INCLUDED_kha_compute_Shader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS2(kha,compute,ConstantLocation)
HX_DECLARE_CLASS2(kha,compute,Shader)
HX_DECLARE_CLASS2(kha,compute,TextureUnit)
HX_DECLARE_CLASS2(kha,internal,BytesBlob)


#include <Kore/pch.h>
#include <Kore/Compute/Compute.h>

namespace kha{
namespace compute{


class HXCPP_CLASS_ATTRIBUTES Shader_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Shader_obj OBJ_;
		Shader_obj();

	public:
		enum { _hx_ClassId = 0x0e347d18 };

		void __construct(::Array< ::Dynamic> sources,::Array< ::String > files);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha.compute.Shader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"kha.compute.Shader"); }
		static hx::ObjectPtr< Shader_obj > __new(::Array< ::Dynamic> sources,::Array< ::String > files);
		static hx::ObjectPtr< Shader_obj > __alloc(hx::Ctx *_hx_ctx,::Array< ::Dynamic> sources,::Array< ::String > files);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Shader_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Shader","\x45","\x33","\xb5","\x51"); }

		void init( ::kha::internal::BytesBlob source,::String file);
		::Dynamic init_dyn();

		void _hx_delete();
		::Dynamic _hx_delete_dyn();

		 ::kha::compute::ConstantLocation getConstantLocation(::String name);
		::Dynamic getConstantLocation_dyn();

		void initConstantLocation( ::kha::compute::ConstantLocation location,::String name);
		::Dynamic initConstantLocation_dyn();

		 ::kha::compute::TextureUnit getTextureUnit(::String name);
		::Dynamic getTextureUnit_dyn();

		void initTextureUnit( ::kha::compute::TextureUnit unit,::String name);
		::Dynamic initTextureUnit_dyn();

Kore::ComputeShader* shader;
};

} // end namespace kha
} // end namespace compute

#endif /* INCLUDED_kha_compute_Shader */ 

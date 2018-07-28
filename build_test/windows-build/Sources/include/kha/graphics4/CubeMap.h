// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_kha_graphics4_CubeMap
#define INCLUDED_kha_graphics4_CubeMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
#ifndef INCLUDED_kha_Canvas
#include <kha/Canvas.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS2(kha,graphics1,Graphics)
HX_DECLARE_CLASS2(kha,graphics2,Graphics)
HX_DECLARE_CLASS2(kha,graphics4,CubeMap)
HX_DECLARE_CLASS2(kha,graphics4,Graphics)
HX_DECLARE_CLASS2(kha,graphics4,TextureFormat)


#include <Kore/pch.h>
#include <Kore/Graphics4/Graphics.h>

namespace kha{
namespace graphics4{


class HXCPP_CLASS_ATTRIBUTES CubeMap_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef CubeMap_obj OBJ_;
		CubeMap_obj();

	public:
		enum { _hx_ClassId = 0x098c5082 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.graphics4.CubeMap")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.graphics4.CubeMap"); }
		static hx::ObjectPtr< CubeMap_obj > __new();
		static hx::ObjectPtr< CubeMap_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CubeMap_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("CubeMap","\x87","\x74","\x21","\x5a"); }

		static  ::kha::graphics4::CubeMap createRenderTarget(int size, ::kha::graphics4::TextureFormat format, ::Dynamic depthStencil,hx::Null< int >  contextId);
		static ::Dynamic createRenderTarget_dyn();

		static  ::kha::graphics4::CubeMap create2(int size, ::kha::graphics4::TextureFormat format,bool readable,bool renderTarget,int depthStencil,int contextId);
		static ::Dynamic create2_dyn();

		static int getRenderTargetFormat( ::kha::graphics4::TextureFormat format);
		static ::Dynamic getRenderTargetFormat_dyn();

		static int getDepthBufferBits(int depthAndStencil);
		static ::Dynamic getDepthBufferBits_dyn();

		static int getStencilBufferBits(int depthAndStencil);
		static ::Dynamic getStencilBufferBits_dyn();

		static int getTextureFormat( ::kha::graphics4::TextureFormat format);
		static ::Dynamic getTextureFormat_dyn();

		 ::kha::graphics4::TextureFormat format;
		::Dynamic graphics4;
		void initRenderTarget(int cubeMapSize,int depthBufferBits,int format,int stencilBufferBits,int contextId);
		::Dynamic initRenderTarget_dyn();

		void unload();
		::Dynamic unload_dyn();

		 ::haxe::io::Bytes lock(hx::Null< int >  level);
		::Dynamic lock_dyn();

		void unlock();
		::Dynamic unlock_dyn();

		int width;
		int height;
		int get_width();
		::Dynamic get_width_dyn();

		int get_height();
		::Dynamic get_height_dyn();

		::Dynamic g1;
		::Dynamic get_g1();
		::Dynamic get_g1_dyn();

		 ::kha::graphics2::Graphics g2;
		 ::kha::graphics2::Graphics get_g2();
		::Dynamic get_g2_dyn();

		::Dynamic g4;
		::Dynamic get_g4();
		::Dynamic get_g4_dyn();

Kore::Graphics4::Texture* texture; Kore::Graphics4::RenderTarget* renderTarget;
};

} // end namespace kha
} // end namespace graphics4

#endif /* INCLUDED_kha_graphics4_CubeMap */ 

// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_kha_graphics4_ImageShaderPainter
#define INCLUDED_kha_graphics4_ImageShaderPainter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Image)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS2(kha,arrays,Float32ArrayPrivate)
HX_DECLARE_CLASS2(kha,graphics4,BlendingFactor)
HX_DECLARE_CLASS2(kha,graphics4,ConstantLocation)
HX_DECLARE_CLASS2(kha,graphics4,Graphics)
HX_DECLARE_CLASS2(kha,graphics4,ImageShaderPainter)
HX_DECLARE_CLASS2(kha,graphics4,IndexBuffer)
HX_DECLARE_CLASS2(kha,graphics4,PipelineState)
HX_DECLARE_CLASS2(kha,graphics4,PipelineStateBase)
HX_DECLARE_CLASS2(kha,graphics4,TextureUnit)
HX_DECLARE_CLASS2(kha,graphics4,VertexBuffer)
HX_DECLARE_CLASS2(kha,graphics4,VertexStructure)
HX_DECLARE_CLASS2(kha,math,FastMatrix4)

namespace kha{
namespace graphics4{


class HXCPP_CLASS_ATTRIBUTES ImageShaderPainter_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ImageShaderPainter_obj OBJ_;
		ImageShaderPainter_obj();

	public:
		enum { _hx_ClassId = 0x032f9290 };

		void __construct(::Dynamic g4);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.graphics4.ImageShaderPainter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.graphics4.ImageShaderPainter"); }
		static hx::ObjectPtr< ImageShaderPainter_obj > __new(::Dynamic g4);
		static hx::ObjectPtr< ImageShaderPainter_obj > __alloc(hx::Ctx *_hx_ctx,::Dynamic g4);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ImageShaderPainter_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ImageShaderPainter","\xab","\x12","\xe2","\xb4"); }

		static void __boot();
		static  ::kha::graphics4::PipelineState shaderPipeline;
		static  ::kha::graphics4::VertexStructure structure;
		static int bufferSize;
		static int vertexSize;
		static int bufferIndex;
		static  ::kha::graphics4::VertexBuffer rectVertexBuffer;
		static  ::kha::arrays::Float32ArrayPrivate rectVertices;
		static  ::kha::graphics4::IndexBuffer indexBuffer;
		static  ::kha::Image lastTexture;
		static void initShaders();
		static ::Dynamic initShaders_dyn();

		 ::kha::math::FastMatrix4 projectionMatrix;
		bool bilinear;
		bool bilinearMipmaps;
		::Dynamic g;
		 ::kha::graphics4::PipelineState myPipeline;
		::Dynamic projectionLocation;
		::Dynamic textureLocation;
		 ::kha::graphics4::BlendingFactor sourceBlend;
		 ::kha::graphics4::BlendingFactor destinationBlend;
		 ::kha::graphics4::PipelineState get_pipeline();
		::Dynamic get_pipeline_dyn();

		 ::kha::graphics4::PipelineState set_pipeline( ::kha::graphics4::PipelineState pipe);
		::Dynamic set_pipeline_dyn();

		void setProjection( ::kha::math::FastMatrix4 projectionMatrix);
		::Dynamic setProjection_dyn();

		void initBuffers();
		::Dynamic initBuffers_dyn();

		void setRectVertices(float bottomleftx,float bottomlefty,float topleftx,float toplefty,float toprightx,float toprighty,float bottomrightx,float bottomrighty);
		::Dynamic setRectVertices_dyn();

		void setRectTexCoords(float left,float top,float right,float bottom);
		::Dynamic setRectTexCoords_dyn();

		void setRectColor(float r,float g,float b,float a);
		::Dynamic setRectColor_dyn();

		void drawBuffer();
		::Dynamic drawBuffer_dyn();

		void setBilinearFilter(bool bilinear);
		::Dynamic setBilinearFilter_dyn();

		void setBilinearMipmapFilter(bool bilinear);
		::Dynamic setBilinearMipmapFilter_dyn();

		void drawImage( ::kha::Image img,float bottomleftx,float bottomlefty,float topleftx,float toplefty,float toprightx,float toprighty,float bottomrightx,float bottomrighty,float opacity,int color);
		::Dynamic drawImage_dyn();

		void drawImage2( ::kha::Image img,float sx,float sy,float sw,float sh,float bottomleftx,float bottomlefty,float topleftx,float toplefty,float toprightx,float toprighty,float bottomrightx,float bottomrighty,float opacity,int color);
		::Dynamic drawImage2_dyn();

		void drawImageScale( ::kha::Image img,float sx,float sy,float sw,float sh,float left,float top,float right,float bottom,float opacity,int color);
		::Dynamic drawImageScale_dyn();

		void end();
		::Dynamic end_dyn();

};

} // end namespace kha
} // end namespace graphics4

#endif /* INCLUDED_kha_graphics4_ImageShaderPainter */ 

// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_kha_graphics4_PipelineStateBase
#define INCLUDED_kha_graphics4_PipelineStateBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,graphics4,BlendingFactor)
HX_DECLARE_CLASS2(kha,graphics4,BlendingOperation)
HX_DECLARE_CLASS2(kha,graphics4,CompareMode)
HX_DECLARE_CLASS2(kha,graphics4,CullMode)
HX_DECLARE_CLASS2(kha,graphics4,FragmentShader)
HX_DECLARE_CLASS2(kha,graphics4,GeometryShader)
HX_DECLARE_CLASS2(kha,graphics4,PipelineStateBase)
HX_DECLARE_CLASS2(kha,graphics4,StencilAction)
HX_DECLARE_CLASS2(kha,graphics4,TessellationControlShader)
HX_DECLARE_CLASS2(kha,graphics4,TessellationEvaluationShader)
HX_DECLARE_CLASS2(kha,graphics4,VertexShader)
HX_DECLARE_CLASS2(kha,graphics4,VertexStructure)

namespace kha{
namespace graphics4{


class HXCPP_CLASS_ATTRIBUTES PipelineStateBase_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef PipelineStateBase_obj OBJ_;
		PipelineStateBase_obj();

	public:
		enum { _hx_ClassId = 0x7a5f9adb };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.graphics4.PipelineStateBase")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.graphics4.PipelineStateBase"); }
		static hx::ObjectPtr< PipelineStateBase_obj > __new();
		static hx::ObjectPtr< PipelineStateBase_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PipelineStateBase_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("PipelineStateBase","\x20","\xd7","\xa1","\x02"); }

		::Array< ::Dynamic> inputLayout;
		 ::kha::graphics4::VertexShader vertexShader;
		 ::kha::graphics4::FragmentShader fragmentShader;
		 ::kha::graphics4::GeometryShader geometryShader;
		 ::kha::graphics4::TessellationControlShader tessellationControlShader;
		 ::kha::graphics4::TessellationEvaluationShader tessellationEvaluationShader;
		 ::kha::graphics4::CullMode cullMode;
		bool depthWrite;
		 ::kha::graphics4::CompareMode depthMode;
		 ::kha::graphics4::CompareMode stencilMode;
		 ::kha::graphics4::StencilAction stencilBothPass;
		 ::kha::graphics4::StencilAction stencilDepthFail;
		 ::kha::graphics4::StencilAction stencilFail;
		int stencilReferenceValue;
		int stencilReadMask;
		int stencilWriteMask;
		 ::kha::graphics4::BlendingFactor blendSource;
		 ::kha::graphics4::BlendingFactor blendDestination;
		 ::kha::graphics4::BlendingOperation blendOperation;
		 ::kha::graphics4::BlendingFactor alphaBlendSource;
		 ::kha::graphics4::BlendingFactor alphaBlendDestination;
		 ::kha::graphics4::BlendingOperation alphaBlendOperation;
		bool colorWriteMaskRed;
		bool colorWriteMaskGreen;
		bool colorWriteMaskBlue;
		bool colorWriteMaskAlpha;
		bool set_colorWriteMask(bool value);
		::Dynamic set_colorWriteMask_dyn();

		bool conservativeRasterization;
};

} // end namespace kha
} // end namespace graphics4

#endif /* INCLUDED_kha_graphics4_PipelineStateBase */ 
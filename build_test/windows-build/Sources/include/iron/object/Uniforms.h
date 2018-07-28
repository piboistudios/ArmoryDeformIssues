// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_iron_object_Uniforms
#define INCLUDED_iron_object_Uniforms

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(iron,RenderTarget)
HX_DECLARE_CLASS2(iron,data,MaterialContext)
HX_DECLARE_CLASS2(iron,data,ShaderContext)
HX_DECLARE_CLASS2(iron,math,Mat3)
HX_DECLARE_CLASS2(iron,math,Mat4)
HX_DECLARE_CLASS2(iron,math,Quat)
HX_DECLARE_CLASS2(iron,math,Vec4)
HX_DECLARE_CLASS2(iron,object,CameraObject)
HX_DECLARE_CLASS2(iron,object,LampObject)
HX_DECLARE_CLASS2(iron,object,Object)
HX_DECLARE_CLASS2(iron,object,Uniforms)
HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Image)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS2(kha,arrays,Float32ArrayPrivate)
HX_DECLARE_CLASS2(kha,graphics4,ConstantLocation)
HX_DECLARE_CLASS2(kha,graphics4,Graphics)

namespace iron{
namespace object{


class HXCPP_CLASS_ATTRIBUTES Uniforms_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Uniforms_obj OBJ_;
		Uniforms_obj();

	public:
		enum { _hx_ClassId = 0x19e66d26 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="iron.object.Uniforms")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"iron.object.Uniforms"); }

		hx::ObjectPtr< Uniforms_obj > __new() {
			hx::ObjectPtr< Uniforms_obj > __this = new Uniforms_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Uniforms_obj > __alloc(hx::Ctx *_hx_ctx) {
			Uniforms_obj *__this = (Uniforms_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Uniforms_obj), false, "iron.object.Uniforms"));
			*(void **)__this = Uniforms_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Uniforms_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Uniforms","\xdf","\x88","\x06","\xdc"); }

		static void __boot();
		static  ::iron::math::Mat4 biasMat;
		static  ::iron::math::Mat4 helpMat;
		static  ::iron::math::Mat4 helpMat2;
		static  ::iron::math::Mat3 helpMat3;
		static  ::iron::math::Vec4 helpVec;
		static  ::iron::math::Vec4 helpVec2;
		static  ::iron::math::Quat helpQuat;
		static ::Array< ::Dynamic> externalTextureLinks;
		static ::Array< ::Dynamic> externalMat4Links;
		static ::Array< ::Dynamic> externalVec4Links;
		static ::Array< ::Dynamic> externalVec3Links;
		static ::Array< ::Dynamic> externalVec2Links;
		static ::Array< ::Dynamic> externalFloatLinks;
		static ::Array< ::Dynamic> externalFloatsLinks;
		static ::Array< ::Dynamic> externalIntLinks;
		static void setConstants(::Dynamic g, ::iron::data::ShaderContext context, ::iron::object::Object object, ::iron::object::CameraObject camera, ::iron::object::LampObject lamp,::Array< ::String > bindParams);
		static ::Dynamic setConstants_dyn();

		static void bindRenderTarget(::Dynamic g, ::iron::RenderTarget rt, ::iron::data::ShaderContext context,::String samplerID,bool attachDepth);
		static ::Dynamic bindRenderTarget_dyn();

		static void setConstant(::Dynamic g, ::iron::object::Object object, ::iron::object::CameraObject camera, ::iron::object::LampObject lamp,::Dynamic location, ::Dynamic c);
		static ::Dynamic setConstant_dyn();

		static void setMaterialConstants(::Dynamic g, ::iron::data::ShaderContext context, ::iron::data::MaterialContext materialContext);
		static ::Dynamic setMaterialConstants_dyn();

		static void setMaterialConstant(::Dynamic g,::Dynamic location, ::Dynamic c, ::Dynamic matc);
		static ::Dynamic setMaterialConstant_dyn();

};

} // end namespace iron
} // end namespace object

#endif /* INCLUDED_iron_object_Uniforms */ 
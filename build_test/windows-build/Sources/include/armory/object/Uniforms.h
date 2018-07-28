// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_armory_object_Uniforms
#define INCLUDED_armory_object_Uniforms

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(armory,object,Uniforms)
HX_DECLARE_CLASS2(iron,math,Vec4)
HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Image)
HX_DECLARE_CLASS1(kha,Resource)

namespace armory{
namespace object{


class HXCPP_CLASS_ATTRIBUTES Uniforms_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Uniforms_obj OBJ_;
		Uniforms_obj();

	public:
		enum { _hx_ClassId = 0x5a898178 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="armory.object.Uniforms")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"armory.object.Uniforms"); }

		hx::ObjectPtr< Uniforms_obj > __new() {
			hx::ObjectPtr< Uniforms_obj > __this = new Uniforms_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Uniforms_obj > __alloc(hx::Ctx *_hx_ctx) {
			Uniforms_obj *__this = (Uniforms_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Uniforms_obj), false, "armory.object.Uniforms"));
			*(void **)__this = Uniforms_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Uniforms_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Uniforms","\xdf","\x88","\x06","\xdc"); }

		static void _hx_register();
		static ::Dynamic _hx_register_dyn();

		static  ::kha::Image externalTextureLink(::String tulink);
		static ::Dynamic externalTextureLink_dyn();

		static  ::iron::math::Vec4 externalVec3Link(::String clink);
		static ::Dynamic externalVec3Link_dyn();

		static float externalFloatLink(::String clink);
		static ::Dynamic externalFloatLink_dyn();

};

} // end namespace armory
} // end namespace object

#endif /* INCLUDED_armory_object_Uniforms */ 
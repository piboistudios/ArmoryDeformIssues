// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_iron_CachedShaderContext
#define INCLUDED_iron_CachedShaderContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_462df1750a12e2a8_792_new)
HX_DECLARE_CLASS1(iron,CachedShaderContext)
HX_DECLARE_CLASS2(iron,data,ShaderContext)

namespace iron{


class HXCPP_CLASS_ATTRIBUTES CachedShaderContext_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef CachedShaderContext_obj OBJ_;
		CachedShaderContext_obj();

	public:
		enum { _hx_ClassId = 0x548686e0 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="iron.CachedShaderContext")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"iron.CachedShaderContext"); }

		hx::ObjectPtr< CachedShaderContext_obj > __new() {
			hx::ObjectPtr< CachedShaderContext_obj > __this = new CachedShaderContext_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< CachedShaderContext_obj > __alloc(hx::Ctx *_hx_ctx) {
			CachedShaderContext_obj *__this = (CachedShaderContext_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CachedShaderContext_obj), true, "iron.CachedShaderContext"));
			*(void **)__this = CachedShaderContext_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_462df1750a12e2a8_792_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CachedShaderContext_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("CachedShaderContext","\xe8","\xff","\x27","\x8a"); }

		 ::iron::data::ShaderContext context;
};

} // end namespace iron

#endif /* INCLUDED_iron_CachedShaderContext */ 

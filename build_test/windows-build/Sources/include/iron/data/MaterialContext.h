// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_iron_data_MaterialContext
#define INCLUDED_iron_data_MaterialContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(iron,data,MaterialContext)
HX_DECLARE_CLASS2(iron,data,ShaderContext)
HX_DECLARE_CLASS1(kha,Canvas)
HX_DECLARE_CLASS1(kha,Image)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS2(kha,graphics4,Graphics)

namespace iron{
namespace data{


class HXCPP_CLASS_ATTRIBUTES MaterialContext_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef MaterialContext_obj OBJ_;
		MaterialContext_obj();

	public:
		enum { _hx_ClassId = 0x0b415ad2 };

		void __construct( ::Dynamic raw, ::Dynamic done);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="iron.data.MaterialContext")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"iron.data.MaterialContext"); }
		static hx::ObjectPtr< MaterialContext_obj > __new( ::Dynamic raw, ::Dynamic done);
		static hx::ObjectPtr< MaterialContext_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic raw, ::Dynamic done);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MaterialContext_obj();

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
		::String __ToString() const { return HX_HCSTRING("MaterialContext","\xe8","\x5b","\x3b","\x56"); }

		static void __boot();
		static int num;
		 ::Dynamic raw;
		::Array< ::Dynamic> textures;
		int id;
		void setTextureParameters(::Dynamic g,int textureIndex, ::iron::data::ShaderContext context,int unitIndex);
		::Dynamic setTextureParameters_dyn();

};

} // end namespace iron
} // end namespace data

#endif /* INCLUDED_iron_data_MaterialContext */ 

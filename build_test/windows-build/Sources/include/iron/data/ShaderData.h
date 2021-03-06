// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_iron_data_ShaderData
#define INCLUDED_iron_data_ShaderData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_iron_data_Data
#include <iron/data/Data.h>
#endif
HX_DECLARE_CLASS2(iron,data,Data)
HX_DECLARE_CLASS2(iron,data,ShaderContext)
HX_DECLARE_CLASS2(iron,data,ShaderData)

namespace iron{
namespace data{


class HXCPP_CLASS_ATTRIBUTES ShaderData_obj : public  ::iron::data::Data_obj
{
	public:
		typedef  ::iron::data::Data_obj super;
		typedef ShaderData_obj OBJ_;
		ShaderData_obj();

	public:
		enum { _hx_ClassId = 0x12d552f5 };

		void __construct( ::Dynamic raw, ::Dynamic overrideContext, ::Dynamic done);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="iron.data.ShaderData")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"iron.data.ShaderData"); }
		static hx::ObjectPtr< ShaderData_obj > __new( ::Dynamic raw, ::Dynamic overrideContext, ::Dynamic done);
		static hx::ObjectPtr< ShaderData_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic raw, ::Dynamic overrideContext, ::Dynamic done);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ShaderData_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ShaderData","\x0f","\x3c","\xad","\x27"); }

		static void parse(::String file,::String name, ::Dynamic overrideContext, ::Dynamic done);
		static ::Dynamic parse_dyn();

		::String name;
		 ::Dynamic raw;
		::Array< ::Dynamic> contexts;
		void _hx_delete();
		::Dynamic _hx_delete_dyn();

		 ::iron::data::ShaderContext getContext(::String name);
		::Dynamic getContext_dyn();

};

} // end namespace iron
} // end namespace data

#endif /* INCLUDED_iron_data_ShaderData */ 

// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_kha_network_State
#define INCLUDED_kha_network_State

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(kha,network,State)

namespace kha{
namespace network{


class HXCPP_CLASS_ATTRIBUTES State_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef State_obj OBJ_;
		State_obj();

	public:
		enum { _hx_ClassId = 0x7fdeba3f };

		void __construct(Float time, ::haxe::io::Bytes data);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.network.State")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.network.State"); }
		static hx::ObjectPtr< State_obj > __new(Float time, ::haxe::io::Bytes data);
		static hx::ObjectPtr< State_obj > __alloc(hx::Ctx *_hx_ctx,Float time, ::haxe::io::Bytes data);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~State_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("State","\xf1","\xe5","\x38","\x17"); }

		Float time;
		 ::haxe::io::Bytes data;
};

} // end namespace kha
} // end namespace network

#endif /* INCLUDED_kha_network_State */ 

// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_kha_network_Controller
#define INCLUDED_kha_network_Controller

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(kha,network,Controller)

namespace kha{
namespace network{


class HXCPP_CLASS_ATTRIBUTES Controller_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Controller_obj OBJ_;
		Controller_obj();

	public:
		enum { _hx_ClassId = 0x473abfc6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.network.Controller")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.network.Controller"); }
		static hx::ObjectPtr< Controller_obj > __new();
		static hx::ObjectPtr< Controller_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Controller_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Controller","\xbc","\x9c","\x6f","\xfb"); }

		int _hx___id;
		int _inputBufferIndex;
		 ::haxe::io::Bytes _inputBuffer;
		int _id();
		::Dynamic _id_dyn();

		virtual void _receive( ::haxe::io::Bytes bytes);
		::Dynamic _receive_dyn();

};

} // end namespace kha
} // end namespace network

#endif /* INCLUDED_kha_network_Controller */ 
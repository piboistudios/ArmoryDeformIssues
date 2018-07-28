// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_kha_graphics4_IndexBuffer
#define INCLUDED_kha_graphics4_IndexBuffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,arrays,Uint32ArrayPrivate)
HX_DECLARE_CLASS2(kha,graphics4,IndexBuffer)
HX_DECLARE_CLASS2(kha,graphics4,Usage)


#include <Kore/pch.h>
#include <Kore/Graphics4/Graphics.h>

namespace kha{
namespace graphics4{


class HXCPP_CLASS_ATTRIBUTES IndexBuffer_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef IndexBuffer_obj OBJ_;
		IndexBuffer_obj();

	public:
		enum { _hx_ClassId = 0x3c96bd29 };

		void __construct(int indexCount, ::kha::graphics4::Usage usage,hx::Null< bool >  __o_canRead);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.graphics4.IndexBuffer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.graphics4.IndexBuffer"); }
		static hx::ObjectPtr< IndexBuffer_obj > __new(int indexCount, ::kha::graphics4::Usage usage,hx::Null< bool >  __o_canRead);
		static hx::ObjectPtr< IndexBuffer_obj > __alloc(hx::Ctx *_hx_ctx,int indexCount, ::kha::graphics4::Usage usage,hx::Null< bool >  __o_canRead);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~IndexBuffer_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("IndexBuffer","\x92","\xfd","\xd8","\xd9"); }

		 ::kha::arrays::Uint32ArrayPrivate data;
		int myCount;
		void _hx_delete();
		::Dynamic _hx_delete_dyn();

		 ::kha::arrays::Uint32ArrayPrivate lock2(int start,int count);
		::Dynamic lock2_dyn();

		 ::kha::arrays::Uint32ArrayPrivate lock( ::Dynamic start, ::Dynamic count);
		::Dynamic lock_dyn();

		void unlock();
		::Dynamic unlock_dyn();

		int count();
		::Dynamic count_dyn();

Kore::Graphics4::IndexBuffer* buffer;
};

} // end namespace kha
} // end namespace graphics4

#endif /* INCLUDED_kha_graphics4_IndexBuffer */ 

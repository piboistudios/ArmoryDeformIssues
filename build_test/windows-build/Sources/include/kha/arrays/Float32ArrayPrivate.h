// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_kha_arrays_Float32ArrayPrivate
#define INCLUDED_kha_arrays_Float32ArrayPrivate

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_c5728fd05c542abe
#define INCLUDED_c5728fd05c542abe
#include "cpp_float32array.h"
#endif
HX_DECLARE_CLASS2(kha,arrays,Float32ArrayPrivate)

namespace kha{
namespace arrays{


class HXCPP_CLASS_ATTRIBUTES Float32ArrayPrivate_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Float32ArrayPrivate_obj OBJ_;
		Float32ArrayPrivate_obj();

	public:
		enum { _hx_ClassId = 0x14447f07 };

		void __construct(hx::Null< int >  __o_elements);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.arrays.Float32ArrayPrivate")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.arrays.Float32ArrayPrivate"); }
		static hx::ObjectPtr< Float32ArrayPrivate_obj > __new(hx::Null< int >  __o_elements);
		static hx::ObjectPtr< Float32ArrayPrivate_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< int >  __o_elements);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Float32ArrayPrivate_obj();

		HX_DO_RTTI_ALL;
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Float32ArrayPrivate","\x25","\x7e","\xb9","\x51"); }

		 float32array self;
};

} // end namespace kha
} // end namespace arrays

#endif /* INCLUDED_kha_arrays_Float32ArrayPrivate */ 

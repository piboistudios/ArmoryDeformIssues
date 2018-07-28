// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_kha_internal_BytesBlob
#define INCLUDED_kha_internal_BytesBlob

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_Resource
#include <kha/Resource.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS1(kha,Resource)
HX_DECLARE_CLASS2(kha,internal,BytesBlob)

namespace kha{
namespace internal{


class HXCPP_CLASS_ATTRIBUTES BytesBlob_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef BytesBlob_obj OBJ_;
		BytesBlob_obj();

	public:
		enum { _hx_ClassId = 0x4186df07 };

		void __construct( ::haxe::io::Bytes bytes);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.internal.BytesBlob")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.internal.BytesBlob"); }
		static hx::ObjectPtr< BytesBlob_obj > __new( ::haxe::io::Bytes bytes);
		static hx::ObjectPtr< BytesBlob_obj > __alloc(hx::Ctx *_hx_ctx, ::haxe::io::Bytes bytes);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BytesBlob_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("BytesBlob","\x48","\x63","\xe1","\x07"); }

		static void __boot();
		static int bufferSize;
		static  ::kha::internal::BytesBlob fromBytes( ::haxe::io::Bytes bytes);
		static ::Dynamic fromBytes_dyn();

		static  ::kha::internal::BytesBlob alloc(int size);
		static ::Dynamic alloc_dyn();

		static Float readF32(int i);
		static ::Dynamic readF32_dyn();

		static bool bit(int value,int position);
		static ::Dynamic bit_dyn();

		static ::String toText(::Array< int > chars,int length);
		static ::Dynamic toText_dyn();

		 ::haxe::io::Bytes bytes;
		 ::kha::internal::BytesBlob sub(int start,int length);
		::Dynamic sub_dyn();

		int length;
		int get_length();
		::Dynamic get_length_dyn();

		void writeU8(int position,int value);
		::Dynamic writeU8_dyn();

		int readU8(int position);
		::Dynamic readU8_dyn();

		int readS8(int position);
		::Dynamic readS8_dyn();

		int readU16BE(int position);
		::Dynamic readU16BE_dyn();

		int readU16LE(int position);
		::Dynamic readU16LE_dyn();

		int readU32LE(int position);
		::Dynamic readU32LE_dyn();

		int readU32BE(int position);
		::Dynamic readU32BE_dyn();

		int readS16BE(int position);
		::Dynamic readS16BE_dyn();

		int readS16LE(int position);
		::Dynamic readS16LE_dyn();

		int readS32LE(int position);
		::Dynamic readS32LE_dyn();

		int readS32BE(int position);
		::Dynamic readS32BE_dyn();

		Float readF32LE(int position);
		::Dynamic readF32LE_dyn();

		Float readF32BE(int position);
		::Dynamic readF32BE_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		int readUtf8Char( ::Dynamic position);
		::Dynamic readUtf8Char_dyn();

		::String readUtf8Block(::Array< int > buffer, ::Dynamic position);
		::Dynamic readUtf8Block_dyn();

		::String readUtf8String();
		::Dynamic readUtf8String_dyn();

		 ::haxe::io::Bytes toBytes();
		::Dynamic toBytes_dyn();

		void unload();
		::Dynamic unload_dyn();

};

} // end namespace kha
} // end namespace internal

#endif /* INCLUDED_kha_internal_BytesBlob */ 

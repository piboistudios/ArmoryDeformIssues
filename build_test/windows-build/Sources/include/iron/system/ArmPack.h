// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_iron_system_ArmPack
#define INCLUDED_iron_system_ArmPack

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,io,BytesInput)
HX_DECLARE_CLASS2(haxe,io,Input)
HX_DECLARE_CLASS2(iron,_hx_system,ArmPack)

namespace iron{
namespace _hx_system{


class HXCPP_CLASS_ATTRIBUTES ArmPack_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ArmPack_obj OBJ_;
		ArmPack_obj();

	public:
		enum { _hx_ClassId = 0x2eb177ba };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="iron.system.ArmPack")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"iron.system.ArmPack"); }

		hx::ObjectPtr< ArmPack_obj > __new() {
			hx::ObjectPtr< ArmPack_obj > __this = new ArmPack_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< ArmPack_obj > __alloc(hx::Ctx *_hx_ctx) {
			ArmPack_obj *__this = (ArmPack_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ArmPack_obj), false, "iron.system.ArmPack"));
			*(void **)__this = ArmPack_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ArmPack_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ArmPack","\x35","\x87","\x7a","\x1b"); }

		static  ::Dynamic decode( ::haxe::io::Bytes b);
		static ::Dynamic decode_dyn();

		static  ::Dynamic read( ::haxe::io::BytesInput i);
		static ::Dynamic read_dyn();

		static  ::Dynamic readArray( ::haxe::io::BytesInput i,int length);
		static ::Dynamic readArray_dyn();

		static  ::Dynamic readMap( ::haxe::io::BytesInput i,int length);
		static ::Dynamic readMap_dyn();

};

} // end namespace iron
} // end namespace system

#endif /* INCLUDED_iron_system_ArmPack */ 

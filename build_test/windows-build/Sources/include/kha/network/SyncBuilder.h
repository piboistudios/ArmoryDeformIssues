// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_kha_network_SyncBuilder
#define INCLUDED_kha_network_SyncBuilder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(kha,network,SyncBuilder)

namespace kha{
namespace network{


class HXCPP_CLASS_ATTRIBUTES SyncBuilder_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef SyncBuilder_obj OBJ_;
		SyncBuilder_obj();

	public:
		enum { _hx_ClassId = 0x226402b2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha.network.SyncBuilder")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"kha.network.SyncBuilder"); }

		hx::ObjectPtr< SyncBuilder_obj > __new() {
			hx::ObjectPtr< SyncBuilder_obj > __this = new SyncBuilder_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< SyncBuilder_obj > __alloc(hx::Ctx *_hx_ctx) {
			SyncBuilder_obj *__this = (SyncBuilder_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(SyncBuilder_obj), false, "kha.network.SyncBuilder"));
			*(void **)__this = SyncBuilder_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SyncBuilder_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("SyncBuilder","\xe0","\xb1","\x98","\xaa"); }

		static void __boot();
		static int nextId;
		static ::cpp::VirtualArray objects;
};

} // end namespace kha
} // end namespace network

#endif /* INCLUDED_kha_network_SyncBuilder */ 

// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_MappingChannel
#define INCLUDED_kha_audio2_ogg_vorbis_data_MappingChannel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_08ff309769f5ae26_125_new)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,MappingChannel)

namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{
namespace data{


class HXCPP_CLASS_ATTRIBUTES MappingChannel_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef MappingChannel_obj OBJ_;
		MappingChannel_obj();

	public:
		enum { _hx_ClassId = 0x1b78e9c1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha.audio2.ogg.vorbis.data.MappingChannel")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"kha.audio2.ogg.vorbis.data.MappingChannel"); }

		hx::ObjectPtr< MappingChannel_obj > __new() {
			hx::ObjectPtr< MappingChannel_obj > __this = new MappingChannel_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< MappingChannel_obj > __alloc(hx::Ctx *_hx_ctx) {
			MappingChannel_obj *__this = (MappingChannel_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(MappingChannel_obj), false, "kha.audio2.ogg.vorbis.data.MappingChannel"));
			*(void **)__this = MappingChannel_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_08ff309769f5ae26_125_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MappingChannel_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("MappingChannel","\x75","\xdf","\xd5","\x40"); }

		int magnitude;
		int angle;
		int mux;
};

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis
} // end namespace data

#endif /* INCLUDED_kha_audio2_ogg_vorbis_data_MappingChannel */ 

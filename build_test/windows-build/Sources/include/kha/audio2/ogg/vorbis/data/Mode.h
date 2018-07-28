// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Mode
#define INCLUDED_kha_audio2_ogg_vorbis_data_Mode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_f02a149af3865821_12_new)
HX_DECLARE_CLASS4(kha,audio2,ogg,vorbis,VorbisDecodeState)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,Mode)

namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{
namespace data{


class HXCPP_CLASS_ATTRIBUTES Mode_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Mode_obj OBJ_;
		Mode_obj();

	public:
		enum { _hx_ClassId = 0x076772cf };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha.audio2.ogg.vorbis.data.Mode")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"kha.audio2.ogg.vorbis.data.Mode"); }

		hx::ObjectPtr< Mode_obj > __new() {
			hx::ObjectPtr< Mode_obj > __this = new Mode_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Mode_obj > __alloc(hx::Ctx *_hx_ctx) {
			Mode_obj *__this = (Mode_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Mode_obj), false, "kha.audio2.ogg.vorbis.data.Mode"));
			*(void **)__this = Mode_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_f02a149af3865821_12_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Mode_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Mode","\x83","\xff","\x39","\x33"); }

		static  ::kha::audio2::ogg::vorbis::data::Mode read( ::kha::audio2::ogg::vorbis::VorbisDecodeState decodeState);
		static ::Dynamic read_dyn();

		bool blockflag;
		int mapping;
		int windowtype;
		int transformtype;
};

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis
} // end namespace data

#endif /* INCLUDED_kha_audio2_ogg_vorbis_data_Mode */ 

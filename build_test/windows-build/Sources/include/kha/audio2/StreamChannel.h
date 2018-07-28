// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_kha_audio2_StreamChannel
#define INCLUDED_kha_audio2_StreamChannel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_kha_audio1_AudioChannel
#include <kha/audio1/AudioChannel.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(kha,arrays,Float32ArrayPrivate)
HX_DECLARE_CLASS2(kha,audio1,AudioChannel)
HX_DECLARE_CLASS2(kha,audio2,StreamChannel)

#define STB_VORBIS_HEADER_ONLY
#include <Kore/Audio1/stb_vorbis.c>
namespace kha{
namespace audio2{


class HXCPP_CLASS_ATTRIBUTES StreamChannel_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef StreamChannel_obj OBJ_;
		StreamChannel_obj();

	public:
		enum { _hx_ClassId = 0x2a48e3c3 };

		void __construct( ::haxe::io::Bytes data,bool loop);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="kha.audio2.StreamChannel")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"kha.audio2.StreamChannel"); }
		static hx::ObjectPtr< StreamChannel_obj > __new( ::haxe::io::Bytes data,bool loop);
		static hx::ObjectPtr< StreamChannel_obj > __alloc(hx::Ctx *_hx_ctx, ::haxe::io::Bytes data,bool loop);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StreamChannel_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		Float get_position_f78ba10e();

		Float get_length_f78ba10e();
		::String __ToString() const { return HX_HCSTRING("StreamChannel","\x03","\xf4","\xa9","\x8a"); }

		bool atend;
		bool loop;
		Float myVolume;
		bool paused;
		void initVorbis( ::haxe::io::Bytes data);
		::Dynamic initVorbis_dyn();

		void nextVorbisSamples( ::kha::arrays::Float32ArrayPrivate samples,int length);
		::Dynamic nextVorbisSamples_dyn();

		void nextSamples( ::kha::arrays::Float32ArrayPrivate samples,int length,int sampleRate);
		::Dynamic nextSamples_dyn();

		void play();
		::Dynamic play_dyn();

		void pause();
		::Dynamic pause_dyn();

		void stop();
		::Dynamic stop_dyn();

		int length;
		int get_length();
		::Dynamic get_length_dyn();

		int position;
		int get_position();
		::Dynamic get_position_dyn();

		Float get_volume();
		::Dynamic get_volume_dyn();

		Float set_volume(Float value);
		::Dynamic set_volume_dyn();

		bool finished;
		bool get_finished();
		::Dynamic get_finished_dyn();

stb_vorbis* vorbis;
};

} // end namespace kha
} // end namespace audio2

#endif /* INCLUDED_kha_audio2_StreamChannel */ 

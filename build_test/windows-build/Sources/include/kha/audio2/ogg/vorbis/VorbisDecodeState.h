// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#ifndef INCLUDED_kha_audio2_ogg_vorbis_VorbisDecodeState
#define INCLUDED_kha_audio2_ogg_vorbis_VorbisDecodeState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,io,Input)
HX_DECLARE_CLASS4(kha,audio2,ogg,vorbis,VorbisDecodeState)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,_VorbisDecodeState,FindPageResult)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,Codebook)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,Header)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,Page)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,ProbedPage)
HX_DECLARE_CLASS5(kha,audio2,ogg,vorbis,data,ReaderError)

namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{


class HXCPP_CLASS_ATTRIBUTES VorbisDecodeState_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef VorbisDecodeState_obj OBJ_;
		VorbisDecodeState_obj();

	public:
		enum { _hx_ClassId = 0x5601b2ae };

		void __construct( ::haxe::io::Input input);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="kha.audio2.ogg.vorbis.VorbisDecodeState")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"kha.audio2.ogg.vorbis.VorbisDecodeState"); }
		static hx::ObjectPtr< VorbisDecodeState_obj > __new( ::haxe::io::Input input);
		static hx::ObjectPtr< VorbisDecodeState_obj > __alloc(hx::Ctx *_hx_ctx, ::haxe::io::Input input);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VorbisDecodeState_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("VorbisDecodeState","\x50","\xc1","\x7a","\x8f"); }

		static void __boot();
		static int INVALID_BITS;
		 ::kha::audio2::ogg::vorbis::data::Page page;
		bool eof;
		 ::kha::audio2::ogg::vorbis::data::ProbedPage pFirst;
		 ::kha::audio2::ogg::vorbis::data::ProbedPage pLast;
		int validBits;
		int inputPosition;
		 ::haxe::io::Input input;
		int discardSamplesDeferred;
		::Array< int > segments;
		int bytesInSeg;
		::Array< ::Dynamic> channelBuffers;
		int channelBufferStart;
		int channelBufferEnd;
		int currentSample;
		::Array< ::Dynamic> previousWindow;
		int previousLength;
		::Array< ::Dynamic> finalY;
		bool firstDecode;
		int nextSeg;
		int acc;
		bool lastSeg;
		int lastSegWhich;
		int endSegWithKnownLoc;
		int knownLocForPacket;
		 ::kha::audio2::ogg::vorbis::data::ReaderError error;
		int currentLoc;
		int currentLocValid;
		int firstAudioPageOffset;
		void setup(int loc0,int loc1);
		::Dynamic setup_dyn();

		 ::kha::audio2::ogg::vorbis::VorbisDecodeState clone( ::Dynamic seekFunc);
		::Dynamic clone_dyn();

		int next();
		::Dynamic next_dyn();

		void startPacket();
		::Dynamic startPacket_dyn();

		bool maybeStartPacket();
		::Dynamic maybeStartPacket_dyn();

		int readBits(int n);
		::Dynamic readBits_dyn();

		int readPacketRaw();
		::Dynamic readPacketRaw_dyn();

		int readPacket();
		::Dynamic readPacket_dyn();

		void flushPacket();
		::Dynamic flushPacket_dyn();

		void vorbisValidate();
		::Dynamic vorbisValidate_dyn();

		void firstPageValidate();
		::Dynamic firstPageValidate_dyn();

		void startFirstDecode();
		::Dynamic startFirstDecode_dyn();

		void capturePattern();
		::Dynamic capturePattern_dyn();

		void skip(int len);
		::Dynamic skip_dyn();

		void prepHuffman();
		::Dynamic prepHuffman_dyn();

		int decode( ::kha::audio2::ogg::vorbis::data::Codebook c);
		::Dynamic decode_dyn();

		int decodeRaw( ::kha::audio2::ogg::vorbis::data::Codebook c);
		::Dynamic decodeRaw_dyn();

		bool isLastByte();
		::Dynamic isLastByte_dyn();

		 ::Dynamic finishDecodePacket(int previousLength,int n, ::Dynamic r);
		::Dynamic finishDecodePacket_dyn();

		int readInt32();
		::Dynamic readInt32_dyn();

		int readByte();
		::Dynamic readByte_dyn();

		::Array< int > read(int n);
		::Dynamic read_dyn();

		 ::haxe::io::Bytes readBytes(int n);
		::Dynamic readBytes_dyn();

		::String readString(int n);
		::Dynamic readString_dyn();

		int getSampleNumber( ::Dynamic seekFunc,int inputLength);
		::Dynamic getSampleNumber_dyn();

		void forcePageResync();
		::Dynamic forcePageResync_dyn();

		void setInputOffset( ::Dynamic seekFunc,int n);
		::Dynamic setInputOffset_dyn();

		 ::kha::audio2::ogg::vorbis::_VorbisDecodeState::FindPageResult findPage( ::Dynamic seekFunc,int inputLength);
		::Dynamic findPage_dyn();

		 ::kha::audio2::ogg::vorbis::data::ProbedPage analyzePage( ::Dynamic seekFunc, ::kha::audio2::ogg::vorbis::data::Header h);
		::Dynamic analyzePage_dyn();

		int decodeScalarRaw( ::kha::audio2::ogg::vorbis::data::Codebook c);
		::Dynamic decodeScalarRaw_dyn();

};

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis

#endif /* INCLUDED_kha_audio2_ogg_vorbis_VorbisDecodeState */ 

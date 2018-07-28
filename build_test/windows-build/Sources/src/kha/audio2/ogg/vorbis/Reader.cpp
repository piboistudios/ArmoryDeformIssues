// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_c5728fd05c542abe
#define INCLUDED_c5728fd05c542abe
#include "cpp_float32array.h"
#endif
#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesInput
#include <haxe/io/BytesInput.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_kha_arrays_Float32ArrayPrivate
#include <kha/arrays/Float32ArrayPrivate.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_Reader
#include <kha/audio2/ogg/vorbis/Reader.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_VorbisDecoder
#include <kha/audio2/ogg/vorbis/VorbisDecoder.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Comment
#include <kha/audio2/ogg/vorbis/data/Comment.h>
#endif
#ifndef INCLUDED_kha_audio2_ogg_vorbis_data_Header
#include <kha/audio2/ogg/vorbis/data/Header.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_sys_io_FileInput
#include <sys/io/FileInput.h>
#endif
#ifndef INCLUDED_sys_io_FileSeek
#include <sys/io/FileSeek.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_513353bacac92b5d_76_new,"kha.audio2.ogg.vorbis.Reader","new",0x26b8f869,"kha.audio2.ogg.vorbis.Reader.new","kha/audio2/ogg/vorbis/Reader.hx",76,0x425c5327)
HX_LOCAL_STACK_FRAME(_hx_pos_513353bacac92b5d_34_get_header,"kha.audio2.ogg.vorbis.Reader","get_header",0x725d546d,"kha.audio2.ogg.vorbis.Reader.get_header","kha/audio2/ogg/vorbis/Reader.hx",34,0x425c5327)
HX_LOCAL_STACK_FRAME(_hx_pos_513353bacac92b5d_39_get_totalSample,"kha.audio2.ogg.vorbis.Reader","get_totalSample",0xd5a79c2e,"kha.audio2.ogg.vorbis.Reader.get_totalSample","kha/audio2/ogg/vorbis/Reader.hx",39,0x425c5327)
HX_LOCAL_STACK_FRAME(_hx_pos_513353bacac92b5d_45_get_totalMillisecond,"kha.audio2.ogg.vorbis.Reader","get_totalMillisecond",0x288b80bd,"kha.audio2.ogg.vorbis.Reader.get_totalMillisecond","kha/audio2/ogg/vorbis/Reader.hx",45,0x425c5327)
HX_LOCAL_STACK_FRAME(_hx_pos_513353bacac92b5d_50_get_currentSample,"kha.audio2.ogg.vorbis.Reader","get_currentSample",0x420ab263,"kha.audio2.ogg.vorbis.Reader.get_currentSample","kha/audio2/ogg/vorbis/Reader.hx",50,0x425c5327)
HX_LOCAL_STACK_FRAME(_hx_pos_513353bacac92b5d_53_set_currentSample,"kha.audio2.ogg.vorbis.Reader","set_currentSample",0x65788a6f,"kha.audio2.ogg.vorbis.Reader.set_currentSample","kha/audio2/ogg/vorbis/Reader.hx",53,0x425c5327)
HX_LOCAL_STACK_FRAME(_hx_pos_513353bacac92b5d_62_get_currentMillisecond,"kha.audio2.ogg.vorbis.Reader","get_currentMillisecond",0x0022ca68,"kha.audio2.ogg.vorbis.Reader.get_currentMillisecond","kha/audio2/ogg/vorbis/Reader.hx",62,0x425c5327)
HX_LOCAL_STACK_FRAME(_hx_pos_513353bacac92b5d_65_set_currentMillisecond,"kha.audio2.ogg.vorbis.Reader","set_currentMillisecond",0x33ce46dc,"kha.audio2.ogg.vorbis.Reader.set_currentMillisecond","kha/audio2/ogg/vorbis/Reader.hx",65,0x425c5327)
HX_LOCAL_STACK_FRAME(_hx_pos_513353bacac92b5d_121_read,"kha.audio2.ogg.vorbis.Reader","read",0xbdc52b2d,"kha.audio2.ogg.vorbis.Reader.read","kha/audio2/ogg/vorbis/Reader.hx",121,0x425c5327)
HX_LOCAL_STACK_FRAME(_hx_pos_513353bacac92b5d_136_clone,"kha.audio2.ogg.vorbis.Reader","clone",0xb0690fa6,"kha.audio2.ogg.vorbis.Reader.clone","kha/audio2/ogg/vorbis/Reader.hx",136,0x425c5327)
HX_LOCAL_STACK_FRAME(_hx_pos_513353bacac92b5d_148_sampleToMillisecond,"kha.audio2.ogg.vorbis.Reader","sampleToMillisecond",0x1841f105,"kha.audio2.ogg.vorbis.Reader.sampleToMillisecond","kha/audio2/ogg/vorbis/Reader.hx",148,0x425c5327)
HX_LOCAL_STACK_FRAME(_hx_pos_513353bacac92b5d_152_millisecondToSample,"kha.audio2.ogg.vorbis.Reader","millisecondToSample",0x3285c26f,"kha.audio2.ogg.vorbis.Reader.millisecondToSample","kha/audio2/ogg/vorbis/Reader.hx",152,0x425c5327)
HX_LOCAL_STACK_FRAME(_hx_pos_513353bacac92b5d_87_openFromBytes,"kha.audio2.ogg.vorbis.Reader","openFromBytes",0xcd22f2c0,"kha.audio2.ogg.vorbis.Reader.openFromBytes","kha/audio2/ogg/vorbis/Reader.hx",87,0x425c5327)
HX_LOCAL_STACK_FRAME(_hx_pos_513353bacac92b5d_85_openFromBytes,"kha.audio2.ogg.vorbis.Reader","openFromBytes",0xcd22f2c0,"kha.audio2.ogg.vorbis.Reader.openFromBytes","kha/audio2/ogg/vorbis/Reader.hx",85,0x425c5327)
HX_LOCAL_STACK_FRAME(_hx_pos_513353bacac92b5d_91_seekBytes,"kha.audio2.ogg.vorbis.Reader","seekBytes",0x253a749c,"kha.audio2.ogg.vorbis.Reader.seekBytes","kha/audio2/ogg/vorbis/Reader.hx",91,0x425c5327)
HX_LOCAL_STACK_FRAME(_hx_pos_513353bacac92b5d_98_openFromFile,"kha.audio2.ogg.vorbis.Reader","openFromFile",0xa9f945c7,"kha.audio2.ogg.vorbis.Reader.openFromFile","kha/audio2/ogg/vorbis/Reader.hx",98,0x425c5327)
HX_LOCAL_STACK_FRAME(_hx_pos_513353bacac92b5d_95_openFromFile,"kha.audio2.ogg.vorbis.Reader","openFromFile",0xa9f945c7,"kha.audio2.ogg.vorbis.Reader.openFromFile","kha/audio2/ogg/vorbis/Reader.hx",95,0x425c5327)
HX_LOCAL_STACK_FRAME(_hx_pos_513353bacac92b5d_105_readAll,"kha.audio2.ogg.vorbis.Reader","readAll",0xf577fff4,"kha.audio2.ogg.vorbis.Reader.readAll","kha/audio2/ogg/vorbis/Reader.hx",105,0x425c5327)
HX_LOCAL_STACK_FRAME(_hx_pos_513353bacac92b5d_102_readAll,"kha.audio2.ogg.vorbis.Reader","readAll",0xf577fff4,"kha.audio2.ogg.vorbis.Reader.readAll","kha/audio2/ogg/vorbis/Reader.hx",102,0x425c5327)
namespace kha{
namespace audio2{
namespace ogg{
namespace vorbis{

void Reader_obj::__construct( ::haxe::io::Input input, ::Dynamic seekFunc,int inputLength){
            	HX_STACKFRAME(&_hx_pos_513353bacac92b5d_76_new)
HXLINE(  77)		this->seekFunc = seekFunc;
HXLINE(  78)		this->inputLength = inputLength;
HXLINE(  79)		this->decoder = ::kha::audio2::ogg::vorbis::VorbisDecoder_obj::start(input);
HXLINE(  80)		this->decoder->setupSampleNumber(seekFunc,inputLength);
HXLINE(  81)		this->loopStart = this->get_header()->comment->get_loopStart();
HXLINE(  82)		this->loopLength = this->get_header()->comment->get_loopLength();
            	}

Dynamic Reader_obj::__CreateEmpty() { return new Reader_obj; }

void *Reader_obj::_hx_vtable = 0;

Dynamic Reader_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Reader_obj > _hx_result = new Reader_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Reader_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6940300d;
}

 ::kha::audio2::ogg::vorbis::data::Header Reader_obj::get_header(){
            	HX_STACKFRAME(&_hx_pos_513353bacac92b5d_34_get_header)
HXDLIN(  34)		return this->decoder->header;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,get_header,return )

int Reader_obj::get_totalSample(){
            	HX_STACKFRAME(&_hx_pos_513353bacac92b5d_39_get_totalSample)
HXDLIN(  39)		return this->decoder->totalSample;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,get_totalSample,return )

Float Reader_obj::get_totalMillisecond(){
            	HX_STACKFRAME(&_hx_pos_513353bacac92b5d_45_get_totalMillisecond)
HXDLIN(  45)		int samples = this->decoder->totalSample;
HXDLIN(  45)		int b = this->get_header()->sampleRate;
HXDLIN(  45)		int _hx_int = samples;
HXDLIN(  45)		Float _hx_tmp;
HXDLIN(  45)		if ((_hx_int < (int)0)) {
HXDLIN(  45)			_hx_tmp = (((Float)4294967296.0) + _hx_int);
            		}
            		else {
HXDLIN(  45)			_hx_tmp = (_hx_int + ((Float)0.0));
            		}
HXDLIN(  45)		int int1 = b;
HXDLIN(  45)		Float _hx_tmp1;
HXDLIN(  45)		if ((int1 < (int)0)) {
HXDLIN(  45)			_hx_tmp1 = (((Float)4294967296.0) + int1);
            		}
            		else {
HXDLIN(  45)			_hx_tmp1 = (int1 + ((Float)0.0));
            		}
HXDLIN(  45)		return (((Float)_hx_tmp / (Float)_hx_tmp1) * (int)1000);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,get_totalMillisecond,return )

int Reader_obj::get_currentSample(){
            	HX_STACKFRAME(&_hx_pos_513353bacac92b5d_50_get_currentSample)
HXDLIN(  50)		return this->decoder->currentSample;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,get_currentSample,return )

int Reader_obj::set_currentSample(int value){
            	HX_STACKFRAME(&_hx_pos_513353bacac92b5d_53_set_currentSample)
HXLINE(  54)		this->decoder->seek(this->seekFunc,this->inputLength,value);
HXLINE(  55)		return this->decoder->currentSample;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,set_currentSample,return )

Float Reader_obj::get_currentMillisecond(){
            	HX_STACKFRAME(&_hx_pos_513353bacac92b5d_62_get_currentMillisecond)
HXDLIN(  62)		int samples = this->get_currentSample();
HXDLIN(  62)		int b = this->get_header()->sampleRate;
HXDLIN(  62)		int _hx_int = samples;
HXDLIN(  62)		Float _hx_tmp;
HXDLIN(  62)		if ((_hx_int < (int)0)) {
HXDLIN(  62)			_hx_tmp = (((Float)4294967296.0) + _hx_int);
            		}
            		else {
HXDLIN(  62)			_hx_tmp = (_hx_int + ((Float)0.0));
            		}
HXDLIN(  62)		int int1 = b;
HXDLIN(  62)		Float _hx_tmp1;
HXDLIN(  62)		if ((int1 < (int)0)) {
HXDLIN(  62)			_hx_tmp1 = (((Float)4294967296.0) + int1);
            		}
            		else {
HXDLIN(  62)			_hx_tmp1 = (int1 + ((Float)0.0));
            		}
HXDLIN(  62)		return (((Float)_hx_tmp / (Float)_hx_tmp1) * (int)1000);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,get_currentMillisecond,return )

Float Reader_obj::set_currentMillisecond(Float value){
            	HX_STACKFRAME(&_hx_pos_513353bacac92b5d_65_set_currentMillisecond)
HXLINE(  66)		Float _g = ((Float)value / (Float)(int)1000);
HXDLIN(  66)		int _g1 = this->get_header()->sampleRate;
HXDLIN(  66)		int _hx_int = _g1;
HXDLIN(  66)		Float _hx_tmp;
HXDLIN(  66)		if ((_hx_int < (int)0)) {
HXLINE(  66)			_hx_tmp = (((Float)4294967296.0) + _hx_int);
            		}
            		else {
HXLINE(  66)			_hx_tmp = (_hx_int + ((Float)0.0));
            		}
HXDLIN(  66)		this->set_currentSample(::Math_obj::floor((_hx_tmp * _g)));
HXLINE(  67)		return this->get_currentMillisecond();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,set_currentMillisecond,return )

int Reader_obj::read( ::kha::arrays::Float32ArrayPrivate output, ::Dynamic samples, ::Dynamic channels, ::Dynamic sampleRate,hx::Null< bool >  __o_useFloat){
bool useFloat = __o_useFloat.Default(false);
            	HX_STACKFRAME(&_hx_pos_513353bacac92b5d_121_read)
HXLINE( 122)		this->decoder->ensurePosition(this->seekFunc);
HXLINE( 124)		if (hx::IsNull( samples )) {
HXLINE( 125)			samples = this->decoder->totalSample;
            		}
HXLINE( 127)		if (hx::IsNull( channels )) {
HXLINE( 128)			channels = this->get_header()->channel;
            		}
HXLINE( 130)		if (hx::IsNull( sampleRate )) {
HXLINE( 131)			sampleRate = this->get_header()->sampleRate;
            		}
HXLINE( 133)		return this->decoder->read(output,samples,channels,sampleRate,useFloat);
            	}


HX_DEFINE_DYNAMIC_FUNC5(Reader_obj,read,return )

 ::kha::audio2::ogg::vorbis::Reader Reader_obj::clone(){
            	HX_STACKFRAME(&_hx_pos_513353bacac92b5d_136_clone)
HXLINE( 137)		 ::kha::audio2::ogg::vorbis::Reader reader = ( ( ::kha::audio2::ogg::vorbis::Reader)(::Type_obj::createEmptyInstance(hx::ClassOf< ::kha::audio2::ogg::vorbis::Reader >())) );
HXLINE( 138)		reader->seekFunc = this->seekFunc;
HXLINE( 139)		reader->inputLength = this->inputLength;
HXLINE( 140)		reader->decoder = this->decoder->clone(this->seekFunc);
HXLINE( 141)		reader->loopStart = this->loopStart;
HXLINE( 142)		reader->loopLength = this->loopLength;
HXLINE( 143)		return reader;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Reader_obj,clone,return )

Float Reader_obj::sampleToMillisecond(int samples){
            	HX_STACKFRAME(&_hx_pos_513353bacac92b5d_148_sampleToMillisecond)
HXDLIN( 148)		int b = this->get_header()->sampleRate;
HXDLIN( 148)		int _hx_int = samples;
HXDLIN( 148)		Float _hx_tmp;
HXDLIN( 148)		if ((_hx_int < (int)0)) {
HXDLIN( 148)			_hx_tmp = (((Float)4294967296.0) + _hx_int);
            		}
            		else {
HXDLIN( 148)			_hx_tmp = (_hx_int + ((Float)0.0));
            		}
HXDLIN( 148)		int int1 = b;
HXDLIN( 148)		Float _hx_tmp1;
HXDLIN( 148)		if ((int1 < (int)0)) {
HXDLIN( 148)			_hx_tmp1 = (((Float)4294967296.0) + int1);
            		}
            		else {
HXDLIN( 148)			_hx_tmp1 = (int1 + ((Float)0.0));
            		}
HXDLIN( 148)		return (((Float)_hx_tmp / (Float)_hx_tmp1) * (int)1000);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,sampleToMillisecond,return )

int Reader_obj::millisecondToSample(Float millseconds){
            	HX_STACKFRAME(&_hx_pos_513353bacac92b5d_152_millisecondToSample)
HXDLIN( 152)		Float _g = ((Float)millseconds / (Float)(int)1000);
HXDLIN( 152)		int _g1 = this->get_header()->sampleRate;
HXDLIN( 152)		int _hx_int = _g1;
HXDLIN( 152)		Float _hx_tmp;
HXDLIN( 152)		if ((_hx_int < (int)0)) {
HXDLIN( 152)			_hx_tmp = (((Float)4294967296.0) + _hx_int);
            		}
            		else {
HXDLIN( 152)			_hx_tmp = (_hx_int + ((Float)0.0));
            		}
HXDLIN( 152)		return ::Math_obj::floor((_hx_tmp * _g));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,millisecondToSample,return )

 ::kha::audio2::ogg::vorbis::Reader Reader_obj::openFromBytes( ::haxe::io::Bytes bytes){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::haxe::io::BytesInput,a1) HXARGC(1)
            		void _hx_run(int a2){
            			HX_GC_STACKFRAME(&_hx_pos_513353bacac92b5d_87_openFromBytes)
HXLINE(  87)			::kha::audio2::ogg::vorbis::Reader_obj::seekBytes(a1,a2);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_513353bacac92b5d_85_openFromBytes)
HXLINE(  86)		 ::haxe::io::BytesInput input =  ::haxe::io::BytesInput_obj::__alloc( HX_CTX ,bytes,null(),null());
HXLINE(  87)		 ::haxe::io::BytesInput a1 = input;
HXDLIN(  87)		 ::Dynamic _hx_tmp =  ::Dynamic(new _hx_Closure_0(a1));
HXDLIN(  87)		return  ::kha::audio2::ogg::vorbis::Reader_obj::__alloc( HX_CTX ,input,_hx_tmp,bytes->length);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,openFromBytes,return )

void Reader_obj::seekBytes( ::haxe::io::BytesInput bytes,int pos){
            	HX_STACKFRAME(&_hx_pos_513353bacac92b5d_91_seekBytes)
HXDLIN(  91)		bytes->set_position(pos);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Reader_obj,seekBytes,(void))

 ::kha::audio2::ogg::vorbis::Reader Reader_obj::openFromFile(::String fileName){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::Dynamic,f) HXARGC(1)
            		void _hx_run(int p){
            			HX_STACKFRAME(&_hx_pos_513353bacac92b5d_98_openFromFile)
HXLINE(  98)			f(p,::sys::io::FileSeek_obj::SeekBegin_dyn());
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_513353bacac92b5d_95_openFromFile)
HXLINE(  96)		 ::sys::io::FileInput file = ::sys::io::File_obj::read(fileName,true);
HXLINE(  97)		 ::Dynamic stat = ::sys::FileSystem_obj::stat(fileName);
HXLINE(  98)		 ::Dynamic f = file->seek_dyn();
HXDLIN(  98)		 ::Dynamic _hx_tmp =  ::Dynamic(new _hx_Closure_0(f));
HXDLIN(  98)		return  ::kha::audio2::ogg::vorbis::Reader_obj::__alloc( HX_CTX ,file,_hx_tmp, ::Dynamic(stat->__Field(HX_("size",c1,a0,53,4c),hx::paccDynamic)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Reader_obj,openFromFile,return )

 ::kha::audio2::ogg::vorbis::data::Header Reader_obj::readAll( ::haxe::io::Bytes bytes, ::haxe::io::Output output,hx::Null< bool >  __o_useFloat){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::haxe::io::BytesInput,a1) HXARGC(1)
            		void _hx_run(int a2){
            			HX_GC_STACKFRAME(&_hx_pos_513353bacac92b5d_105_readAll)
HXLINE( 105)			::kha::audio2::ogg::vorbis::Reader_obj::seekBytes(a1,a2);
            		}
            		HX_END_LOCAL_FUNC1((void))

bool useFloat = __o_useFloat.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_513353bacac92b5d_102_readAll)
HXLINE( 103)		 ::haxe::io::BytesInput input =  ::haxe::io::BytesInput_obj::__alloc( HX_CTX ,bytes,null(),null());
HXLINE( 104)		 ::kha::audio2::ogg::vorbis::VorbisDecoder decoder = ::kha::audio2::ogg::vorbis::VorbisDecoder_obj::start(input);
HXLINE( 105)		 ::haxe::io::BytesInput a1 = input;
HXDLIN( 105)		 ::Dynamic _hx_tmp =  ::Dynamic(new _hx_Closure_0(a1));
HXDLIN( 105)		decoder->setupSampleNumber(_hx_tmp,bytes->length);
HXLINE( 106)		 ::kha::audio2::ogg::vorbis::data::Header header = decoder->header;
HXLINE( 107)		int count = (int)0;
HXLINE( 108)		int bufferSize = (int)4096;
HXLINE( 109)		 ::kha::arrays::Float32ArrayPrivate this1 =  ::kha::arrays::Float32ArrayPrivate_obj::__alloc( HX_CTX ,(bufferSize * header->channel));
HXDLIN( 109)		 ::kha::arrays::Float32ArrayPrivate buffer = this1;
HXLINE( 110)		while(true){
HXLINE( 111)			int n = decoder->read(buffer,bufferSize,header->channel,header->sampleRate,useFloat);
HXLINE( 112)			{
HXLINE( 112)				int _g1 = (int)0;
HXDLIN( 112)				int _g = (n * header->channel);
HXDLIN( 112)				while((_g1 < _g)){
HXLINE( 112)					_g1 = (_g1 + (int)1);
HXDLIN( 112)					int i = (_g1 - (int)1);
HXLINE( 113)					output->writeFloat(buffer->self.get(i));
            				}
            			}
HXLINE( 115)			if ((n == (int)0)) {
HXLINE( 115)				goto _hx_goto_17;
            			}
HXLINE( 116)			count = (count + n);
            		}
            		_hx_goto_17:;
HXLINE( 118)		return decoder->header;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Reader_obj,readAll,return )


hx::ObjectPtr< Reader_obj > Reader_obj::__new( ::haxe::io::Input input, ::Dynamic seekFunc,int inputLength) {
	hx::ObjectPtr< Reader_obj > __this = new Reader_obj();
	__this->__construct(input,seekFunc,inputLength);
	return __this;
}

hx::ObjectPtr< Reader_obj > Reader_obj::__alloc(hx::Ctx *_hx_ctx, ::haxe::io::Input input, ::Dynamic seekFunc,int inputLength) {
	Reader_obj *__this = (Reader_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Reader_obj), true, "kha.audio2.ogg.vorbis.Reader"));
	*(void **)__this = Reader_obj::_hx_vtable;
	__this->__construct(input,seekFunc,inputLength);
	return __this;
}

Reader_obj::Reader_obj()
{
}

void Reader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Reader);
	HX_MARK_MEMBER_NAME(decoder,"decoder");
	HX_MARK_MEMBER_NAME(loopStart,"loopStart");
	HX_MARK_MEMBER_NAME(loopLength,"loopLength");
	HX_MARK_MEMBER_NAME(seekFunc,"seekFunc");
	HX_MARK_MEMBER_NAME(inputLength,"inputLength");
	HX_MARK_END_CLASS();
}

void Reader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(decoder,"decoder");
	HX_VISIT_MEMBER_NAME(loopStart,"loopStart");
	HX_VISIT_MEMBER_NAME(loopLength,"loopLength");
	HX_VISIT_MEMBER_NAME(seekFunc,"seekFunc");
	HX_VISIT_MEMBER_NAME(inputLength,"inputLength");
}

hx::Val Reader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { return hx::Val( read_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"header") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_header() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"decoder") ) { return hx::Val( decoder ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"seekFunc") ) { return hx::Val( seekFunc ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loopStart") ) { return hx::Val( loopStart ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_header") ) { return hx::Val( get_header_dyn() ); }
		if (HX_FIELD_EQ(inName,"loopLength") ) { return hx::Val( loopLength ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"totalSample") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_totalSample() ); }
		if (HX_FIELD_EQ(inName,"inputLength") ) { return hx::Val( inputLength ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentSample") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_currentSample() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_totalSample") ) { return hx::Val( get_totalSample_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"totalMillisecond") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_totalMillisecond() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_currentSample") ) { return hx::Val( get_currentSample_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_currentSample") ) { return hx::Val( set_currentSample_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"currentMillisecond") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_currentMillisecond() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"sampleToMillisecond") ) { return hx::Val( sampleToMillisecond_dyn() ); }
		if (HX_FIELD_EQ(inName,"millisecondToSample") ) { return hx::Val( millisecondToSample_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_totalMillisecond") ) { return hx::Val( get_totalMillisecond_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_currentMillisecond") ) { return hx::Val( get_currentMillisecond_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_currentMillisecond") ) { return hx::Val( set_currentMillisecond_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Reader_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"readAll") ) { outValue = readAll_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"seekBytes") ) { outValue = seekBytes_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"openFromFile") ) { outValue = openFromFile_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"openFromBytes") ) { outValue = openFromBytes_dyn(); return true; }
	}
	return false;
}

hx::Val Reader_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"decoder") ) { decoder=inValue.Cast<  ::kha::audio2::ogg::vorbis::VorbisDecoder >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"seekFunc") ) { seekFunc=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loopStart") ) { loopStart=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"loopLength") ) { loopLength=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"inputLength") ) { inputLength=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentSample") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_currentSample(inValue.Cast< int >()) ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"currentMillisecond") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_currentMillisecond(inValue.Cast< Float >()) ); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Reader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("decoder","\x84","\x2b","\xc4","\xea"));
	outFields->push(HX_HCSTRING("header","\x8d","\x09","\x00","\xfd"));
	outFields->push(HX_HCSTRING("totalSample","\x0e","\x53","\x80","\xe3"));
	outFields->push(HX_HCSTRING("totalMillisecond","\xdd","\xdd","\x4f","\x6f"));
	outFields->push(HX_HCSTRING("currentSample","\x43","\xe1","\xa6","\x00"));
	outFields->push(HX_HCSTRING("currentMillisecond","\x88","\xaf","\x90","\xc6"));
	outFields->push(HX_HCSTRING("loopStart","\x5e","\x93","\xb7","\xb1"));
	outFields->push(HX_HCSTRING("loopLength","\x6a","\x92","\xf6","\x67"));
	outFields->push(HX_HCSTRING("inputLength","\x90","\x70","\x3b","\x94"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Reader_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::kha::audio2::ogg::vorbis::VorbisDecoder*/ ,(int)offsetof(Reader_obj,decoder),HX_HCSTRING("decoder","\x84","\x2b","\xc4","\xea")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Reader_obj,loopStart),HX_HCSTRING("loopStart","\x5e","\x93","\xb7","\xb1")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Reader_obj,loopLength),HX_HCSTRING("loopLength","\x6a","\x92","\xf6","\x67")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Reader_obj,seekFunc),HX_HCSTRING("seekFunc","\xdc","\xb8","\x2a","\x46")},
	{hx::fsInt,(int)offsetof(Reader_obj,inputLength),HX_HCSTRING("inputLength","\x90","\x70","\x3b","\x94")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Reader_obj_sStaticStorageInfo = 0;
#endif

static ::String Reader_obj_sMemberFields[] = {
	HX_HCSTRING("decoder","\x84","\x2b","\xc4","\xea"),
	HX_HCSTRING("get_header","\x56","\x79","\x87","\xed"),
	HX_HCSTRING("get_totalSample","\xa5","\x0a","\x62","\xa4"),
	HX_HCSTRING("get_totalMillisecond","\xe6","\x42","\xba","\x8d"),
	HX_HCSTRING("get_currentSample","\x9a","\xec","\x16","\x07"),
	HX_HCSTRING("set_currentSample","\xa6","\xc4","\x84","\x2a"),
	HX_HCSTRING("get_currentMillisecond","\xd1","\x28","\x25","\x20"),
	HX_HCSTRING("set_currentMillisecond","\x45","\xa5","\xd0","\x53"),
	HX_HCSTRING("loopStart","\x5e","\x93","\xb7","\xb1"),
	HX_HCSTRING("loopLength","\x6a","\x92","\xf6","\x67"),
	HX_HCSTRING("seekFunc","\xdc","\xb8","\x2a","\x46"),
	HX_HCSTRING("inputLength","\x90","\x70","\x3b","\x94"),
	HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("sampleToMillisecond","\xfc","\x66","\x7a","\x64"),
	HX_HCSTRING("millisecondToSample","\x66","\x38","\xbe","\x7e"),
	::String(null()) };

static void Reader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Reader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Reader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Reader_obj::__mClass,"__mClass");
};

#endif

hx::Class Reader_obj::__mClass;

static ::String Reader_obj_sStaticFields[] = {
	HX_HCSTRING("openFromBytes","\x77","\x05","\xea","\x8d"),
	HX_HCSTRING("seekBytes","\xd3","\x1f","\x46","\xd4"),
	HX_HCSTRING("openFromFile","\xf0","\x36","\xa5","\xdf"),
	HX_HCSTRING("readAll","\x6b","\x9f","\xc3","\x02"),
	::String(null())
};

void Reader_obj::__register()
{
	hx::Object *dummy = new Reader_obj;
	Reader_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("kha.audio2.ogg.vorbis.Reader","\xf7","\x8f","\x10","\xbb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Reader_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Reader_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Reader_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Reader_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Reader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Reader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Reader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Reader_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace kha
} // end namespace audio2
} // end namespace ogg
} // end namespace vorbis
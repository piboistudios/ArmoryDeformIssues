// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_FPHelper
#include <haxe/io/FPHelper.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a92c61cbc45a4140_51_readByte,"haxe.io.Input","readByte",0x4de8a3c2,"haxe.io.Input.readByte","C:\\Armory_04_win64_b27\\Armory\\armsdk\\Kha\\Tools\\haxe\\std/haxe/io/Input.hx",51,0x9819fd4c)
HX_LOCAL_STACK_FRAME(_hx_pos_a92c61cbc45a4140_64_readBytes,"haxe.io.Input","readBytes",0xdda6a671,"haxe.io.Input.readBytes","C:\\Armory_04_win64_b27\\Armory\\armsdk\\Kha\\Tools\\haxe\\std/haxe/io/Input.hx",64,0x9819fd4c)
HX_LOCAL_STACK_FRAME(_hx_pos_a92c61cbc45a4140_95_set_bigEndian,"haxe.io.Input","set_bigEndian",0x96732a9a,"haxe.io.Input.set_bigEndian","C:\\Armory_04_win64_b27\\Armory\\armsdk\\Kha\\Tools\\haxe\\std/haxe/io/Input.hx",95,0x9819fd4c)
HX_LOCAL_STACK_FRAME(_hx_pos_a92c61cbc45a4140_135_readFullBytes,"haxe.io.Input","readFullBytes",0x3db9a162,"haxe.io.Input.readFullBytes","C:\\Armory_04_win64_b27\\Armory\\armsdk\\Kha\\Tools\\haxe\\std/haxe/io/Input.hx",135,0x9819fd4c)
HX_LOCAL_STACK_FRAME(_hx_pos_a92c61cbc45a4140_147_read,"haxe.io.Input","read",0x27b9839a,"haxe.io.Input.read","C:\\Armory_04_win64_b27\\Armory\\armsdk\\Kha\\Tools\\haxe\\std/haxe/io/Input.hx",147,0x9819fd4c)
HX_LOCAL_STACK_FRAME(_hx_pos_a92c61cbc45a4140_200_readFloat,"haxe.io.Input","readFloat",0x22a563a2,"haxe.io.Input.readFloat","C:\\Armory_04_win64_b27\\Armory\\armsdk\\Kha\\Tools\\haxe\\std/haxe/io/Input.hx",200,0x9819fd4c)
HX_LOCAL_STACK_FRAME(_hx_pos_a92c61cbc45a4140_217_readInt8,"haxe.io.Input","readInt8",0x5280c923,"haxe.io.Input.readInt8","C:\\Armory_04_win64_b27\\Armory\\armsdk\\Kha\\Tools\\haxe\\std/haxe/io/Input.hx",217,0x9819fd4c)
HX_LOCAL_STACK_FRAME(_hx_pos_a92c61cbc45a4140_229_readInt16,"haxe.io.Input","readInt16",0xde2f2f9a,"haxe.io.Input.readInt16","C:\\Armory_04_win64_b27\\Armory\\armsdk\\Kha\\Tools\\haxe\\std/haxe/io/Input.hx",229,0x9819fd4c)
HX_LOCAL_STACK_FRAME(_hx_pos_a92c61cbc45a4140_243_readUInt16,"haxe.io.Input","readUInt16",0x05cae019,"haxe.io.Input.readUInt16","C:\\Armory_04_win64_b27\\Armory\\armsdk\\Kha\\Tools\\haxe\\std/haxe/io/Input.hx",243,0x9819fd4c)
HX_LOCAL_STACK_FRAME(_hx_pos_a92c61cbc45a4140_281_readInt32,"haxe.io.Input","readInt32",0xde2f3154,"haxe.io.Input.readInt32","C:\\Armory_04_win64_b27\\Armory\\armsdk\\Kha\\Tools\\haxe\\std/haxe/io/Input.hx",281,0x9819fd4c)
HX_LOCAL_STACK_FRAME(_hx_pos_a92c61cbc45a4140_303_readString,"haxe.io.Input","readString",0xfdebd00b,"haxe.io.Input.readString","C:\\Armory_04_win64_b27\\Armory\\armsdk\\Kha\\Tools\\haxe\\std/haxe/io/Input.hx",303,0x9819fd4c)
namespace haxe{
namespace io{

void Input_obj::__construct() { }

Dynamic Input_obj::__CreateEmpty() { return new Input_obj; }

void *Input_obj::_hx_vtable = 0;

Dynamic Input_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Input_obj > _hx_result = new Input_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Input_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5c18cd32;
}

int Input_obj::readByte(){
            	HX_STACKFRAME(&_hx_pos_a92c61cbc45a4140_51_readByte)
HXDLIN(  51)		HX_STACK_DO_THROW(HX_("Not implemented",15,1e,32,34));
HXDLIN(  51)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,readByte,return )

int Input_obj::readBytes( ::haxe::io::Bytes s,int pos,int len){
            	HX_STACKFRAME(&_hx_pos_a92c61cbc45a4140_64_readBytes)
HXLINE(  65)		int k = len;
HXLINE(  66)		::Array< unsigned char > b = s->b;
HXLINE(  67)		bool _hx_tmp;
HXDLIN(  67)		bool _hx_tmp1;
HXDLIN(  67)		if ((pos >= (int)0)) {
HXLINE(  67)			_hx_tmp1 = (len < (int)0);
            		}
            		else {
HXLINE(  67)			_hx_tmp1 = true;
            		}
HXDLIN(  67)		if (!(_hx_tmp1)) {
HXLINE(  67)			_hx_tmp = ((pos + len) > s->length);
            		}
            		else {
HXLINE(  67)			_hx_tmp = true;
            		}
HXDLIN(  67)		if (_hx_tmp) {
HXLINE(  68)			HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds_dyn());
            		}
HXLINE(  69)		try {
            			HX_STACK_CATCHABLE( ::haxe::io::Eof, 0);
HXLINE(  70)			while((k > (int)0)){
HXLINE(  76)				b[pos] = this->readByte();
HXLINE(  80)				pos = (pos + (int)1);
HXLINE(  81)				k = (k - (int)1);
            			}
            		}
            		catch( ::Dynamic _hx_e){
            			if (_hx_e.IsClass<  ::haxe::io::Eof >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::haxe::io::Eof eof = _hx_e;
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  84)		return (len - k);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Input_obj,readBytes,return )

bool Input_obj::set_bigEndian(bool b){
            	HX_STACKFRAME(&_hx_pos_a92c61cbc45a4140_95_set_bigEndian)
HXLINE(  96)		this->bigEndian = b;
HXLINE(  97)		return b;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,set_bigEndian,return )

void Input_obj::readFullBytes( ::haxe::io::Bytes s,int pos,int len){
            	HX_STACKFRAME(&_hx_pos_a92c61cbc45a4140_135_readFullBytes)
HXDLIN( 135)		while((len > (int)0)){
HXLINE( 136)			int k = this->readBytes(s,pos,len);
HXLINE( 137)			if ((k == (int)0)) {
HXLINE( 138)				HX_STACK_DO_THROW(::haxe::io::Error_obj::Blocked_dyn());
            			}
HXLINE( 139)			pos = (pos + k);
HXLINE( 140)			len = (len - k);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Input_obj,readFullBytes,(void))

 ::haxe::io::Bytes Input_obj::read(int nbytes){
            	HX_STACKFRAME(&_hx_pos_a92c61cbc45a4140_147_read)
HXLINE( 148)		 ::haxe::io::Bytes s = ::haxe::io::Bytes_obj::alloc(nbytes);
HXLINE( 149)		int p = (int)0;
HXLINE( 150)		while((nbytes > (int)0)){
HXLINE( 151)			int k = this->readBytes(s,p,nbytes);
HXLINE( 152)			if ((k == (int)0)) {
HXLINE( 152)				HX_STACK_DO_THROW(::haxe::io::Error_obj::Blocked_dyn());
            			}
HXLINE( 153)			p = (p + k);
HXLINE( 154)			nbytes = (nbytes - k);
            		}
HXLINE( 156)		return s;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,read,return )

Float Input_obj::readFloat(){
            	HX_STACKFRAME(&_hx_pos_a92c61cbc45a4140_200_readFloat)
HXDLIN( 200)		return ::haxe::io::FPHelper_obj::i32ToFloat(this->readInt32());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,readFloat,return )

int Input_obj::readInt8(){
            	HX_STACKFRAME(&_hx_pos_a92c61cbc45a4140_217_readInt8)
HXLINE( 218)		int n = this->readByte();
HXLINE( 219)		if ((n >= (int)128)) {
HXLINE( 220)			return (n - (int)256);
            		}
HXLINE( 221)		return n;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,readInt8,return )

int Input_obj::readInt16(){
            	HX_STACKFRAME(&_hx_pos_a92c61cbc45a4140_229_readInt16)
HXLINE( 230)		int ch1 = this->readByte();
HXLINE( 231)		int ch2 = this->readByte();
HXLINE( 232)		int n;
HXDLIN( 232)		if (this->bigEndian) {
HXLINE( 232)			n = ((int)ch2 | (int)((int)ch1 << (int)(int)8));
            		}
            		else {
HXLINE( 232)			n = ((int)ch1 | (int)((int)ch2 << (int)(int)8));
            		}
HXLINE( 233)		if ((((int)n & (int)(int)32768) != (int)0)) {
HXLINE( 234)			return (n - (int)65536);
            		}
HXLINE( 235)		return n;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,readInt16,return )

int Input_obj::readUInt16(){
            	HX_STACKFRAME(&_hx_pos_a92c61cbc45a4140_243_readUInt16)
HXLINE( 244)		int ch1 = this->readByte();
HXLINE( 245)		int ch2 = this->readByte();
HXLINE( 246)		if (this->bigEndian) {
HXLINE( 246)			return ((int)ch2 | (int)((int)ch1 << (int)(int)8));
            		}
            		else {
HXLINE( 246)			return ((int)ch1 | (int)((int)ch2 << (int)(int)8));
            		}
HXDLIN( 246)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,readUInt16,return )

int Input_obj::readInt32(){
            	HX_STACKFRAME(&_hx_pos_a92c61cbc45a4140_281_readInt32)
HXLINE( 282)		int ch1 = this->readByte();
HXLINE( 283)		int ch2 = this->readByte();
HXLINE( 284)		int ch3 = this->readByte();
HXLINE( 285)		int ch4 = this->readByte();
HXLINE( 296)		if (this->bigEndian) {
HXLINE( 296)			return ((int)((int)((int)ch4 | (int)((int)ch3 << (int)(int)8)) | (int)((int)ch2 << (int)(int)16)) | (int)((int)ch1 << (int)(int)24));
            		}
            		else {
HXLINE( 296)			return ((int)((int)((int)ch1 | (int)((int)ch2 << (int)(int)8)) | (int)((int)ch3 << (int)(int)16)) | (int)((int)ch4 << (int)(int)24));
            		}
HXDLIN( 296)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,readInt32,return )

::String Input_obj::readString(int len){
            	HX_STACKFRAME(&_hx_pos_a92c61cbc45a4140_303_readString)
HXLINE( 304)		 ::haxe::io::Bytes b = ::haxe::io::Bytes_obj::alloc(len);
HXLINE( 305)		this->readFullBytes(b,(int)0,len);
HXLINE( 309)		return b->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,readString,return )


Input_obj::Input_obj()
{
}

hx::Val Input_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { return hx::Val( read_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readByte") ) { return hx::Val( readByte_dyn() ); }
		if (HX_FIELD_EQ(inName,"readInt8") ) { return hx::Val( readInt8_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bigEndian") ) { return hx::Val( bigEndian ); }
		if (HX_FIELD_EQ(inName,"readBytes") ) { return hx::Val( readBytes_dyn() ); }
		if (HX_FIELD_EQ(inName,"readFloat") ) { return hx::Val( readFloat_dyn() ); }
		if (HX_FIELD_EQ(inName,"readInt16") ) { return hx::Val( readInt16_dyn() ); }
		if (HX_FIELD_EQ(inName,"readInt32") ) { return hx::Val( readInt32_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readUInt16") ) { return hx::Val( readUInt16_dyn() ); }
		if (HX_FIELD_EQ(inName,"readString") ) { return hx::Val( readString_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_bigEndian") ) { return hx::Val( set_bigEndian_dyn() ); }
		if (HX_FIELD_EQ(inName,"readFullBytes") ) { return hx::Val( readFullBytes_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Input_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"bigEndian") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_bigEndian(inValue.Cast< bool >()) );bigEndian=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Input_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bigEndian","\x7b","\xd5","\x5a","\x20"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Input_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Input_obj,bigEndian),HX_HCSTRING("bigEndian","\x7b","\xd5","\x5a","\x20")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Input_obj_sStaticStorageInfo = 0;
#endif

static ::String Input_obj_sMemberFields[] = {
	HX_HCSTRING("bigEndian","\x7b","\xd5","\x5a","\x20"),
	HX_HCSTRING("readByte","\x7e","\xf9","\x1a","\x69"),
	HX_HCSTRING("readBytes","\x35","\x55","\x7f","\x8e"),
	HX_HCSTRING("set_bigEndian","\x5e","\x8b","\xc4","\x26"),
	HX_HCSTRING("readFullBytes","\x26","\x02","\x0b","\xce"),
	HX_HCSTRING("read","\x56","\x4b","\xa7","\x4b"),
	HX_HCSTRING("readFloat","\x66","\x12","\x7e","\xd3"),
	HX_HCSTRING("readInt8","\xdf","\x1e","\xb3","\x6d"),
	HX_HCSTRING("readInt16","\x5e","\xde","\x07","\x8f"),
	HX_HCSTRING("readUInt16","\xd5","\x1c","\x8b","\x12"),
	HX_HCSTRING("readInt32","\x18","\xe0","\x07","\x8f"),
	HX_HCSTRING("readString","\xc7","\x0c","\xac","\x0a"),
	::String(null()) };

static void Input_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Input_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Input_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Input_obj::__mClass,"__mClass");
};

#endif

hx::Class Input_obj::__mClass;

void Input_obj::__register()
{
	hx::Object *dummy = new Input_obj;
	Input_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.io.Input","\xaa","\x0e","\xf5","\x9f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Input_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Input_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Input_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Input_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Input_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Input_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace io

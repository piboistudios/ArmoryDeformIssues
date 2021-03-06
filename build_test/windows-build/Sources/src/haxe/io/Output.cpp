// Generated by Haxe 3.4.4 (git build master @ 99b08bb)
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_FPHelper
#include <haxe/io/FPHelper.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_ea66c4da0af87a88_47_writeByte,"haxe.io.Output","writeByte",0xb4fe513a,"haxe.io.Output.writeByte","C:\\Armory_04_win64_b27\\Armory\\armsdk\\Kha\\Tools\\haxe\\std/haxe/io/Output.hx",47,0x68b9bb05)
HX_LOCAL_STACK_FRAME(_hx_pos_ea66c4da0af87a88_57_writeBytes,"haxe.io.Output","writeBytes",0xa988c1f9,"haxe.io.Output.writeBytes","C:\\Armory_04_win64_b27\\Armory\\armsdk\\Kha\\Tools\\haxe\\std/haxe/io/Output.hx",57,0x68b9bb05)
HX_LOCAL_STACK_FRAME(_hx_pos_ea66c4da0af87a88_93_close,"haxe.io.Output","close",0xe726bfeb,"haxe.io.Output.close","C:\\Armory_04_win64_b27\\Armory\\armsdk\\Kha\\Tools\\haxe\\std/haxe/io/Output.hx",93,0x68b9bb05)
HX_LOCAL_STACK_FRAME(_hx_pos_ea66c4da0af87a88_106_write,"haxe.io.Output","write",0x6f1d1512,"haxe.io.Output.write","C:\\Armory_04_win64_b27\\Armory\\armsdk\\Kha\\Tools\\haxe\\std/haxe/io/Output.hx",106,0x68b9bb05)
HX_LOCAL_STACK_FRAME(_hx_pos_ea66c4da0af87a88_136_writeFloat,"haxe.io.Output","writeFloat",0xee877f2a,"haxe.io.Output.writeFloat","C:\\Armory_04_win64_b27\\Armory\\armsdk\\Kha\\Tools\\haxe\\std/haxe/io/Output.hx",136,0x68b9bb05)
HX_LOCAL_STACK_FRAME(_hx_pos_ea66c4da0af87a88_224_writeInt32,"haxe.io.Output","writeInt32",0xaa114cdc,"haxe.io.Output.writeInt32","C:\\Armory_04_win64_b27\\Armory\\armsdk\\Kha\\Tools\\haxe\\std/haxe/io/Output.hx",224,0x68b9bb05)
namespace haxe{
namespace io{

void Output_obj::__construct() { }

Dynamic Output_obj::__CreateEmpty() { return new Output_obj; }

void *Output_obj::_hx_vtable = 0;

Dynamic Output_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Output_obj > _hx_result = new Output_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Output_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3473efad;
}

void Output_obj::writeByte(int c){
            	HX_STACKFRAME(&_hx_pos_ea66c4da0af87a88_47_writeByte)
HXDLIN(  47)		HX_STACK_DO_THROW(HX_("Not implemented",15,1e,32,34));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Output_obj,writeByte,(void))

int Output_obj::writeBytes( ::haxe::io::Bytes s,int pos,int len){
            	HX_STACKFRAME(&_hx_pos_ea66c4da0af87a88_57_writeBytes)
HXLINE(  59)		bool _hx_tmp;
HXDLIN(  59)		bool _hx_tmp1;
HXDLIN(  59)		if ((pos >= (int)0)) {
HXLINE(  59)			_hx_tmp1 = (len < (int)0);
            		}
            		else {
HXLINE(  59)			_hx_tmp1 = true;
            		}
HXDLIN(  59)		if (!(_hx_tmp1)) {
HXLINE(  59)			_hx_tmp = ((pos + len) > s->length);
            		}
            		else {
HXLINE(  59)			_hx_tmp = true;
            		}
HXDLIN(  59)		if (_hx_tmp) {
HXLINE(  60)			HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds_dyn());
            		}
HXLINE(  62)		::Array< unsigned char > b = s->b;
HXLINE(  63)		int k = len;
HXLINE(  64)		while((k > (int)0)){
HXLINE(  70)			this->writeByte(b->__get(pos));
HXLINE(  76)			pos = (pos + (int)1);
HXLINE(  77)			k = (k - (int)1);
            		}
HXLINE(  79)		return len;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Output_obj,writeBytes,return )

void Output_obj::close(){
            	HX_STACKFRAME(&_hx_pos_ea66c4da0af87a88_93_close)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Output_obj,close,(void))

void Output_obj::write( ::haxe::io::Bytes s){
            	HX_STACKFRAME(&_hx_pos_ea66c4da0af87a88_106_write)
HXLINE( 107)		int l = s->length;
HXLINE( 108)		int p = (int)0;
HXLINE( 109)		while((l > (int)0)){
HXLINE( 110)			int k = this->writeBytes(s,p,l);
HXLINE( 111)			if ((k == (int)0)) {
HXLINE( 111)				HX_STACK_DO_THROW(::haxe::io::Error_obj::Blocked_dyn());
            			}
HXLINE( 112)			p = (p + k);
HXLINE( 113)			l = (l - k);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Output_obj,write,(void))

void Output_obj::writeFloat(Float x){
            	HX_STACKFRAME(&_hx_pos_ea66c4da0af87a88_136_writeFloat)
HXDLIN( 136)		this->writeInt32(::haxe::io::FPHelper_obj::floatToI32(x));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Output_obj,writeFloat,(void))

void Output_obj::writeInt32(int x){
            	HX_STACKFRAME(&_hx_pos_ea66c4da0af87a88_224_writeInt32)
HXDLIN( 224)		if (this->bigEndian) {
HXLINE( 225)			this->writeByte(hx::UShr(x,(int)24));
HXLINE( 226)			this->writeByte(((int)((int)x >> (int)(int)16) & (int)(int)255));
HXLINE( 227)			this->writeByte(((int)((int)x >> (int)(int)8) & (int)(int)255));
HXLINE( 228)			this->writeByte(((int)x & (int)(int)255));
            		}
            		else {
HXLINE( 230)			this->writeByte(((int)x & (int)(int)255));
HXLINE( 231)			this->writeByte(((int)((int)x >> (int)(int)8) & (int)(int)255));
HXLINE( 232)			this->writeByte(((int)((int)x >> (int)(int)16) & (int)(int)255));
HXLINE( 233)			this->writeByte(hx::UShr(x,(int)24));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Output_obj,writeInt32,(void))


Output_obj::Output_obj()
{
}

hx::Val Output_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return hx::Val( close_dyn() ); }
		if (HX_FIELD_EQ(inName,"write") ) { return hx::Val( write_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bigEndian") ) { return hx::Val( bigEndian ); }
		if (HX_FIELD_EQ(inName,"writeByte") ) { return hx::Val( writeByte_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"writeBytes") ) { return hx::Val( writeBytes_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeFloat") ) { return hx::Val( writeFloat_dyn() ); }
		if (HX_FIELD_EQ(inName,"writeInt32") ) { return hx::Val( writeInt32_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Output_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"bigEndian") ) { bigEndian=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Output_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bigEndian","\x7b","\xd5","\x5a","\x20"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Output_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Output_obj,bigEndian),HX_HCSTRING("bigEndian","\x7b","\xd5","\x5a","\x20")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Output_obj_sStaticStorageInfo = 0;
#endif

static ::String Output_obj_sMemberFields[] = {
	HX_HCSTRING("bigEndian","\x7b","\xd5","\x5a","\x20"),
	HX_HCSTRING("writeByte","\x87","\x13","\xd7","\x49"),
	HX_HCSTRING("writeBytes","\x0c","\x03","\x5a","\x52"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("write","\xdf","\x6c","\x59","\xd0"),
	HX_HCSTRING("writeFloat","\x3d","\xc0","\x58","\x97"),
	HX_HCSTRING("writeInt32","\xef","\x8d","\xe2","\x52"),
	::String(null()) };

static void Output_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Output_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Output_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Output_obj::__mClass,"__mClass");
};

#endif

hx::Class Output_obj::__mClass;

void Output_obj::__register()
{
	hx::Object *dummy = new Output_obj;
	Output_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.io.Output","\x61","\x10","\x0b","\xc7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Output_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Output_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Output_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Output_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Output_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Output_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace io
